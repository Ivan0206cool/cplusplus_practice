#include <bits/stdc++.h>
using namespace std;

//輸入圓的半徑r,輸出其直徑和圓周長和面積
int main() {
    double r;
    cin >> r;
    double diameter = 2 * r;
    double circumference = 2 * M_PI * r;
    double area = M_PI * r * r;
    cout << "Diameter: " << diameter << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;
    return 0;
}