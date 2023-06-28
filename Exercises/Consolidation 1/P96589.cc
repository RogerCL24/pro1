#include<iostream>

using namespace std;

int main() {
    char s;
    cin >> s;
    
    if (isalpha(s)) cout << "lletra" << endl;
    else if (47 < s and s < 58) cout << "digit" << endl;
    else cout << "res" << endl;
}
