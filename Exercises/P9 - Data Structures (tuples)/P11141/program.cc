#include<iostream>
#include<vector>

using namespace std;

struct Estudiant {
    int dni;
    string nom;
    double nota;
    bool repetidor;
};

void informacio(const vector<Estudiant>& es, double& min, double& max, double& mitj) {
    int size = es.size();
    max = 0;
    min = 10;
    mitj = 0;
    int counter = 0;
    
    for (int i = 0; i < size; ++i) {
        if (not es[i].repetidor and es[i].nota >= 0) { 
            if (es[i].nota > max) max = es[i].nota;
            if (es[i].nota < min) min = es[i].nota;
            mitj += es[i].nota;
            ++counter;
        }
        
    }
    if (counter == 0) min = max = mitj = -1;
    
    else mitj /= double(counter);
}
            
            
