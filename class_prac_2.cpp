#include <iostream>
#include <cstdlib>

using namespace std;

class Student{
    private:
        char id;
        int Math;
        int English;

    public:

        void set_member(char i, int m, int e){
            id = i;
            Math = m;
            English = e;
            cout << "set_number..." << endl; 
        } 

        bool pass(){
            float avg;
            avg = (Math+English)/2;
            if(avg>=60){
                return 1;
            }
            else{
                return 0;
            }
        }

        friend int numpass(Student[],int);
};

int numpass(Student std[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        count = std[i].pass() + count ;
    }
    return count;
}

int main(void){
    Student std[3];

    std[0].set_member('A',60,70);
    std[1].set_member('B',40,60);
    std[2].set_member('C',80,50);
    std[3].set_member('D',80,50);

    cout << "how many people pass the exam ?\n" ;
    cout << numpass(std,4);
    cout << endl;

    return 0;
}