#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

typedef struct{
    int hour;
    int minute;
    float second;
}mytime;

void subs(mytime t[]);

int main(void){
    
    //int i;
    mytime t[3] = {
        {6,24,45.58f},
        {3,40,17.43f}
    };
    for(int i=0; i<3 ; i++){
    cout << "hour: " << t[i].hour << "\t" << "minute: " << t[i].minute << "\t" 
         << "second: " << t[i].second << endl;
    }
    
    cout << setfill('0');
    subs(t);
    for(int i=0;i<3;i++){
        cout << "t["<< i << "]=" << setw(2) << t[i].hour << ":";
        cout << setw(2) << t[i].minute << ":";
        cout << setw(5) << t[i].second << endl ;
    }

    return 0;
}


void subs(mytime t[]){
    int min_carry = 0, sec_carry = 0;
    t[2].second = t[0].second + t[1].second;
    while (t[2].second>=60)
    {
        t[2].second-=60;
        sec_carry++;
    }
    t[2].minute = t[0].minute + t[1].minute + sec_carry ;
    while (t[2].minute>=60)
    {
        t[2].minute-=60;
        min_carry++;
    }
    t[2].hour = t[0].hour + t[1].hour + min_carry;
    return;
}

    