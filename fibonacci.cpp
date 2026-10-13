#include<iostream>
using namespace std;
int main(){

        
        int a=0;
        int b=1;

        cout<<a<<endl;

        while(b <= 370){
            cout<<" , "<<b;
            int next= a+b;
            a=b;
            b=next;
        }
    }

