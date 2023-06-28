#include<iostream>

using namespace std;

bool is_leap_year(int year) {
    bool leap = false;
    
    if (year%4 == 0) {
        leap = true;
        if (year%100 == 0 and (year/100)%4 != 0) leap = false;
    }
    return leap;
}
    

int main() {
    int year;
    
    cin >> year;
    
    cout << is_leap_year(year) << endl;
}
