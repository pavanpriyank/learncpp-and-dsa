#include<iostream>
using namespace std;

// 1 2 3 4 5 6
// array[i]= 3  4
// array[j]= 5  6

int main(){

    int array[]={1,2,3,4,5,6};
    
    int targetsum=10;
    int size=6;
    int pairs=0;

    for(int i=0;i<size;i++){                    // i is constent 
    for(int j=i+1;j<size;j++){                  // j is i+1
        if(array[i]+array[j]==targetsum){       // if i+j=10 
         pairs++;                               // pairs++ 1
        }
    }
}
cout<<pairs<<endl;

    return 0;
}