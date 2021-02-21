#include <iostream>
#include <cstdlib>

using namespace std;

class CWin{
    private:
        char id;
        int width;
        int height;

    public:

        CWin(char i, int w, int h):id(i),width(w),height(h){} // construct

        CWin compare(CWin win){
            if(this->area() > win.area()){
                return *this;
            }
            else{
                return win;
            }
        }

        int area(void){
            return width*height;
        }

        char get_id(void){
            return id;
        }
};

int main(void){
    CWin win1('A',20,80),win2('B',60,90);

    cout << "Window " << (win1.compare(win2)).get_id();
    cout << " is larger" << endl;

    return 0;
}