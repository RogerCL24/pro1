#include<iostream>
#include<math.h>

using namespace std;

struct Punt {
    double x, y;
};

void desplaca(Punt& p1, const Punt& p2) {
    p1.x += p2.x;
    p1.y += p2.y;
}

struct Cercle {
    Punt centre;
    double radi;
};

void escala(Cercle& c, double esc) {
    c.radi *= esc;
}
    

void desplaca(Cercle& c, const Punt& p) {
    c.centre.x += p.x;
    c.centre.y += p.y;
}
    
    
bool es_interior(const Punt& p, const Cercle& c) {
    int c1, c2;
    
    c1 = p.x - c.centre.x;
    c2 = p.y - c.centre.y;
    
    if (sqrt(c1*c1 + c2*c2) > c.radi) return false;
    else return true;
}
    
    
    
