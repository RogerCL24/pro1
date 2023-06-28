#include<iostream>
#include<math.h>

using namespace std;

// Pre: n >= 0, base > 1
// Post: returns true when n is a power of base.
//       returns false otherwise
bool is_power(int n, int base) {
    if (n == 0) return false;
    while (n%base == 0) n /= base;
    return n == 1;
}
        
// Post: returns the minimum between a and b        
int min(int a, int b) { 
	if (a <= b) return a;
	else return b;
}
               
bool is_power_pair(int a, int b) {
	if (a == 1 or b == 1) return true;
	
	int minim = min (a, b);
	
	for (int base = 2; base <= minim; ++base) {
		if (is_power(a, base) and is_power(b, base)) return true;
	}
	return false;
}

int main() {
    int n;
    while (cin >> n) {
       int counter = 0;
       int b;
       cin >> b;
       while (b != 0) {
       	if (is_power_pair (n, b)) ++counter;
       	n = b;
       	cin >> b;
       }
       cout << counter << endl;
    }
}
