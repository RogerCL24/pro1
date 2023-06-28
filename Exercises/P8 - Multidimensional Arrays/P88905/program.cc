#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& a, const Matrix& b) {
    int p = a.size();
    int q = b.size();
    int r = b[0].size();
    Matrix m(p, vector<int>(r, 0));
    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < r; ++j) {
            int valor = 0;
            for (int k = 0; k < q; ++k) valor += a[i][k]*b[k][j];
            m[i][j] = valor;
        }
    }
    return m;
}

Matrix read_data() {
    int f, c;
    cin >> f >> c;
    Matrix m(f, vector<int>(c));
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> m[i][j];
        }
    }
    return m;
}

int main() {
    Matrix a = read_data();
    Matrix b = read_data();
    Matrix p = product(a, b);
    int f = p.size();
    int c = p[0].size();
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << p[i][j];
        }
        cout << endl;
    }
}
