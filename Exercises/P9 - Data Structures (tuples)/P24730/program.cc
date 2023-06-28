#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Reward {
    string name;
    int candy;
    int carrot;
};

typedef vector<Reward> Register;

bool most_candy (const Reward& a, const Reward& b) {
    if (a.candy == b.candy) {
        if (a.carrot == b.carrot) {
            if (a.name.size() == b.name.size()) return a.name < b.name;
            return a.name.size() < b.name.size();
            
        }
        return a.carrot > b.carrot;
    }
    return a.candy > b.candy;
}
    

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int p;
        cin >> p;
        Register r (p);
        for (int j = 0; j < p; ++j) cin >> r[j].name >> r[j].candy >> r[j].carrot;
        
        sort (r.begin(), r.end(), most_candy);
        
        for (int j = 0; j < p; ++j) cout << r[j].name << endl;
        cout << endl;
    }
}
    
        
        
