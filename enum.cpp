#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

enum month{
    January,February,March,
    April,May,June
} six;

int main(void){
    string a[6] = {
        "January","February","March",
        "April","May","June"
    };
    int i = 0;
    char ch = 'c';
    cout << "sizeof(ch): " << sizeof(ch) << endl;
    cout << "sizeof(i): " << sizeof(i) << endl;
    cout << "sizeof(six): " << sizeof(six) << endl;
    cout << "January: " << January << endl;
    cout << "six: " << six << endl;
    cout << "six: " << six+1 << endl;

    for (six=January;six<=June;six=(month)(six+1)){
        cout << "six(" << six << ")=" << a[six] << endl;
    }
    return 0;
}
