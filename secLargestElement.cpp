#include<iostream>
#include<climits>
using namespace std;

int largestElementIndex(int array[], int size){
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

int main(){

    int array[]={1,2,3,4,5,6};                 //for only single/unique type value
    int n=6;
    int indexoflargest= largestElementIndex(array,n);
    cout<<array[indexoflargest]<<endl;
    array[indexoflargest]=-1;
    int secondlargestelement=largestElementIndex(array,n);
    cout<<array[secondlargestelement]<<endl;

    return 0;

}