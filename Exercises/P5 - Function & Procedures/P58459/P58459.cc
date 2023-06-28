#include<iostream>

using namespace std;

bool is_leap_year (int y) {
    bool leap = false;
    
    if (y%4 == 0) {
        leap = true;
        if (y%100 == 0 and (y/100)%4 != 0) leap = false;
    }
    return leap;
}

bool is_valid_date(int d, int m, int y) {
    bool valid = false;
    
    if ((m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) and d <= 31)
    valid = true;
    
    if ((m == 4 or m == 6 or m == 9 or m == 11) and d <= 30) valid = true;
    
    if (m == 2) {
    	 if (is_leap_year(y) and d <= 29) valid = true;
    	 else if (not is_leap_year(y) and d <= 28) valid = true;
    }
    if (d <= 0 or m <= 0) valid = false;
    
    return valid;
}
    
int main() {
    int d, m, y;
    cin >> d >> m >> y;
    
    cout << is_valid_date(d, m, y) << endl;
}
