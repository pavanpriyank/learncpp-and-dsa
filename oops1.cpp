#include<iostream>
using namespace std;

// class_name{
//     int data1;
//     int data2;

// };

class fruit{
    public:

    string name;
    string color;
};

int main(){

    fruit apple; //object
    apple.name = "Apple";
    apple.color = "Red";
    cout<<apple.name<<" - "<<apple.color<<endl;

    fruit *mango = new fruit();     // by new keyword we make another object and by using pointer we make a copy of variable 
    mango->name = "Mango";
    mango->color = "Yellow";
    cout<<mango->name<<" - "<<mango->color<<endl;

    return 0;
}