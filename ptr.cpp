#include <iostream>

using namespace std; 

void find_max(int array[3], int* max);

int main()
{   
    int array[3]={0};
    int n=0;
    cout << "請輸入array數字: " << endl;
    for(int i=0;i<3;i++){
        printf( "請輸入array[%d]: " , i);
        cin >> array[i];
    }
    cout << "最大的數是: ";
    find_max(array,&n);
    return 0;
}

void find_max(int array[3], int* max){
    max = array;
    for(int i=1;i<3;i++){
        if(array[i] > *max){
            max = array + i;
        }
    }
    cout << *max << endl;

}