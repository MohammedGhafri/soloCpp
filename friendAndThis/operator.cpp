#include <iostream>
using namespace std;

class MyClass {
    public:
        int var;
        MyClass() { }
        MyClass(int a)
        : var(a) { }

        MyClass operator+(MyClass &obj) {
            MyClass res;
            cout<<"this from + operator"<<this->var<<endl; // This-> var, will indicate to the first obj.
            res.var= this->var+obj.var;
            return res; 
        }
};

int main() {
    MyClass obj1(12), obj2(55);
    MyClass res = obj2+obj1;
    // // void MyClass::getname(){

    // };

    cout << res.var;
}
void getname(){

}