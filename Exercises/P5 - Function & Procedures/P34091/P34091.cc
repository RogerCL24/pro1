#include<iostream>

using namespace std;

bool is_perfect (int n) { 
  int sum = (n != 1);
  
  for (int i = 2; i*i <= n; ++i) {
        if (n%i == 0) sum += n/i + i;
  }
  
  return (sum == n);
}

int main() {
    int n;
    cin >> n;
    
    cout << is_perfect(n) << endl;
}
