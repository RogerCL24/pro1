#include<iostream>
#include<vector>
using namespace std;

void read_vector(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) cin >> v[i];
}

int num_cum(const vector<int>& v) {
    int counter = 0;
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        int j = i - 1;
        while (j >= 0 and sum < v[i]) {
            sum += v[j];
            --j;
        }
        if (sum == v[i]) ++counter;
    }
    return counter;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        read_vector(v);
        cout << num_cum(v) << endl;
    }
}
        
        
