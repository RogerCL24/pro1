#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Paraula{
    string par;
    int nom_ca, cops;
};

typedef vector<Paraula> paraula;

void llegir(paraula& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        cin >> v[i].par;
        v[i].nom_ca = v[i].par.size();
        v[i].cops = 1;
    }
}

void calcul1(paraula& v) {
    int n = v.size();
    for (int i = 1; i < n; ++i) {
        if (v[i].par == v[i - 1].par) {
            v[i].cops += v[i - 1].cops;
            v[i - 1].cops = 0;
        }
    }
}

//true si a < b
bool comp1(const Paraula& a, const Paraula& b) {
    return a.par < b.par;
}

//true si a < b
bool comp2(const Paraula& a, const Paraula& b) {
    return a.cops < b.cops;
}

void calcul2(paraula& v) {
    int n = v.size();
    int i = 0;
    while (v[i].cops == 0) ++i;
    for (int j = i; j < n; ++j) {
        if (v[j].cops == v[j - 1].cops) {
            v[j].nom_ca += v[j - 1].nom_ca;
        }
        else if (n > 2 and v[j - 1].cops != 0) cout << v[j - 1].cops << " : " << v[j - 1].nom_ca << endl;
    }
}

int main() {
    int n;
    while (cin >> n) {
            paraula v(n);
            llegir(v);
            sort(v.begin(), v.end(), comp1);
            calcul1(v);
            sort(v.begin(), v.end(), comp2);
            calcul2(v);
            if (v[n - 1].cops != 0)
                cout << v[n - 1].cops << " : " << v[n - 1].nom_ca << endl;
            cout << endl;
    }
}
