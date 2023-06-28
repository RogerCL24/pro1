#include <iostream>
#include <vector>
using namespace std;

struct Book {
    string title;       // títol del llibre
    int nb_pag;         // número de pàginas del llibre
};

struct Author {
    string name;        // nom de l'autor
    Book bestseller;    // llibre supervendes
};

typedef vector<Author> Library;


Library read_data() {
    int n;
    cin >> n;
    Library v (n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].name >> v[i].bestseller.title >> v[i].bestseller.nb_pag;
    }
    return v;
}

int main() {
    Library v = read_data();
    char c;
    int p;
    while (cin >> c >> p) {
        cout << "-- begin query" << endl;
        int n = v.size();
        for (int i = 0; i < n; ++i) {
            if (v[i].bestseller.title[0] == c and v[i].bestseller.nb_pag > p) {
                cout << v[i].name << endl;
            }
        }
        cout << "-- end query" << endl;
    }
}
