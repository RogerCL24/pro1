#include<iostream>

using namespace std;

int main() {
    string largest = "", secondlargest = "", word;
    
    while (cin >> word) {
        if (word > secondlargest and largest != word) {
            if (word > largest) {
                secondlargest = largest;
                largest = word;
            }
            else {
                secondlargest = word;
            }
        }
    }
    cout << secondlargest << endl;
}
