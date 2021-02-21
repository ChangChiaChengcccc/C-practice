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

    CWin(int w, int h):width(w),height(h){
        cout << "CWin(int w, int h) instructor is called" << endl;
        id ='K';
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
        CTextWin(int w, int h):CWin(w,h){
            cout << "CTextWin(int w, int h) constructor is called" << endl;
            strcpy(text,"Have a good night");
        }

        CTextWin (char *tx){
            cout << "CTextWin() constructor is called!" << endl;
            strcpy(text,tx);
    }
    void show_text(){
        cout << "text = " << text << endl;
    }
};


int main(){
    
    CTextWin tx1("Hello C++");
    CTextWin tx2(60,70);

    tx1.show_member();
    tx1.show_text();

    tx2.show_member();
    tx2.show_text();
    return 0;
}
