#include<iostream>
#include<cstdlib>
#include<fstream>
#include<ctime>
#include<sstream>

using namespace std;

int main(){
    ofstream ofile("/home/ncrl/Desktop/rand.txt",ios::out);
    
    srand((unsigned)time(NULL));
    int count=0;

    while(count<1000){
        ofile << rand()%10000 << endl;
        count++;
    }
    ofile.close();
    


    ifstream ifile("/home/ncrl/Desktop/rand.txt",ios::in);
    char ch[5];
    int j=0;
    long long int num=0;
    float avg;
    while(j<1000){
    ifile.getline(ch,5,'\n');
    //cout << atoi(ch) << endl;
    num = num + atoi(ch);
    j++;
    }
    avg = num/1000;
    cout << avg;
    ifile.close();
    return 0;
}