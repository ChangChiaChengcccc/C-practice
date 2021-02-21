#include <iostream>
#include <cstdlib>

using namespace std;

class CWin{
    private:
        char id;
        int width;
        int height;

    public:

        CWin(char i='D', int w=100, int h=100):id(i),width(w),height(h){
            cout << "建構元被呼叫了..." << endl;
        } // construct
        void show_member(){
            cout << "Window " << id << ":" ;
            cout << "width=" << width << ", height=" << height << endl;
        }

};

int main(void){
    CWin win1('A',20,80);
    CWin my_win[3];

    win1.show_member();
    my_win[2].show_member();

    return 0;
}