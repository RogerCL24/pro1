#include<iostream>

using namespace std;

int main() {
    string firstword;
    cin >> firstword;
    
    string word2;
    int counter = 1;
    
    int longestseq = 1;
    
    while (cin >> word2) {
        bool count = false;
        if (firstword == word2) count = true;
        
        if (count) {
            ++counter;
            if (longestseq < counter) longestseq = counter;
        }
        else counter = 0;
    }
    cout << longestseq << endl;
}
        
