#include<iostream>
#include<cstdlib>
#include<fstream>
#include<cmath>

using namespace std;

int main(){
    ifstream ifile ("/home/ncrl/Desktop/binary.dat",ios::binary);
    double num;

    for(int i=1;i<=5;i++){
        ifile.read((char*)&num,sizeof(num));
        cout << num << endl;
    }
    cout << "finish reading!" << endl;

    ifile.close();
    return 0;
}