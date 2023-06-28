#include<iostream>

using namespace std;

int operation() {
    char input;
    
    cin >> input;
    
    if (input == '+') return operation() + operation();
    
    else if (input == '*') return operation() * operation();
    
    else if (input == '-') return operation() - operation();
    
    else return int(input - '0');
}

int main() {
    cout << operation() << endl;
}
    
    
