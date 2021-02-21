#include<iostream>
#include<cstdlib>

using namespace std;

class CWin
{
private:
    char id;
    int width, height;
public:
    CWin(char i, int w, int h):id(i),width(w),height(h){
        cout << "construct is called! " << endl;
    }

    ~CWin(){
        cout << "destructor is called! " 
        <<"Window "<< this->id << " is destructed."<< endl;
        system("pause");
    }

    void show_member(void){
        cout << "Window " << id << ": " ;
        cout << "width=" << width << ", height=" << height << endl;
    }
};


int main(){
    CWin win1('A',50,40);
    CWin win2('B',40,50);
    CWin win3('C',60,70);
    CWin win4('D',90,40);

    win1.show_member();
    win2.show_member();

    system("pause");
    return 0;
}
