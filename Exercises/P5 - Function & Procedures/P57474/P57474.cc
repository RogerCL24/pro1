#include<iostream>

using namespace std;

int factorial (int n) {
    int f = 1;
    
   for (int i = 1; i <= n; ++i) f *= i;

   return f;
}

int main() {
    int n;
    while (cin >> n) {
    
        cout << factorial(n) << endl;
    }
}
    
