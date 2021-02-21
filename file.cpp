#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

int main(){
    char txt[80],ch;
    ifstream ifile("/home/ncrl/Desktop/welcome.txt",ios::in);
    ofstream ofile("/home/ncrl/Desktop/welcome2.txt",ios::out);

    while(ifile.get(ch)){
        ofile.put(ch);
    }
    cout << "misson complete." << endl;
    ifile.close();
    ofile.close();

    ifstream ifile2("/home/ncrl/Desktop/welcome2.txt",ios::in);
    while(!ifile2.eof()){
        ifile2.getline(txt,80,'\n');
        cout << txt << endl;
    }

    ifile2.close();

    return 0;
}