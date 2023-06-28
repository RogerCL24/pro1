#include<iostream>

using namespace std;

int sum_min_max(int x, int y, int z) {
    int max;
    
    if (x >= y and x >= z) max = x;
    else if (y >= x and y >= z) max = y;
    else max = z;

    if (x <= y and x <= z) return max + x;
    else if (y <= x and y <= z) return max + y;
    else return max + z;
}

int main() {
    int x, y, z;
    
    cin >> x >> y >> z;
    cout << sum_min_max(x, y, z) << endl;
}
