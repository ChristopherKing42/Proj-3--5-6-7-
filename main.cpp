// datatest.cpp

#include <iostream>

using namespace std;

int main()
{
    float x;

    cout << "Enter a value: ";
    cin >> x;

    cout << "The value you entered is: ";
    cout << x << endl;
    return 0;
}

//In  3.14159, 2.9e38,   2.9e39,       5.1e-38,  5.1e-39,  0.0000000005
//Out 3.14159, 2.9e+038, 3.40282e+038, 5.1e-038. 5.1e-039, 5e-010
