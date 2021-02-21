#include<iostream>
#include<cstdlib>
#include<string.h>

using namespace std;

class CWin
{
private:
    char id;
    int width,height;

public:
    CWin(char i='D', int w=10, int h=10):id(i),width(w),height(h){
        cout << "CWin() instructor is called! " << endl;
    }

    void show_member(void){
        cout << "Window " << id << ": " ;
        cout << "width=" << width << ", height=" << height << endl;
    }
};

class CTextWin : public CWin
{
    private:
        char text[20];
    public:
        CTextWin (char *tx){
            cout << "CTextWin() constructor is called!" << endl;
            strcpy(text,tx);
    }
    void show_text(){
        cout << "text = " << text << endl;
    }
};


int main(){
    CWin win('A',50,60);
    CTextWin txt("Hello C++");

    win.show_member();
    txt.show_member();
    txt.show_text();

    cout << "win object occupies " << sizeof(win) << " bytes" << endl;
    cout << "txt object occupies " << sizeof(txt) << " bytes" << endl;

    return 0;
}
