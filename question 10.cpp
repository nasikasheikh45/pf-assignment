#include <iostream>
using namespace std;
int main(){
	double mass;
cin >> mass;

double weight = mass * 9.8;

cout << "Weight = " << weight << endl;

if (weight > 1000)
    cout << "Too heavy\n";
else if (weight < 10)
    cout << "Too light\n";
    return 0;
}
