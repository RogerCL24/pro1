#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Info {
    string country_name;
    double gini;
};

typedef vector<Info> Register;

//pre: quintile_data represents a country income by quintile info
//post: returns the gini coef corresponding to quintile_data 
double gini_coef(const vector<double>& quintile_data) {
    
   double sum = 0;
   
   for (int i = 0; i < 4; ++i) {
       double x = quintile_data[i];
       for (int j = i + 1; j < 5; ++j) {
           sum += quintile_data[j] - x;
       }
   }
   
   return sum/double(500);
}
          
bool cmp(const Info& a, const Info& b) {
    if (a.gini == b.gini) return a.country_name < b.country_name;
    return a.gini < b.gini;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    int n;
    cin >> n;
    Register r (n);
    for (int i = 0; i < n; ++i) {
        cin >> r[i].country_name;
        vector<double> v (5);
        for (int j = 0; j < 5; ++j) cin >> v[j];
        r[i].gini = gini_coef(v);
        
    }
    
    sort (r.begin(), r.end(), cmp);
    
    for (int i = 0; i < n; ++i) cout << r[i].country_name << ' ' << r[i].gini << endl;
}
        
        
        
        
