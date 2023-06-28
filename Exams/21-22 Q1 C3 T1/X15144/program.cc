#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Article {
    string identifier;
    string topic;
    int freq;
};

//pre: n > 0
//post: returns article vector formed by input channel data
vector<Article> initialize_art_vector(int n) {
    vector<Article> v (n);
    
    for (int i = 0; i < n; ++i) cin >> v[i].identifier >> v[i].topic;
    
    return v;
}

//pre: v is non-empty
//post: write vector on output
void write_art_vector(vector<Article>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        cout << v[i].topic << ' ' << v[i].freq << ' ' << v[i].identifier << endl;
    }
    
}

bool comp (const Article& a, const Article& b) {
    if (a.topic == b.topic) {
        if (a.freq == b.freq) return a.identifier < b.identifier;
        return a.freq > b.freq;
    }
    return a.topic < b.topic;
}

int effi_search(vector<Article>& v, string id) {
    int i = 0;
    int j = v.size() - 1;
    
    while (v[i].identifier != id) {
        int mid = (i + j)/2;
        if (v[mid].identifier < id) i = mid + 1;
        else j = mid;
    }
    return i;
}

int main() {
    int n;
    cin >> n;
    vector<Article> v = initialize_art_vector(n);
    
    string id;
    while (cin >> id) {
        int pos = effi_search(v, id);
        ++v[pos].freq;
    }
    sort (v.begin(), v.end(), comp); 
    write_art_vector(v);
}
