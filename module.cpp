#include <iostream>
#include <cstdlib>

using namespace std;

class CWin{
    protected:
        char id;
        int width;
        int height;
    public:    
        
};

void show_area(CWin win){
    cout << "Window " << win.id << ", area=" << win.area() << endl;
}


int main(void){
    CWin win1;
    win1.set_data('B',50,40);
    show_area(win1);
    return 0;
}