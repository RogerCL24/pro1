#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

struct Student {
    string name;
    int right;
    int wrong;
};

vector<int> read_right_answers (int& m) {
    vector<int> v (m);
    
    for (int i = 0; i < m; ++i) cin >> v[i];
    return v;
}

vector<Student> get_info_test (vector<int>& ans, int& n) {
    vector<Student> r (n);
    
    for (int i = 0; i < n; ++i) {
        cin >> r[i].name;
        for (int j = 0; j < ans.size(); ++j) {
            int res;
            cin >> res;
            if (res == ans[j]) ++r[i].right;
            else if (res != 0) ++r[i].wrong;
        }
    }
    return r;
}

bool cmp (const Student& a, const Student& b) {
    if (a.right*2 - a.wrong == b.right*2 - b.wrong) {
        if (a.wrong == b.wrong) return a.name < b.name;
        return a.wrong < b.wrong;
    }
    return (a.right*2 - a.wrong) > (b.right*2 - b.wrong);
}

void write_results (vector<Student>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        cout << v[i].name << ' ' << v[i].right << ' ' << v[i].wrong << endl;
    }
}
    
int main() {
    int m;
    cin >> m;
    vector<int> answer = read_right_answers(m);
    int n;
    cin >> n;
    vector<Student> v = get_info_test(answer, n);
    sort(v.begin(), v.end(), cmp);
    write_results(v);
}
