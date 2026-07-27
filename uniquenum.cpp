#include<iostream>
using namespace std;

// 1 2 2 1 3 3 5
// 1=1 do -1
// 2=2 do -1
// 3=3 do -1
// -1 -1 -1 -1 -1 -1 5
// output is 5

int main(){
int array[]={1,2,2,1,3,3,5};
int size=7;

for(int i=0;i<size;i++){                  //if i=j do -1 
    for(int j=i+1;j<size;j++){          
        if(array[i]==array[j]){
        array[i]=array[j]=-1;
        }
    }
}
 for (int i = 0; i < size; i++){
    if (array[i]>0){                   //any number greater than 0 is unique number
    cout<<array[i]<<endl;
    }
}
   return 0;
}