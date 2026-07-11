#include<iostream>
using namespace std;                              //ask
int main(){
 int array[]={1,2,3,4,5,6};
 int n=6;
 int k=2;
 //K can be geater than n
k=k%n;

 int ansarray[6];
 int j=0;
 //inserting last k element in ans array
for (int i=n-k; i<n;i++){
    ansarray[j++]=array[i];
}
//inserting first k-n element in ans array 
for (int i=0; i<n-k;i++){
    ansarray[j++]=array[i];
}
for (int i=0; i<n;i++){
    cout<<ansarray[i]<<" ";
}
cout<<endl;
    return 0;
}