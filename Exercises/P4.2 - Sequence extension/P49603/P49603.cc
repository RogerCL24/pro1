#include<iostream>
#include<string>

using namespace std;

int main() {
    int n;
    int counter = 0;
    int ultima = 0;
    
    while (cin >> n) {
        ++counter;
        
        bool ordre = true;
        
        if (n != 0) {
            string a, b;
            cin >> a;
            
            for (int i = 1; i < n; ++i) {
                b = a;
                cin >> a;
                if (a < b) ordre = false;
            }
        }
        if (ordre) ultima = counter;
    }
    
    if (ultima > 0) cout << "The last line in increasing order is " << ultima << '.' << endl;
    else cout << "There is no line in increasing order." << endl;
}
