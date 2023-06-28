#include <iostream>
#include <string>

using namespace std;

struct Point {
    int x,y;
};

Point read_point() {
    Point p;
    cin >> p.x >> p.y;
    return p;
}

struct Rectangle {
    int xmin, ymin, xmax, ymax;
};

Rectangle read_rectangle() {
    Rectangle r;
    cin >> r.xmin >> r.ymin >> r.xmax >> r.ymax;
  return r;
}

string containtment (Point p, Rectangle r) {
    if (p.x > r.xmin and p.x < r.xmax and p.y > r.ymin and p.y < r.ymax) return "inside";
    else if (p.x > r.xmax or r.ymax < p.y or p.x < r.xmin or p.y < r.ymin) return "outside";
    else return "border";
}
    
int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        Point p = read_point();
        Rectangle r = read_rectangle();
        
        cout << containtment(p, r) << endl;
    }
}
