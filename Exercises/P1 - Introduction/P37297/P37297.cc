#include<iostream>

using namespace std;

int main(){
	int n,ultimos,sum = 0;
	
	cin >> n;
	
	ultimos = n%1000;
	while(ultimos != 0){
		sum += ultimos%10;
		ultimos /= 10;
	}
	cout << sum << endl;
}
