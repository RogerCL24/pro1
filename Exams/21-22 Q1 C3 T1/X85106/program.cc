#include<iostream>
#include<vector>


using namespace std;

typedef vector<char> Binario;
typedef vector<Binario> Matriz;

// Pre: n > 0, m > 0
// Post: retorna una matriz de '0' y '1' con dimensiones n*m leída de la entrada
Matriz leer_matriz(int n, int m) {
    Matriz mat (n, Binario(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> mat[i][j];
    }
    return mat;
}
    
// Pre: -
// Post: escribe el string s, seguido por dos punts, seguido por el Binario b
void escribir(string s, const Binario& b) {
    cout << s << ":";
    for (int i = 0; i < b.size(); ++i) cout << " " << b[i];
    cout << endl;
}

// Pre: gamma.size() = epsilon.size()
// Post: retorna el consumo calculado como gamma*epsilon en decimal
int calcula_consumo(const Binario& gamma, const Binario& epsilon) {
    int sum1 = 0;
    int sum2 = 0;
    int n = gamma.size();
    int power = 1;
    for (int i = n - 1; i >= 0; --i) {
        if (gamma[i] == '1') sum1 += power;
        if (epsilon[i] == '1') sum2 += power;
        power *= 2;
    }
    return sum1 * sum2;
}
    
// Pre: mat.size > 0; 0 <= j < mat[0].size()
// Post: retorna el bit más frecuente en la columna j de mat. En caso de empate retorna '0'.
char bit_mas_comun(const Matriz& mat, int j) {
    int  n = mat.size();
    int counter0 = 0;
    int counter1 = 0;
    for (int i = 0; i < n; ++i) {
        if (mat[i][j] == '1') ++counter1;
        else ++counter0;
    }
    if (counter0 >= counter1) return '0';
    else return '1';
}
    
// Pre: mat.size > 0; gamma.size() == mat[0].size(); epsilon.size() == mat[0].size()
// Post: gamma y epsilon son el ratio gamma y epsilon de mat, respectivamente
void calcula_ratios(const Matriz& mat, Binario& gamma, Binario& epsilon) {
    int n = mat[0].size();
    
    for (int i = 0; i < n; ++i) gamma[i] = bit_mas_comun (mat, i);
    
    for (int i = 0; i < n; ++i) {
        if (gamma[i] == '1') epsilon[i] = '0';
        else epsilon[i] = '1';
    }
}
    
int main() {
 int n, m;
    while (cin >> n >> m) {
        Matriz mat = leer_matriz(n, m);
        Binario gamma(m);
        Binario epsilon(m);
        calcula_ratios(mat, gamma, epsilon);
        escribir("Gamma", gamma);
        escribir("Epsilon", epsilon); 
        cout << "Consumo: " << calcula_consumo(gamma, epsilon) << endl << endl;
    }
}
