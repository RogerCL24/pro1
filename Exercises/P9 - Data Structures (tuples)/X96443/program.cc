#include<iostream>
#include<vector>

using namespace std;

struct Coord {
    int x,y;
};

typedef vector< vector<char> > Matrix;

Coord seguentD (const Coord& p, int n) {
    Coord p1;
    
    if(p.x - 1 < 0 and p.y + 1 > n-1){
                p1.x = n - 1;
                p1.y = p.x + 1;
        }
        else if (p.x == n - 1 and p.y == n - 1){
                p1.x = 0;
                p1.y = 0;
        }
        else if (p.x - 1 < 0){
                p1.y = 0;
                p1.x = p.y + 1;
        }
        else if (p.y + 1 > n-1){
                p1.y = p.x + 1;
                p1.x = n - 1;
        }
        else{
                p1.x = p.x - 1;
                p1.y = p.y + 1;
        }
        return p1;

}

int main() {
    int n, l, d;
    Coord p;
    while (cin >> n >> d >> l >> p.x >> p.y) {
        Matrix m (n, vector <char> (n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) cin >> m[i][j];
        }
        
        int a = 0;
        vector<char> s (l);
        s[a] = m[p.x][p.y];
        ++a;
        while (a < l) {
            int j = 0;
            while (j < d + 1) {
                p = seguentD (p ,n);
                ++j;
            }
            s[a] = m[p.x][p.y];
            ++a;
        }
        
        int k = 0;
        while (k < s.size()) {
            if (s[k] == 'X' and s[k + 1] == 'X') {
                cout << ' ';
                ++k;
            }
            else cout << s[k];
            ++k;
        }
        cout << endl;
    }
}
            
            
            
              
