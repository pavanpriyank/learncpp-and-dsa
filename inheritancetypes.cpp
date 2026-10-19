#include<iostream>
using namespace std;

class parent{     //single inheritance       A -> B
    public:
        parent(){
            cout<<"parent class"<<endl;
        }
};

class child: public parent{
    public:
        child(){
            cout<<"child class"<<endl;
        }
};

class grandchild: public child{              // multi-level inheritance  A -> B -> C
    public:
        grandchild(){          
            cout<<"grandchild class"<<endl;
        }
};

int main(){

    grandchild gc;

    return  0;
}