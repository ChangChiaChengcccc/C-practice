#include<iostream>

using namespace std; 

void sum(long long int &a ,long long int &b){
	a=a+b;
}

int main(){
	long long int i,j;
	cout << "Calculate i+j=? " << endl;
	cout << "Input i: ";
	cin >> i;
	cout << "Input j: ";
	cin >> j;
	sum(i,j);
	cout << "Output i+j= ";
	cout << i << endl;
}
