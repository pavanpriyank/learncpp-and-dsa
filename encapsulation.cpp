#include<iostream>
using namespace std;

class abc{

    int x;

    public:

    void set(int n){
        x = n;
    }

    int get(){
        return x;
    }
};
int main(){

    abc object1;
    object1.set(3);
    cout<<object1.get()<<endl;
     
    return 0;
} 