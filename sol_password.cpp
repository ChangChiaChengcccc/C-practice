#include <iostream>
#include <string.h>

using namespace std;

void decoding(char str[50]);

int main ()
{
    char str[50];
    cout << "請輸入小於50字的字串: ";
    cin.getline(str,50);
    cout << "您輸入的字串為: " << str << endl;
    
    cout << "解碼中...\n" << "明碼為: ";
    decoding(str);
    cout << endl;
    return(0);
}

void decoding(char str[50]){
    int len,n_k;
    char k;
    len = strlen(str);
    k = str[len-1];
    n_k = k-48;
    for(int i=0;i<strlen(str)-2;i++){
        str[i] = str[i] + n_k;
        cout << str[i] ;
    }
}