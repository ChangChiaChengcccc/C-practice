#include<iostream>
#include<cstdlib>
#include<fstream>
#include<cmath>

using namespace std;

int main(){
    double num;
    ofstream ofile ("/home/ncrl/Desktop/binary.dat",ios::binary);

    for(int i=1;i<=5;i++){
        num = sqrt((double)i);
        ofile.write((char*)&num,sizeof(num));
    }
    cout << "finish writing!" << endl;

    ofile.close();
    
}