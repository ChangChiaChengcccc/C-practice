#include<iostream>
#include<cstdlib>

using namespace std;

class CWin
{
protected:
    char id;
    int width,height;

public:
    CWin(char i='D', int w=10, int h=10):id(i),width(w),height(h){}

    void show_area(void){
        cout << "Window " << id ;
        cout << ", area = " << area() << endl;
    }

    virtual int area(){
        return width*height;
    }
};

class CMiniWin : public CWin
{
    public:
        CMiniWin(char i, int w, int h):CWin(i,w,h){}

        virtual int area(){
            return (int)(0.8*width*height);
        }    
};


int main(){
    CWin win('A',70,80);
    CMiniWin my_win('B',50,60);
    CWin *ptr=NULL;

    ptr=&win;
    ptr->show_area();

    ptr=&my_win;
    ptr->show_area();

    return 0;
}