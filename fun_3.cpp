#include<iostream>

using namespace std;

void sort(long long int &a ,long long int &b){
        if (a>b){
		cout << a << " " << b;
	}
	else if (b>a){
		cout << b << " " << a;
	}
	else{
		cout << "error";
	}
}

int main(){
        long long int i,j;
        cout << "Compare i,j " << endl;
        cout << "Input i: ";
        cin >> i;
        cout << "Input j: ";
        cin >> j;
        cout << "Output: bigger smaller " << endl;
        sort(i,j);
	cout << "\n";
}
