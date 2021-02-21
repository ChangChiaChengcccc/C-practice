#include <iostream>
#include <cstdlib>

using namespace std;

class CWin{
    private:
        char id;
        int width, height;
        int static num;

    public:
        CWin(char i, int w, int h):id(i),width(w),height(h){
            num++;
        }
        CWin(){
            num++;
        }
        static void count(){
            cout << "已建立 " << num << " 個物件了..." << endl;
        }
};

int CWin::num=0;

int main(){
    CWin::count();
    CWin win1('A',50,40);
    CWin win2('B',60,80);
    CWin::count();
    
    CWin my_win[5];
    CWin::count();

    return 0;
}