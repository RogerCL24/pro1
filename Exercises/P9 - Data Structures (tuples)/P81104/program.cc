#include<iostream>
#include<vector>

using namespace std;

struct Assignatura {
    string nom;
    double nota;
};

struct Alumne {
    string nom;
    int dni;
    vector<Assignatura> ass;
};


double nota(const vector<Alumne>& alums, int dni, string nom) {
    int size = alums.size();
    bool found = false;
    int i = 0;
    double mark = -1;
    
    while (not found and i < size) {
        if (alums[i].dni == dni) {
            int n = alums[i].ass.size();
            for (int j = 0; j < n; ++j) {
                if (alums[i].ass[j].nom == nom) {
                    mark = alums[i].ass[j].nota;
                    found = true;
                }
                
            }
            if (not found) found = true;
        }
        else ++i;
    }
    return mark;
}
    
double mitjana(const vector<Assignatura>& ass) {
    double ave = 0;
    int n = ass.size();
    
    if (n == 0) return -1;
    else {
        int counter = 0;
        for (int i = 0; i < n; ++i) {
            if (ass[i].nota != -1) {
                ave += ass[i].nota;
                ++counter;
            }
        }
        if (counter == 0) return -1;
        else return ave/double(counter);
    }
}
    
void compta(const vector<Alumne>& alums, int dni, string nom, int& com) {
    double mark = nota (alums, dni, nom);
    com = 0;
    
    for (int i = 0; i < alums.size(); ++i) {
        if (mitjana (alums[i].ass) > mark) ++com;
    }
}
    
int main() {
    int n;
    cin >> n;
    vector<Alumne> a(n);
    
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> a[i].nom >> a[i].dni >> num;
        vector <Assignatura> sub (num);
        for (int j = 0; j < num; ++j) {
            cin >> sub[j].nom >> sub[j].nota;
        }
        a[i].ass = sub;
    }
    
    string subject;
    int nif;
    
    while (cin >> nif >> subject) {
        int com = 0;
        compta (a, nif, subject, com);
        cout << com << endl;
    }
}
    
    
            
