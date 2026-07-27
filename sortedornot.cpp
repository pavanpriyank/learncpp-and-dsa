#include<iostream>
#include<vector>
using namespace std;
int main(){

 int array[]={1,2,3,4,5,6};

 bool sortedflag=true;
 for(int i=1;i<6;i++){          
    if(array[i]<=array[i-1]){             // if 5<=5 this is false 
      sortedflag=false;
    }
 }
cout<<sortedflag<<endl;

    return 0;
}