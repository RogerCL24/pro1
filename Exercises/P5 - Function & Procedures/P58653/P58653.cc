#include<iostream>

using namespace std;

bool id (string s, char c) {
    if (s == "letter") {
        if ((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z')) return true;
        else return false;
    }
    if (s == "vowel") {
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' or c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U') return true;
        else return false;
    }
    if (s == "consonant") {
        if ((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z')) {
            if (c != 'a' and c != 'e' and c != 'i' and c != 'o' and c != 'u' and c != 'A' and c != 'E' and c != 'I' and c != 'O' and c != 'U') return true;
        }
        else return false;
    }
    if (s == "uppercase") {
        if (c >= 'A' and c <= 'Z') return true;
        else return false;
    }
    if (s == "lowercase") {
        if (c >= 'a' and c <= 'z') return true;
        else return false;
    }
    if (s == "digit") {
        if (c >= '0' and c <= '9') return true;
        else return false;
    }
    else return false;

}
    
void print_line (char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b) cout << "true" << endl;
    else cout << "false" << endl;
}
    
int main() {
    char letter;
    
    cin >> letter;
    
    print_line (letter, "letter",id ("letter", letter));
    print_line (letter, "vowel",id ("vowel", letter));
    print_line (letter, "consonant",id ("consonant", letter));
    print_line (letter, "uppercase",id ("uppercase", letter));
    print_line (letter, "lowercase",id ("lowercase", letter));
    print_line (letter, "digit",id ("digit", letter));
}
