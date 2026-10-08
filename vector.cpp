#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    cout<<"size: "<<v.size()<<endl;             // size=0 capacity=0
    cout<<"capacity: "<<v.capacity()<<endl;     

    v.push_back(1);                             // size=1 capacity=1
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

     v.push_back(2);                            // size=2 capacity=2
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

     v.push_back(3);                            // size=3 capacity=4
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

     v.resize(5);                               // size=5 capacity=6             
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

     v.resize(7);                               // size=7 capacity=10
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.pop_back();                               // size=5 capacity=10
    v.pop_back();
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    return 0;
}