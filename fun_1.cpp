#include<iostream>

using namespace std;

int days(int mm, int dd){
	int num;
	switch(mm) {
		case 1 :
		num = dd;
            	break;
        	case 2:
            	num = 31 + dd;
		break;
        	case 3:
            	num = 40 + dd;
		break;
        	case 4 :
            	num = 71 + dd;
		break;
        	case 5:
            	num = 101 + dd;
		break;
        	case 6:
            	num = 132 + dd;
		break;
        	case 7:
            	num = 162 + dd;
		break;
        	case 8:
            	num = 193 + dd;
		break;
        	case 9:
            	num = 224 + dd;
		break;
        	case 10:
            	num = 254 + dd;
		break;
        	case 11:
            	num = 284 + dd;
		break;
        	case 12:
		num = 314 + dd;
            	break;
        	default:
		cout << "error";
	}
	cout << num;
}	

int main(){
	int month,day;
	cout << "Input month: " ;
	cin >> month;
	cout << "Input day: " ;
	cin >> day;
	cout << "your input: "<< month << "/" << day << endl;
	cout << "今年第幾天: ";
       	days(month,day);
	cout << "天" << endl;	
}
