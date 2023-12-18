#include<iostream>
using namespace std;

class Parent{
    public:
    Parent(){
        cout<<"This is Parent Class"<<endl;
    }
};

class Child: public Parent{
    public:
    Child(){
        cout<<"This is Child Class"<<endl;
    }

};

class GrandChild: public Child{
    public:
    GrandChild(){
        cout<<"This is GrandChild"<<endl;
    }
};

int main()
{
    GrandChild c;
    return 0;
}