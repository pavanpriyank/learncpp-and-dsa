#include<iostream>
#include<vector>
using namespace std;
int main(){
 int array[]={1,2,3,4,5,6};     // 2+4+6=12
int sum=0;                     //  1+3+5=9
                              //   9-12=-3
 for(int i=0;i<6;i++){
    if(i%2==0){               //this line for calculating even number
      sum+=array[i];
    }
     else{                   //this line for calculating odd number
    sum-=array[i];
    }
 }
 cout<<sum<<endl;

 return 0;
}