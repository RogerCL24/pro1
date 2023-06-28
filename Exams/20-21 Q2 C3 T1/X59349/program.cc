#include<iostream>
#include<vector>

using namespace std;

typedef vector<char> Row;
typedef vector<Row> Flag;


int column_count (const Flag& flag) {
    int n = flag.size();
    int counter = 0;
    
    for (int i = 0; i < n; ++i) {
        bool one = false;
        bool first = false;
        int posx = 0;
        int posy = 0;
        for (int j = 1; j < n; ++j) {
            if (flag[j][i] != flag[j - 1][i]) {
                one = true;
                posx = i;
                posy = j;
            }
            if (flag[j][i] != flag[j - 1][i] and first) one = false;
            if (one) first = true;
        }
        bool two = false;
        bool found = false;
        int k = 1;
        while (k < n and not found and one) {
            if (k == posy) {
                if (posx >= n - 1 - k) {
                    two = true;
                }
                found = true;
            }
            ++k;
        }
        if (two and one) ++counter;
    }
    return counter;
}
            
Flag read_flag (int& n) {
    Flag v (n, Row(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cin >> v[i][j];
    }
    return v;
}

int main() {
    int n;
    while (cin >> n) {
        Flag flag = read_flag(n);
        cout << column_count(flag) << endl;
    }
}
