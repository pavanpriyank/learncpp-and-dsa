#include<iostream>                           //ask
#include<climits>
using namespace std;
/*
int largestElementIndex(int array[], int size)i{
    int max= INT_MIN;
    int maxindex =-1;
    for (int i = 0; i < size; i++){
        if (array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    return maxindex;
}
*/                             
int largestElementIndex(int array[], int size){ //this is another method to find second element in double value
    int max= INT_MIN;
    int second_max=INT_MAX;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    for(int i=0;i<size;i++){
        if(array[i]>second_max && array[i]!=max){
            second_max=array[i];
        }
    }
return second_max;
}
int main(){
    int array[]={1,2,3,6,5,6};                 
    int n=6;                               

 /*
int array[]={1,2,3,6,5,6};                 //for only single/unique type value
    int n=6;                               
    int indexoflargest= largestElementIndex(array,n);
    cout<<array[indexoflargest]<<endl;
    array[indexoflargest]=-1;

//  int largestelement=array[indexoflargest];     //this is for double value to find second largest element
//  for(int i=0;i<n;i++){
//     if (array[i]==largestelement){
//  array[i]=-1;
//}
//    }
    int secondlargestelement=largestElementIndex(array,n);
    cout<<array[secondlargestelement]<<endl;
*/   

cout<<(array , n)<<endl;
    return 0;
}