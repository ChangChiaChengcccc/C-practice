#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int n = 10;
    int *p = &n;
    int &r = n;

    cout << "n: " << n << endl;
    cout << "r: " << r << endl;

    r = 20;

    cout << "n: " << n << endl;
    cout << "r: " << r << endl;

    return 0;
}