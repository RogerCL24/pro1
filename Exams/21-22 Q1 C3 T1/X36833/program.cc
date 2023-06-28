#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        string card, next;
        int counter = 0;
        bool start = false;
        
        while (cin >> card and card != "end") {
            if (not start) next = card;
            if (start) {
                if (card != next and card != "multicolor") {
                    ++counter;
                    next = card;
                }
            }
            start  = true;
        }
        cout << counter << endl;
    }
}
