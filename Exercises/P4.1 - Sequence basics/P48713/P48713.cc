#include<iostream>

using namespace std;

int main()  {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        
        bool prime = (x != 1 and x != 0);
        int j = 2;
    
        while (prime and j*j <= x)  {
            prime = x%j != 0;
            ++j;
         }
         if (prime) cout << x << " is prime" << endl;
         else cout << x << " is not prime" << endl;
    }
}
            
            
