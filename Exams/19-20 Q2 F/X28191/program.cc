#include<iostream>

using namespace std;

int time_lapse(int time_1, int time_2) {
    const int MIN = 60;
    if (time_2 > time_1) return time_2 - time_1;
    else if (time_2 < time_1) return MIN - time_1 + time_2;
    return MIN;
}

int main() {
    int k;
    cin >> k;
    
    int t, former;
    int sum = 0;
    bool first = true;
    bool yep = true;
    int count = 0;
    int pos = 0;
    cin >> t;
    while (t != -1) {
        if (not first) sum += time_lapse (former, t); 
        ++count;
        first = false;
        if (sum > k and yep) {
            pos = count;
            yep = false;
        }
        former = t;
        cin >> t;
    }
    
    cout << pos << endl;
    
}
