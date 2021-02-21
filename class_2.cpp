#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

class Triangle{
    private:
        double edge1;
        double edge2;
        double edge3;

    public:

        Triangle(double i, double j, double k):edge1(i),edge2(j),edge3(k)
        {
        //     edge1 = i;
        //     edge2 = j;
        //     edge3 = k;
        }

        bool is_tri(){
            if(edge1>=edge2+edge3||edge2>=edge1+edge3||edge3>=edge1+edge2){
                return 1;
            }
            else{
                return 0;
            }
        }

        double area(){
            if(is_tri()==1){
                cout << "not a triangle ";
                return 1;
            }
            else
            {
                double s,area;
                s = (edge1+edge2+edge3)/2;
                area = sqrt(s*(s-edge1)*(s-edge2)*(s-edge3));
                return area;
            }
            
        }

        double perimeter(){
            if(is_tri()==1){
                cout << "not a triangle ";
                return 1;
            }
            else
            {
            double peri;
            peri = edge1 + edge2 + edge3;
            return peri;
            }
        }

        void friend show_data(Triangle);
};

void show_data(Triangle t){
    cout << "edge1: " <<  t.edge1 << endl ;
    cout << "edge2: " <<  t.edge2 << endl ;
    cout << "edge3: " <<  t.edge3 << endl ;
}

int main(void){
    double edge1,edge2,edge3;
    cout << "edge1: ";
    cin >> edge1;
    cout << "edge2: ";
    cin >> edge2;
    cout << "edge3: ";
    cin >> edge3;
    Triangle triA(edge1,edge2,edge3);
    cout << "perimeter is: " << triA.perimeter() << "\n";
    cout << "area is: " << triA.area() << endl;
    //show_data(triA);
    return 0;
}