#include <iostream>
#include <cstdlib>

using namespace std;

class Cbox{
    public:
        int width,height;
        void set();
        int area();
};

void Cbox::set(){
    cout << "width: " ;
    cin >> width;
    cout << "height: " ;
    cin >> height;
};

int Cbox::area(){
    cout << "the area is: ";
    return width * height;
}


int main(){
    Cbox box;
    box.set();
    cout << box.area()<< endl;
    return 0;
}