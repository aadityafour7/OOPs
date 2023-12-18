#include<iostream>
using namespace std;

class Fruit{
    public:  
    string name;
    string color;
};


class Student{
    string name;
    int roll_no;
};

int main()
{
    Fruit apple;  // object of class Fruit
    apple.name="Apple";
    apple.color="Red";
    cout<<apple.name<<" - "<<apple.color<<endl;

    Fruit *mango = new Fruit();   // object pointer
    mango->name="Mango";
    mango->color="Yellow";

    cout<<mango->name<<" - "<<mango->color<<endl;

    return 0;

}