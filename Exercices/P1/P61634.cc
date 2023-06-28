#include<iostream>

using namespace std;

int main() {
    int year;
    cin >> year;
    
    bool leap = false;
    
    if (year%4 == 0) {
        if ((year/100)%4 != 0) {
            if (year%100 == 0) {
            }
            else leap = true;
        } 
        else leap = true;
    }   

    if (leap) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}
        
        
