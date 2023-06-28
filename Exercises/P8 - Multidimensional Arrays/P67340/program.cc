#include<iostream>
#include<vector>

using namespace std;

typedef vector<bool> Row;
typedef vector<Row> Chess;


void menace (Chess& tablero, int& f, int& c) {
   
    int size = tablero.size() - 1;
    int length = tablero[0].size() - 1;
    
    for (int i = 0; i < 4; ++i) {
        bool finish = false;
        bool found = false;
        int count = 1;
        while (not found) {
            if (i == 0) { //up-right
                while (not finish and f - count >= 0 and c + count <= length) {
                    if (tablero[f-count][c+count]) {
                        cout << '(' << f+1 << ',' << c+1 << ")<->(" << f-count+1 << ',' << c+count+1 << ')' << endl;
                        finish = true;
                    }
                    else ++count;
                }
            }
            if (i == 1) { //up-left
                while (not finish and f - count >= 0 and c - count >= 0) {
                    if (tablero[f-count][c-count]) {
                        cout << '(' << f+1 << ',' << c+1 << ")<->(" << f-count+1 << ',' << c-count+1 << ')' << endl;
                        finish = true;
                    }
                    else ++count;
                }
            }
            if (i == 2) { //down-right
                while (not finish and f + count <= size and c + count <= length) {
                    if (tablero[f+count][c+count]) {
                        cout << '(' << f+1 << ',' << c+1 << ")<->(" << f+count+1 << ',' << c+count+1 << ')' << endl;
                        finish = true;
                    }
                    else ++count;
                }
            }
            if (i == 3) { //down-left
                while (not finish and f + count <= size and c - count >= 0) {
                    if (tablero[f+count][c-count]) {
                        cout << '(' << f+1 << ',' << c+1 << ")<->(" << f+count+1 << ',' << c-count+1 << ')' << endl;
                        finish = true;
                    }
                    else ++count;
                }
            }
            found = true;
        }
    }
}
            
int main() {
    int f, c;
    
    cin >> f >> c;
    
    Chess tablero (f, Row(c, false));
    
    char alfil;
    
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> alfil;
            if (alfil == 'X') tablero[i][j] = true;
        }
    }
    
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            if (tablero[i][j]) menace (tablero, i, j);
        }
    }
}
                
    
    
