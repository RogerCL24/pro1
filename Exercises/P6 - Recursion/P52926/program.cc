#include<iostream>

using namespace std;

void reverse() {
    string input;

    cin >> input;

   if (input != "end") {
    reverse();
    cout << input << endl;
    }


}





int main() {

    reverse();
}
