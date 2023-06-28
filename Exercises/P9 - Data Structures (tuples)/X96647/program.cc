#include<iostream>
#include<vector>
using namespace std;    // declaración de librerias y espacio de nombre

struct Punt {          // la tupla Punt
    double x,y;
};

int propietat(const vector<Punt>& v, Punt& b) {  // la funcion propietat, que mira que propiedad se incumple
    int prop = 1;                                // si no se incumple ninguna hacemos return 0
    b.x = b.y = 0.0;                             // reseteamos el punto B a 0, y suponemos que de entrada se incumple la propiedad 1
   

    for (int i = 0; i < v.size() and prop == 1; ++i) {
        for (int j = i+1; j < v.size() and prop == 1; ++j) {
            if (v[i].x != v[j].x or v[i].y != v[j].y) prop = 0;  // se mira si hay dos valores diferentes. Si es asi, se resetea prop a 0 (no se incumple ninguna propiedad)
        }
    }
    for (int i = 0; i < v.size(); ++i) {                        // realizamos la suma de todos los puntos
        b.x += v[i].x;
        b.y += v[i].y;
    }
    if (b.x != b.y and prop == 0) prop = 2;                     // miramos si se incumple la propiedad 2, si es asi, se establece el valor de prop a 2 
    b.x /= v.size();                                            // pero teniendo en cuenta que no se incumple la propiedad 1. Si el 1 se incumple, mantenemos el valor de prop a 1
    b.y /= v.size();                            // realizamos la media de los puntos, sacando el baricentro
    for (int i = 0; i < v.size() and prop == 0; ++i) {
        if (v[i].x == b.x and v[i].y == b.y) prop = 3;        //para finalizar, miramos si se incumple la propiedad 3. Si es asi, se establece el valor de prop a 3
    }
    return prop;                                          // se devuelve el valor de prop
}

bool baricentre (const vector<Punt>& v, Punt& b) {
    if (propietat(v,b) == 0) return true;             // Si no se incumple ninguna propiedad, se devuelve true (usamos la funcion propietat para saber si se incumple alguna)
    else return false;                                // Si propietat devuelve otro valor diferente a 0, se devuelve false
}



int main() {
    int n;                                              // el primer valor, que indicará el tamaño de cada vector punto
    while(cin >> n) {                          // mientras se pueda leer un valor tamaño
        vector<Punt> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i].x >> v[i].y;        // leemos cada vector
        Punt b;
        int prop = propietat(v,b);                      // Buscamos propiedades
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "baricentre: (" << b.x << ","<<b.y<<")" << endl;     // print del baricentro
        if (baricentre(v,b)) cout << "vector normalitzat" << endl;   // miramos si el vector esta normalizado.  
        else cout << "el vector no compleix la propietat " << prop << endl;   // si no es asi, indicamos que propiedad se incumple
        
    }
}