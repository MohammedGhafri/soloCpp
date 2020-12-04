#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int b = 2;
    b = a++;
    cout <<b<<endl; // b =3
    cout <<a<<endl; // a= 4
    cout << ++b<<endl; // output  b = 4, 
    cout << b++ <<endl; //b=4
    cout <<b <<endl; //b=5

    return 0;
}