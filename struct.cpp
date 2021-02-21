#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct data {
    string name;
    int a,b;
    };

void change(struct data *),prn(struct data);

int main(void){
    
    data first = {"Lucas",2,9};
    prn(first);
    change(&first);
    prn(first);

    
}

void prn(struct data p){
    cout << "name: " << p.name << endl;
    cout << "a: " << p.a << endl;
    cout << "b: " << p.b << endl;
}

void change(struct data *ptr){
    int tem;
    tem = ptr->a;
    ptr->a = ptr->b;
    ptr->b = tem;
    /*
    cout << "name: " << ptr->name << endl;
    cout << "a: " << ptr->a << endl;
    cout << "b: " << ptr->b << endl;
    */
}