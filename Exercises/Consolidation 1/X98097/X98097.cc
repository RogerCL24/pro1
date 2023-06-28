#include<iostream>

using namespace std;

int main() {
    int n, odds, evens;
    cin >> n;
    int aux = n;
    int aux2 = n;
    int counter = 0;
    
    odds = evens = 0;
    
    while (n > 0) {
        ++counter;
        n /= 10;
    }
    int digit;
    for (int i = 1; i <= counter; ++i) {
        digit = aux%10;
        if (i%2 != 0) odds += digit;
        else evens += digit;
        aux /= 10;
    }
    cout << odds << ' ' << evens << endl;
    
    int max, min;
    
    if (odds > evens) {
        max = odds;
        min = evens;
    }
    else {
        max = evens;
        min = odds;
    }
    if (min == 0) cout << min << " = " << min << " * " << max << endl;
    
    else {
        if (max%min == 0) cout << max << " = " << max/min << " * " << min << endl;
        else cout << "nothing" << endl;
    }
}
    
    
    
            
        
