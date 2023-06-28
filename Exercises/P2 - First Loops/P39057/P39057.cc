#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    cout.setf(ios::fixed);
    cout.precision(6);
    
    for (int i = 0; i < n; ++i) {
        string descript;
        cin >> descript;
        
        double area;
        
        if (descript == "rectangle") {
            double length, width;
            cin >> length >> width;
            
            area = length*width;
            cout << area << endl;
        
        }
        else {
            double radius;
            cin >> radius;
            
            area = M_PI * radius * radius;
            cout << area << endl;
        }
     }
}
          
   
