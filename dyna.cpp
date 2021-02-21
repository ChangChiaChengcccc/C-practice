#include<iostream>
#include<cstdlib>
#include<string.h>

using namespace std;

class CWin
{
private:
    char id;
    char *title;

public:
    CWin(char i='D', char *text = "Default Window"):id(i){
        title = new char[strlen(text)+1];
        strcpy(title,text);
    }

    ~CWin(){
        cout << "destructor is called!, Win" << this->id << " is destroyed" << endl; 
        delete [] title;
        system("pause");
    }

    void show(void){
        cout << "Window " << id << ": " << title << endl;
    }
};


int main(){
    CWin win1('A',"Main window");
    CWin win2('B');

    win1.show();
    win2.show();

    system("pause");
    return 0;
}
