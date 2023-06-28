#include<iostream>
#include<vector>

using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

void swap(int& a, int& b) {
    int aux = a;

    a = b;
    b = aux;
}

void transpose(Matrix& m) {
    int c = m[0].size();
    
    Matrix reversed (c, Row(c));
    
    for (int i = 0; i < c; ++ i) {
        for (int j = 1 + i; j < c; ++j) {
            swap(m[i][j], m[j][i]);
        }
    }
}
    
int main() {
    int f;
    
    cin >> f;
    
    Matrix v(f, Row(f));
    
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < f; ++j) cin >> v[i][j];
        
    }
    
    transpose(v);
    
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < f; ++j) {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }

}
