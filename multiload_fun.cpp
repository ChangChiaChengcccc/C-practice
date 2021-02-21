#include <iostream>

using namespace std; 

float power(float,int);
int power(int,int);

int main()
{ 
    int integer,n;
    float floa;

    cout << "請輸入正整數: " ;
    cin >> integer;
    cout << "請輸入浮點數: ";
    cin >> floa;
    cout << "請輸入指數: ";
    cin >> n;
    cout << power(integer,n) << endl;
    cout << power(floa,n) << endl;  
    return 0;
}

float power(float d ,int i){
    float ans = 1;
    for (int j=0 ; j<i ; j++){
        ans = ans * d;
    }
    return ans;
}

int power(int d ,int i){
    int ans = 1;
    for (int j=0 ; j<i ; j++){
        ans = ans * d;
    }
    return ans;
}


