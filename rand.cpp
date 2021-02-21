#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std ;

void generate_digits(int);

int main() {
    int digits;   
    cout << "How Many Digits Do You Want: " ;
    cin >> digits;
    generate_digits(digits);
}

void generate_digits(int digits){
    int chosen = 0;
    int num[digits]= {0};
    srand((unsigned)time(NULL));

    for(int i = 0; i < digits; i++ ) {
        chosen = rand() %10;
        for(int j=0; j<i ; j++){
            if(chosen == num[j]){
                chosen = rand() % 10;
                j = -1;
            }
        }
        num[i] = chosen;
    }  
    cout << "Generated digits(All Different Digits):";
    for(int i = 0; i < digits ;i++ ) {
        cout << num[i];       
    }
    cout << endl;
}