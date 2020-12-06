#include <iostream>
using namespace std;
/*
Note that the base class' constructor is called first, and the derived class' constructor is called next.
When the object is destroyed, the derived class's destructor is called, and then the base class' destructor is called.
You can think of it as the following: The derived class needs its base class
 in order to work - that is why the base class is set up first.
*/


//----------------------------------------//
/*Summary


Constructors
The base class constructor is called first.

Destructors
The derived class destructor is called first, and then the base class destructor gets called.
This sequence makes it possible to specify initialization and de-initialization scenarios for your derived classes.
*/
/**/
class Mother {
    public:
        Mother() 
        {
            cout <<"Mother ctor"<<endl;
        }
        ~Mother()
        {
            cout <<"Mother dtor"<<endl;
        }
};

class Daughter: public Mother {
    public:
        Daughter()
        {
            cout <<"Daughter ctor"<<endl;
        }
        ~Daughter()
        {
            cout <<"Daughter dtor"<<endl;
        }
};

int main() {
    Daughter m;
}
