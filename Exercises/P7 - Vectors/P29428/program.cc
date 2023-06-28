#include<iostream>
#include<vector>

using namespace std;

bool contain (string s1, string s2) {
    int n1 = s1.size();
    int n2 = s2.size();
    char ini = s2[0];
    bool content = false;
    
    int i = 0;
    while (i < n1 - n2 + 1 and not content) {
            if (s1[i] == ini) {
                    int j = 1;
                    content = true;
                    while (j < n2 and content) {
                            if (s1[i + j] != s2[j]) content = false;
                            ++j;
                    }
            }
            ++i;
    }
    return content;
}
    
int main() {
    int n;
    cin >> n;
    
    vector<string> word(n);
    for (int i = 0; i < n; ++i) cin >> word[i];
    
    for (int i = 0; i < n; ++i) {
        cout << word[i] << ':';
        int size = word[i].size();
        for (int j = 0; j < n; ++j) {
                if (size >= word[j].size() and contain(word[i], word[j])) {
                    cout << ' ' << word[j];
                }
        }
        cout << endl;
    }
                
}
    
