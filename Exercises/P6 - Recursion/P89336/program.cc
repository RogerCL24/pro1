#include<iostream>

using namespace std;

int reverse(int n) {

    string input;

    if (cin >> input) {
        int counter = reverse(n + 1);
        if (n <= counter/2) cout << input << endl;

        return counter;
    }

    return n - 1;
}


int main() {
    reverse(1);
}
