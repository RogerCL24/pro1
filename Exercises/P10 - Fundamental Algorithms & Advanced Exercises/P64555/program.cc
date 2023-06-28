#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Punt {
    int x, y, dist;
};

typedef vector <Punt> Coor;

void calc_dist (const Punt& p, Punt& c) {
    int x = c.x - p.x;
    int y = c.y - p.y;
    
    if (x < 0) x = 0 - x;
    if (y < 0) y = 0 - y;
    
    c.dist = x + y;
}

bool manhattan (const Punt& a, const Punt& b) {
    if (a.dist == b.dist) {
        if (a.x == b.x) return a.y < b.y;
        return a.x < b.x;
    }
    return a.dist < b.dist;
}
    
int main() {
    Punt p;
    cin >> p.x >> p.y;
    int n;
    cin >> n;
    
    Coor v (n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].x >> v[i].y;
        calc_dist(p, v[i]);
    }
    
    sort (v.begin(), v.end(), manhattan);
    
    int j = 0;
    while (j < n) {
        int a = v[j].dist;
        cout << "punts a distancia " << a << endl;
        while (a == v[j].dist) {
            cout << v[j].x << ' ' << v[j].y << endl;
            ++j;
        }
    }
}
            
            
    
    
        
    
    
    
    
    
    
