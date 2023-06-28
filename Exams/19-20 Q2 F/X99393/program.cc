#include<iostream>
#include<vector>

using namespace std;

struct Asignatura {
    int id;
    double creditos;
    double nota;
};

struct Alumno {
    int dni;
    vector <Asignatura> asigs;
};

typedef vector <Alumno> Alumnos;

// Pre: --
// Post: retorna el número d'alumnes a alus que superen el factor alfa
int supera_alfa(const Alumnos& alus) {
    const int alfa = 5;
    int n = alus.size();
    
    int counter = 0;
    for (int i = 0; i < n; ++i) {
       int size = alus[i].asigs.size();
       double sum1 = 0;
       double sum2 = 0;
       for (int j = 0; j < size; ++j) {
           sum1 += alus[i].asigs[j].creditos * alus[i].asigs[j].nota;
           sum2 += alus[i].asigs[j].creditos;
       }
       if (sum1/sum2 >= alfa) ++counter;
    }
    return counter; 
}

// Pre: a l'entrada hi ha informació de m assignatures
// Post: retorna un vector de Asignatura amb la informació de l'entrada,
//          mantenint l'ordre d'aparició
vector <Asignatura> lee_asignaturas(int m) {
   vector <Asignatura> v (m);
   for (int i = 0; i < m; ++i) cin >> v[i].id >> v[i].creditos >> v[i].nota;
   
   return v;
}

int main() {
    int n;
    cin >> n;
    Alumnos a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].dni;
        int m;
        cin >> m;
        a[i].asigs = lee_asignaturas(m);
    }
    cout << supera_alfa(a) << endl;
}
