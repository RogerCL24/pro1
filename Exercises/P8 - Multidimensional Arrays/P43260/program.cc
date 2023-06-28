#include<iostream>
#include<vector>

using namespace std;

typedef vector<char> Row;
typedef vector<Row> Matrix;

void data_out (Matrix& cross) {
    int f = cross.size();
    int c = cross[0].size();
    
    for (int i = 0; i < f; ++i) {
        cout << '|';
        for (int j = 0; j < c; ++j) cout << cross[i][j];
    
        cout << '|' << endl;
    }
}

Matrix recursive_cross (Matrix& v, int n) {
    if (n == 0) return v;
    int f = v.size();
    int c = v[0].size();
    
    Matrix m ((3*f), Row((3*c),' '));
    int x, y;
    
    x = c;
    y = 0;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) m[i+y][j+x] = v[i][j];
    }
    
    x = 0;
    y = f;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) m[i+y][j+x] = v[i][j];
    }
    
    x = c;
    y = f;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) m[i+y][j+x] = v[i][j];
    }
    
    x = c * 2;
    y = f;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) m[i+y][j+x] = v[i][j];
    }
    x = c;
    y = f * 2;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) m[i+y][j+x] = v[i][j];
    }
    
    return recursive_cross(m, n - 1);
}

int main() {
    Matrix v (3, Row (3, ' '));
    
    v[0][1] = '|';
    v[2][1] = '|';
    v[1][1] = 'O';
    v[1][0] = '-';
    v[1][2] = '-';
    
    int n;
    cin >> n;
    
    Matrix c = recursive_cross (v, n - 1);
    
    data_out(c);
}
