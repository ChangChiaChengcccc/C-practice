#include <iostream>
#include <cstdlib>

using namespace std;

class CWin{
    private:
        char id;
        int width, height;
        
    public:
        CWin(char i, int w, int h):id(i),width(w),height(h){}
        
        void compare(CWin &win){
            if(this->area() > win.area()){
                cout << "Window " << this->id << " is larger" << endl;
            }
            else{
                cout << "Window " << win.id << " is larger" << endl;
            }
        }

        int area(void){
            return width*height;
        }
};

int main(){
    
    CWin win1('A',50,40);
    CWin win2('B',60,80);
    
    win1.compare(win2);

    return 0;
}