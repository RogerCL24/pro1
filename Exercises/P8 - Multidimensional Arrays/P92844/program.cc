#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef vector<char> Row;
typedef vector<Row> Rectangle;

void minimal_dimensions(char c, const Rectangle& r, int& rows, int& cols) {
	int superior = 0;
	int inferior = 0;
	int esquerra = 0;
	int dreta = 0;
	int fi = r.size();
	int co = r[0].size();


 	bool trobat = false;
 	int i = 0;
 	while (not trobat and i < fi) {
	 int j = 0;
	 while (not trobat and j < co) {
	 	if (r[i][j] == c) {
	 		trobat = true;
	 		superior = i;
	 	}
	 	++j;
	 }
	 ++i;
	}


 	trobat = false;
 	i = fi - 1;
 	while (not trobat and i >= 0) {
 		int j = 0;
 		while (not trobat and j < co) {
 			if (r[i][j] == c) {
 				trobat = true;
 				inferior = i;
 			}
		 	++j;
 		}
 		--i;
 	}


 	trobat = false;
 	i = 0;
 	while (not trobat and i < co) {
 		int j = 0;
 		while (not trobat and j < fi) {
 			if (r[j][i] == c) {
 				trobat = true;
 				esquerra = i;
 			}
 			++j;
 		}
		++i;
	}


 	trobat = false;
 	i = co - 1;
 	while (not trobat and i >= 0) {
		 int j = 0;
 		while (not trobat and j < fi) {
 			if (r[j][i] == c) {
				trobat = true;
 				dreta = i;
 			}
 			++j;
 		}
 		--i;
 	}

 	rows = inferior - superior + 1;
 	cols = dreta - esquerra + 1; 
}

int main() {
 	int rows, cols, fi, co;
 	cin >> fi >> co;
 	Rectangle r(fi, Row(co));

 	for (int i = 0; i < fi; ++i) {
 		for (int j = 0; j < co; ++j) cin >> r[i][j];
 	}

 	char c;
 	cin >> c;
 	minimal_dimensions(c, r, rows, cols);

 	cout << rows << ' ' << cols << endl; 
}
