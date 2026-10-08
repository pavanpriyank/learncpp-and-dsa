#include<iostream>
using namespace std;
int add(int a,int b=3,int c=2){
    return (a+b+c);
}
int main(){
 
    cout<<add(2)<<endl;
    cout<<add(2,3)<<endl;
    cout<<add(2,3,4)<<endl;
    return 0;
}