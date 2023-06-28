#include<iostream>

using namespace std;

void digit_maxim_i_minim(int n, int& maxim, int& minim) {
    if (n >= 10) {
        digit_maxim_i_minim(n/10, maxim, minim);

        int digit = n%10;

        if (digit > maxim) maxim = digit;
        if (digit < minim) minim = digit;
    }
    else {
        maxim = minim = n;
    }
}

int main() {
    int n, maxim, minim;

    cin >> n;
    digit_maxim_i_minim(n, maxim, minim);

    cout << maxim << ' ' << minim << endl;
}
