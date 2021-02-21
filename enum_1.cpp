#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main(void){
    enum mykey{
        left,right,middle
    } mouse;
    int key;
    do
    {
        cout << "Button press? (0)Left  (1)Right  (2)Middle: ";
        cin >> key;
    } while (key>2||key<0);
    
    mouse = (mykey)key;

    switch(mouse){
        case left: cout << "Left Button Pressed!" << endl;
        break;
        case right: cout << "Right Button Pressed!" << endl;
        break;
        case middle: cout << "Middle Button Pressed" << endl;
        break; 
        default : cout << "error" <<endl;
        break;
    }
    
    return 0;
}
