#include<iostream>
#include<math.h>

using namespace std;

struct Punt {
    double x, y;
};

double distancia (const Punt& a, const Punt& b) {
    
    double c1 = a.x - b.x;
    double c2 = a.y - b.y;
    
    return sqrt(c1*c1 + c2*c2);
}
    
int main() {
    Punt a;
    Punt b;
    
    cin >> a.x >> a.y >> b.x >> b.y;
    
    cout << distancia (a, b) << endl;
}
    
    
    
