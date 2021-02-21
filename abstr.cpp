/*Abstraction*/

#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;

class shape
{
    private:
        string obj;
        int num_edges;
        double *edges;
        char *name;

    public:
        shape(string Obj, int Num_edges){
            obj = Obj;
            num_edges = Num_edges;
            cout << "create a " << obj << endl;
            name = new char[20];
        }

        void set_edges(double* Edges){
            edges = Edges;
        }  

        double *get_edge() const{
            return edges;
        }

        int get_num_edges() const{
            return num_edges;
        }

        virtual double area() const = 0;

        ~shape(){
            delete [] name;
            //cout << "delete [] name" << endl;
        }
};

class triangle : public shape{

    public:
        triangle(double* Edges) : shape("triangle",3){
            set_edges(Edges);
        }

        double area() const{
            double* a_edge = get_edge();
            double s,a_area;
            /*
            cout << "*a_edge " <<*a_edge <<endl;
            cout << "*a_edge+1 " <<*(a_edge+1) <<endl;
            cout << "*a_edge+2 " <<*(a_edge+2) <<endl;
            */
            s = (*a_edge + *(a_edge+1) + *(a_edge+2))/2;
            a_area = sqrt(s*(s-*a_edge)*(s-*(a_edge+1))*(s-*(a_edge+2)));
            return a_area;
        }
};

class circle : public shape{
    private:
        double radius;
    
    public:
        circle(double Edge) : shape("circle",1){
            set_radius(Edge);
        }

        void set_radius(double edge){
            radius = edge/2/M_PI;
        }

        double area()const{
            
            return M_PI*radius*radius;
        }
};

int main(){
    double tt_edges[] = {30.0, 30.0, 50.0};
    triangle tt(tt_edges);
    cout << tt.area() << endl;

    double cc_edge = 2*M_PI;
    circle cc(cc_edge);
    cout << cc.area() << endl;

    return 0 ;
}