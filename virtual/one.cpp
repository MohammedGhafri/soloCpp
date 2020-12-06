#include <iostream>
using namespace std;


/*If a function in the base class is virtual, the function's implementation in the derived class is called
according to the actual type of the object referred to, regardless of the declared type of the pointer.
A class that declares or inherits a virtual function is called a polymorphic class.*/

class Enemy {
    public:
        virtual void attack() { 
             cout<<"Main"<<endl;
         }
};

class Ninja: public Enemy {
    public:
        void attack() {
            cout << "Ninja!"<<endl;
  }
};

class Monster: public Enemy {
    public:
        void attack() {
            cout << "Monster!"<<endl;
        }
};

int main() {
    Ninja n;
    Monster m;
    Enemy *e1 = &n;
    Enemy *e2 = &m;

    e1->attack();
    e2->attack();
}