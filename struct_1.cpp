#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct student {
    string name;
    string student_id;
    int midtern;
    int final;
    double semester_grade; 
    };

void grade_calculator(struct student);

int main(void){
    
    student mem;
    cout << "input name: " ;
    cin >> mem.name ;
    cout << "input student_id: " ;
    cin >> mem.student_id ;
    cout << "input midtern: " ;
    cin >> mem.midtern;   
    cout << "input final: " ;
    cin >> mem.final;
    cout << endl;
    grade_calculator(mem);
    
}

void grade_calculator(struct student a){
    a.semester_grade = a.midtern*0.4 + a.final*0.6;
    cout << "student name: " << a.name << endl;
    cout << a.semester_grade << endl;
}