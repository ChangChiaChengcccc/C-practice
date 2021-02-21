#include<iostream>

using namespace std ;

int main(){
    char str[100];
    cout << "功能：將英文字串大小寫互換" << endl;
    cout << "若輸入值非英文字串則輸出'*'\n";
    cout << "請輸入任意字串(100字內): ";
    cin >> str;
    cout << "轉換字串為：";
    //判斷字串是否在100字內 && 字串是否結束
    for(int i=0;i<100 && str[i]!='\0';i++){
        //判斷字串是否為大寫
        if( int(str[i])<91 && int(str[i])>64){
            str[i] = str[i] + 32;
            cout << str[i] ; 
        }
        else if(int(str[i])<123 && int(str[i])>96){
            str[i] = str[i] - 32;
            cout << str[i] ; 
        } 
        else{ 
            cout << "*" ;
        }
    }
    cout << endl;
}