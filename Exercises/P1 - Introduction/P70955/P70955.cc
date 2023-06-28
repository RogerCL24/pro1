#include<iostream>

using namespace std;

int main() {
    int y, d, h, m , s;
    cin >> y >> d >> h >> m >> s;
    
    int seconds = 0;
    
    seconds += y * (3600*24*365) + d*24*3600 + h*3600 + m*60 + s;
    
    cout << seconds << endl;
}
