#include<iostream>

using namespace std;

bool is_palindromic (int n) {
    
    int aux = n;
    
    if (n < 10) return true;
    
    else {
        
        int firsthalf, lasthalf;
        int power = 1;
        int counter = 0;
    
        while (n != 0) {
            n /= 10;
            power *= 10;
            ++counter;
        }
        int j = 0;
        bool equal = true;
        while (j < counter/2 and equal) {
            firsthalf = aux%10;
            lasthalf = (aux/(power/10))%10;
            
            if (firsthalf != lasthalf) equal = false;
            
            aux /= 10;
            power /= 100;
            ++j;
        }
        return equal;
    }
}
                


int main() {
    int n;
    while (cin >> n) {
        cout << is_palindromic(n) << endl;
    }   
}
    
