#include <iostream>
using namespace std;

class MyClass {
    public:
        MyClass() {
            regVar = 0;
            cout<<endl<<"This from normal construtor"<<endl;
        }
        MyClass(int b){
            regVar=b;
            cout <<endl<<regVar<<endl;
        }
    private:
        int regVar;

    friend void someFunc(MyClass &obj,int a);
};

void someFunc(MyClass &obj,int a) {
    obj.regVar = a;
    cout << obj.regVar;

    
}

int main() {
    MyClass obj;
    someFunc(obj,40);
    MyClass moh(5);
}
