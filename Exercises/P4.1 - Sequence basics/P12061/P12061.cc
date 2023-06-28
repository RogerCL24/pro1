#include<iostream>

using namespace std;

int main() {
    string word;
    int counter = 0;
    bool gotit = false;
    while (cin >> word and word != "end") {
    
        if (word == "beginning" or gotit) {
            ++counter;
            gotit = true;
        }
    }
    
    if (word == "end" and gotit) cout << counter - 1 << endl;
    else cout << "wrong sequence" << endl;
}
