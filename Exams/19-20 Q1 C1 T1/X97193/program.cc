#include<iostream>

using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    
    string order;
    while (cin >> order and order != "acabar") {
    
        if (order == "perimetro") {
            double a, b, c;
            cin >> a >> b >> c;
            double perimeter;
            
            perimeter = a + b + c;
            
            cout << perimeter << endl;
        }
        
        else {
            double b, h;
            cin >> b >> h;
            double area;
            
            area = (b*h)/2;
            cout << area << endl;
        }
    }
}
            
