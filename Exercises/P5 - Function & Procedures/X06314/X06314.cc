#include<iostream>

using namespace std;

void info_sequence(int& sum, int& last) {
    int n;
    cin >> n;
    
    sum = 0;
    
    while (n != 0) {
        sum += n;
        last = n;
        cin >> n;
    }
}
    
int main() {
    int sumf, lastf, counter = 1;
    info_sequence(sumf, lastf);
    
    int sumnext = 1, lastnext = 0;
    
    while (sumnext != 0) {
        info_sequence(sumnext, lastnext);
        if (sumf == sumnext and lastf == lastnext) ++counter;
    }
    
    cout << counter << endl;
}
