#include<iostream>

using namespace std;

bool is_three_sorted(int a, int b) {
  if ((a%3 == 0 and b%3 != 0) or (a%3 != 0 and b%3 != 0)) return true;
  else if (a%3 == 0 and b%3 == 0) return is_three_sorted (a/3, b/3);
  else return false;
}

int main () {
    int a, b;
    
    while (cin >> a >> b) {
        if (is_three_sorted (a, b)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
