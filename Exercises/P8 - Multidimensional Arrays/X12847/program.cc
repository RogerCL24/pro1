#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<bool> > Board;

int distancia_proper(Board& jugador1, char aa, int n) {
 	int a = aa -'a';
 	--n;

 	int minim = 1;
 	bool nord = true;
 	bool sud = true;
 	bool est = true;
 	bool oest = true;
	if (a-minim < 0) nord = false;
	if (a+minim > 9) sud = false;
	if (n+minim > 9) est = false;
	if (n-minim < 0) oest = false;
	while (nord or sud or est or oest) {
		if ((nord and oest) and jugador1[a-minim][n-minim] == true) return minim;
	
	 	if ((nord and est) and jugador1[a-minim][n+minim] == true) return minim;
	
	 	if ((sud and est) and jugador1[a+minim][n+minim] == true) return minim;
	
	 	if ((sud and oest) and jugador1[a+minim][n-minim] == true) return minim;
	

	 if (nord) {
	 	for (int i = 0; i < minim; ++i) { // Mirar nord.
	 		if (n-i >= 0 and jugador1[a-minim][n-i] == true) return minim;
	 		if (n+i <= 9 and jugador1[a-minim][n+i] == true) return minim;
	 	}
	 	if (a-minim-1 < 0) nord = false;
	 }
	 if (sud) {
	 	for (int i = 0; i < minim; ++i) { // Mirar sud.
	 		if (n-i >= 0 and jugador1[a+minim][n-i] == true) return minim;
	 		if (n+i <= 9 and jugador1[a+minim][n+i] == true) return minim;
	 	}
	 	if (a+minim+1 > 9) sud = false;
	 }
	 if (est) {
	 	for (int i = 0; i < minim; ++i) { // Mirar est.
	 		if (a-i >= 0 and jugador1[a-i][n+minim] == true) return minim;
	 		if (a+i <= 9 and jugador1[a+i][n+minim] == true) return minim;
	 	}
	 	if (n+minim+1 > 9) est = false;
	 }
	 if (oest) {
	 	for (int i = 0; i < minim; ++i) { // Mirar oest.
	 		if (a-i >= 0 and jugador1[a-i][n-minim] == true) return minim;
	 		if (a+i <= 9 and jugador1[a+i][n-minim] == true) return minim;
	 	}
	 	if (n-minim-1 < 0) oest = false;
	 }
	 ++minim;
	}
	return minim; 
}
int main() {
 Board jugador1(10, vector<bool>(10,false));

 char a;
 int n;
 for (int i = 0; i < 10; ++i) {
 	char direccio;
 	int longitud;
 	cin >> a >> n >> longitud >> direccio;

 	if (direccio == 'h') {
 		for (int j = 0; j < longitud; ++j) jugador1[a-'a'][n+j-1] = true;
 	}
 	else if (direccio == 'v') {
 		for (int j = 0; j < longitud; ++j) jugador1[a-'a'+j][n-1] = true;
 	}
 }

 cout << "  12345678910" << endl;
 char fila = 'a';
 for (int j = 0; j < 10; ++j) {
	 cout << fila << ' ';
	 fila = fila + 1;
	 for (int k = 0; k < 10; ++k) {
		 if (jugador1[j][k] == true) cout << 'X';
		 else cout << '.';
	 }
	 cout << endl;
 }

 cout << endl;
 while (cin >> a >> n) {
	 if (jugador1[a-'a'][n-1] == true) cout << a << n << " touched!" << endl;
	 else {
	 	cout << a << n << " water! closest ship at distance " << distancia_proper(jugador1, a, n) << endl;
 	}
 } 
}
