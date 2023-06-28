#include<iostream>

using namespace std;

int main(){
	char e1, e2;
	
	cin >> e1 >> e2;
	
	if(e1 == 'V' and e2 == 'A'){
		cout << "1" << endl;
	}else if(e1 == e2){
	cout << "-" << endl;
    }else if(e1 == 'V' and e2 == 'P'){
    	cout << "2" << endl;
	}else if(e1 == 'P' and e2 == 'V'){
		cout << "1" << endl;
	}else if(e1 == 'P' and e2 == 'A'){
		cout << "2" << endl;
	}else if(e1 == 'A' and e2 == 'P'){
		cout << "1" << endl;
	}else if(e1 == 'A' and e2 == 'V'){
		cout << "2" << endl;
	}
}
