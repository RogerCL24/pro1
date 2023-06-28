#include<iostream>
#include<string>

using namespace std;

// Pre: p, pref están formadas por letras minúsculas
// Post: retorna true si pref es un prefijo de p, false en caso contrario
bool prefijo(const string& p, const string& pref) {
    char x = p[0];
    
    if (x == pref[0]) {
        int i = 1;
        bool found = false;
        while (i < pref.size() and not found) {
            if (p[i] != pref[i]) found = true;
            ++i;
        }
        if (not found) return true;
    }   
    return false;
}

int main() {
    int n;
    int i = 0;
    while (cin >> n) {
        ++i;
        int counter = 1;
        string word1;
        cin >> word1;
        for (int j = 0; j < n - 1; ++j) {
            string word2;
            cin >> word2;
            if (prefijo (word1, word2)) ++counter;
        }
        cout << "Linea " << i << ": " << counter << " - " << word1 << endl;
    }
}
    
