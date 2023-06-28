#include<iostream>
#include<vector>

using namespace std;

void update(vector<int>& v, int x, int b) {
    while (x != 0) {
        ++v[x%b];
        x /= b;
    }
}

bool stable(int x, int y, int b) {
    vector<int> v (b, 0);
    update(v, x, b);
    update(v, y, b);
    
    vector<int> v_res (b, 0);
    update(v_res, x*y, b);
    
    bool perfect = true;
    for (int i = 0; i < b; ++i) {
        if (v[i] != 0 and v_res[i] != v[i]) perfect = false;
    }
    return perfect;
}

void print_base(int x, int b) {
    if (x != 0) {
        print_base(x/b, b);
        cout << uppercase << hex << x%b;
    }
}




int main() {
    int x, y;
    
    while (cin >> x >> y) {
        bool found = false;
        cout << "solutions for " << x << " and " << y << endl;
        
        for (int i = 2; i <= 16; ++i) {
            if (stable(x, y, i)) {
                found = true;
                print_base(x, i);
                cout << " * ";
                print_base(y, i);
                cout << " = ";
                print_base(x*y, i);
                cout << dec << " (base " << i << ')' << endl;
            }
        }
        if (not found) cout << "none of them" << endl;
        
        cout << endl;
    }
}
        
