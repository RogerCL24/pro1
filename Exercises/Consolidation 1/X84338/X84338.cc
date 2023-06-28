#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int counter = 0;
    int aux = n;
    
    while (n != 0) {
        ++counter;
        n /= 10;
    }
    int power = 1;
    for (int i = 0; i < counter/2; ++i) power *= 10;
        
    int firsthalf, secondhalf;
    if (counter%2 != 0 or aux == 0) cout << "nothing" << endl;
    else {
        firsthalf = aux%power;
        secondhalf = aux/power;
        
        int sum1, sum2;
        sum1 = sum2 = 0;
        
        while (firsthalf > 0) {
            sum1 += firsthalf%10;
            firsthalf /= 10;
        }
        while (secondhalf > 0) {
            sum2 += secondhalf%10;
            secondhalf /= 10;
        }
        if (sum1 == sum2) cout << sum2 << " = " << sum1 << endl;
        else if (sum2 > sum1) cout << sum2 << " > " << sum1 << endl;
        else cout << sum2 << " < " << sum1 << endl;
    }
}
            
        
    
    
    
