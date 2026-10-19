#include<iostream>
using namespace std;

class rectangle{
public:
    int l;
    int b;

    rectangle(){   //default constructor - no args passed
        l = 0;
        b = 0;
    }

    rectangle(int x, int y){ //parameterised constructor - args pass
        l = x;
        b = y;
    }

    rectangle(rectangle& r){  //copy constructor - initalise an obj by another existing obj
        l = r.l;
        b = r.b;
    }

    ~rectangle(){ // destructor          ~class_name(){  cout<<"Destructor is called"; }   that s how we call a destructor
        cout<<"Destructor is called"<<endl;
    }

};
int main(){

    rectangle* r1 = new rectangle();
    cout<<r1->l<<" "<<r1->b<<endl;    // delete keyword only use on pointer* keyword and we have to use -> arrow keyword 
    delete r1;                      // this is an another method for destructor by using delete keyword

    rectangle r2(3,4);
    cout<<r2.l<<" "<<r2.b<<endl;

    rectangle r3 = r2;
    cout<<r3.l<<" "<<r3.b<<endl;
    
    return 0;
}