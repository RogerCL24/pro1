#include<iostream>

using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        int counter = 0;
        double max, min, average, total;
        average = 0;
        
        bool yield = false;
        
       for (int j = 0; j < m; ++j) {
        double seq;
        cin >> seq;
        if (m == 1) cout << seq << ' ' << seq << ' ' << seq << endl;
        else {
            ++counter;
            
            average += seq;
            
            if (j == 0) max = min = seq;
            
            else {
            
                if (seq < min) min = seq;
                
                if (seq > max) max = seq;
            }
            yield  = true;
        }
        
        }
        total = average/ double(counter);
        
        if (yield) cout << min << ' ' <<  max << ' ' << total << endl;
    }
}
            
        
        
        
        
        
