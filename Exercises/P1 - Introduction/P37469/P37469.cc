#include<iostream>

using namespace std;

int main() {
    int sec;
    cin >> sec;
    
    int h, m, s;
    
    h = m = s = 0;
    
    h = sec/3600;
    m = (sec - (h * 3600))/60;
    s = (sec - (60*m)) - (3600*h);
    
    cout << h << ' ' << m << ' ' << s << endl;
}
    
    
