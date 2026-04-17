#include <iostream>
using namespace std;
int main(){
int choice;
cin >> choice;

if (choice == 1) {
    double r;
    cin >> r;
    cout << "Area = " << 3.14159 * r * r;
}
else if (choice == 2) {
    double l, w;
    cin >> l >> w;
    cout << "Area = " << l * w;
}
else if (choice == 3) {
    double b, h;
    cin >> b >> h;
    cout << "Area = " << 0.5 * b * h;
}
return 0;
}