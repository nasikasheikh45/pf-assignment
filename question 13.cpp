#include<iostream>
using namespace std;
int main(){
int model;
cin >> model;

if (model == 300)
    cout << "Features: PIP, Stereo, Remote";
else if (model == 200)
    cout << "Features: Stereo, Remote";
else if (model == 100)
    cout << "Features: Remote only";
    return 0;
}
