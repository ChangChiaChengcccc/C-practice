#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

int main(){
    char ch;
    ifstream ifile("/home/ncrl/Desktop/article.txt",ios::in);
    int a=0,e=0,i=0,o=0,u=0;
    while(ifile.get(ch)){
        
        switch (ch)
        {
        case 'a': 
            a++;
            break;
        case 'e': 
            e++;
            break;
        case 'i': 
            i++;
            break;
        case 'o': 
            o++;
            break;
        case 'u': 
            u++;
            break;
        
        default:
            break;
        }
    }
    cout << "a: " << a << endl;
    cout << "e: " << e << endl;
    cout << "i: " << i << endl;
    cout << "o: " << o << endl;
    cout << "u: " << u << endl;
    ifile.close();
    return 0;
}