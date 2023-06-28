#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



struct Track {
    string artist, title, genre;
    int year;
};

typedef vector<Track> Music;

bool orden (const Track& a, const Track& b) {
    if (a.artist == b.artist) {
        if (a.year == b.year) return a.title < b.title;
        return a.year < b.year;
    }
    return a.artist < b.artist;
}

vector<Track> read_tracks (int n) {
    Music m(n);
    for (int i = 0; i < n; ++i) {
        cin >> m[i].artist >> m[i].title >> m[i].genre >> m[i].year;
    }
    return m;
}
    
void print_track(const Track& t) {
    cout << t.artist;
    cout << " (" << t.year;
    cout << ") " << t.title << " (" << t.genre << ")" << endl;
}

int main() {
    int n;
    cin >> n;
    Music m = read_tracks(n);
    
    sort (m.begin(), m.end(), orden);
    
    string genero;
    while (cin >> genero) {
        for (int i = 0; i < n; ++i) {
            if (m[i].genre == genero) {
                print_track(m[i]);
            }
        }
    }
}
    
