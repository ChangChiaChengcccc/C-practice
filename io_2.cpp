#include<iostream>
#include<bitset>

using namespace std;

int main(){
	int num;
	cout << "Enter positive integer N (N<1024): ";
       	cin >> num;
	cout << "Binary Output: " << bitset<8>(num) << endl;
}

