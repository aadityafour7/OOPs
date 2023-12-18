#include<iostream>
using namespace std;

class Parent{


    public:   // accessible to all 
    int x;

    protected:  // accessible to parent, current and derived class
    int y;

    private: // accessible to current class only
    int z;
};

class Child1: public Parent{
    // x will remain public 
    // y will remain protected
    // z will remain inaccessible
};

class Child2: private Parent{
    // x will remain private 
    // y will remain protected
    // z will remain inaccessible
};

class Child3: protected Parent{
    // x will remain protected
    // y will remain protected 
    // z will remain inaccessible
};



int main(){
    Parent p;
    p.x;
}