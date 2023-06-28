#include<iostream>

using namespace std;

int main() {
    string worda, wordb;
    
    cin >> worda >> wordb;
    
    if (worda == wordb) cout << worda << " = " << wordb << endl;
    
    else if (worda < wordb) cout << worda << " < " << wordb << endl;
    
    else cout << worda << " > " << wordb << endl;
}
