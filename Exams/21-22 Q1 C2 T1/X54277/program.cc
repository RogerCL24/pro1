#include<iostream>

using namespace std;

bool is_two_three_balanced(int n) {
    
    if (n%2 != 0 and n%3 != 0) return true;
    else if (n%2 == 0 and n%3 == 0) {
        return is_two_three_balanced (n/2 + n/3);
    }
    else return false;
}
 
int main() {
    int n;
    while (cin >> n) {
        if (is_two_three_balanced(n)) cout << "yes";
        else cout << "no";
        cout << endl;
    }
}
