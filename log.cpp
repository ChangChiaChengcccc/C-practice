#include <iostream>
#include <math.h>

using namespace std; 

int main()
{ 
    cout << "求出底數為10的對數" <<endl;
    cout << "Input: ";
    double param, result;
    cin >> param;
    result = log10 (param);
    printf ("log(%f) = %f\n", param, result );
    return 0;
}