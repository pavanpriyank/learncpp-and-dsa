#include<iostream>
using namespace std;
int main(){

    int array[]={1,2,3,4,5,6};
    
    int targetsum=10;
    int size=5;
    int pairs=0;

    for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(array[i]+array[j]==targetsum){
         pairs++;
        }
    }
}
cout<<pairs<<endl;

    return 0;
}