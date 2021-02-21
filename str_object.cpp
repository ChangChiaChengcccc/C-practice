#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main(void){

    string str1;
    string str2; 

    cout << "input str1: " ;
    cin >> str1 ;
    cout << "input str2: " ;
    cin >> str2 ;
    cout << endl ;
    cout << "str1=" << str1 << "\nstr2=" << str2 << endl;
    cout << endl ;
    if(str1 == str2){
        cout << str1 << endl;
    }
    else
    {
        cout << str1+str2 << endl;
    }
    

}
