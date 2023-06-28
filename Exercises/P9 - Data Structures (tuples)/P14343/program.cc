#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

struct Enviament {
    string dni;
    string exer;
    int temps;
    string res;
};

struct Alumne {
    string dni;
    int num;
};

struct Results {
    Alumne env_verds;
    Alumne ex_verds;
    Alumne ex_verms;
    Alumne ex_in;
    Alumne max_temp;
};

typedef vector<Enviament> Historia;

bool most_little(const Enviament& a, const Enviament& b) {
    if (a.dni == b.dni) return a.exer < b.exer;
    return a.dni < b.dni;
}

void update (int intent, Alumne& actual, const string& alumneint) {
    if (intent > actual.num) {
        actual.dni = alumneint;
        actual.num = intent;
    }
}

void calcula_resultats (const Historia& h, Results& r) {
    r.max_temp.num = r.env_verds.num = r.ex_verds.num = r.ex_verms.num = r.ex_in.num = 0;
    int i = 0;
    
    while (i < h.size()) {
        string alum = h[i].dni;
        int auxenv_verds, auxex_in, auxex_verds, auxex_verms;
        auxenv_verds = auxex_in = auxex_verds = auxex_verms = 0;
        while (i < h.size() and h[i].dni == alum) {
            string exer = h[i].exer;
            bool hihaverd, hihagroc, hihavermell;
            hihaverd = hihagroc = hihavermell = false;
            while (i < h.size() and h[i].dni == alum and h[i].exer == exer) {
                if (h[i].res == "groc") hihagroc = true;
                if (h[i].res == "vermell") hihavermell = true;
                if (h[i].res == "verd") {
                    ++auxenv_verds;
                    hihaverd = true;
                }
                update (h[i].temps, r.max_temp, alum);
                ++i;
            }
            if (hihaverd) ++auxex_verds;
            if (hihavermell and not hihaverd and not hihagroc) ++auxex_verms;
            ++auxex_in;
        }
        update (auxex_verds, r.ex_verds, alum);
        update (auxex_verms, r.ex_verms, alum);
        update (auxex_in, r.ex_in, alum);
        update (auxenv_verds, r.env_verds, alum);
    }
}

void write (const Alumne& a, const string& m1, bool pintanum) {
    cout << m1;
    if (a.num != 0) {
        cout << a.dni;
        if (pintanum) cout << " (" << a.num << ')';
        cout << endl;
    }
    else cout << '-' << endl;
}

int main() {
    int n;
    cin >> n;
    
    Historia h(n);
    for (int i = 0; i < n; ++i) cin >> h[i].dni >> h[i].exer >> h[i].temps >> h[i].res;
    
    sort(h.begin(), h.end(), most_little);
    
    Results r;
    calcula_resultats(h, r);
    
    write(r.env_verds, "alumne amb mes enviaments verds:     ", true);
    write(r.ex_verds, "alumne amb mes exercicis verds:      ", true);
    write(r.ex_verms, "alumne amb mes exercicis vermells:   ", true);
    write(r.ex_in, "alumne amb mes exercicis intentats:  ", true);
    write(r.max_temp, "alumne que ha fet l'ultim enviament: ", false);
}
