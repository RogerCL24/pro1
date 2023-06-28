#include <iostream>
#include <vector>
using namespace std;

vector<int> obtain_peaks(const vector<int>& v) {
    vector<int> peak;
    int n = v.size() - 1;
    for (int i = 1; i < n; ++i) {
        if (v[i] > v[i - 1] and v[i] > v[i + 1]) peak.push_back(v[i]);
    }
    return peak;
}

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; ++i) cin >> heights[i];

    vector<int> peaks;
    peaks = obtain_peaks(heights);
    int num_peaks = peaks.size() - 1;

    cout << num_peaks + 1 << ':';
    for (int i = 0; i <= num_peaks; ++i) {
        cout << ' ' << peaks[i];
    }
    cout << endl;

    bool trobat = false;
    bool primer = true;

    for (int i = 0; i <= num_peaks - 1; ++i) {
        if (peaks[i] > peaks[num_peaks]) {
            trobat = true;
            if (primer) {
                primer = false;
                cout << peaks[i];
            }
            else {
                cout << ' ' << peaks[i];
            }
        }
    }
    if (not trobat) cout << '-';
    cout << endl;
}
    
    
    
    
