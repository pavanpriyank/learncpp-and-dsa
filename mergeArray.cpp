#include<iostream>
using namespace std;
int main(){            
    // code to merge arrays

    int array1[]={1,3,4,5,6};
    int array2[]={3,4,7,8,10,25,34,45,55};
    int m=5;
    int n=9;


    int result[m+n];
    int i=0;      //will help us to iterate an  array1
    int j=0;      //will help us to iterate an  array2
    int k=0;      //will help us to iterate an  result
   

    while (i<m and j<n ){
        if(array1[i]<array2[j]){
            result[k]=array1[i];
            k++;
            i++;
        }
        else{
            result[k]=array2[j];
            k++;
            j++;
        }
    }
    while (i<m){     //array2 is exhausted and we still got elements left in array1
      result[k]=array1[i];
      k++;
      i++;
    }
    while (j<n){  //array1 is exhausted and we still got elements left in array2
      result[k]=array2[j];
      k++;
      j++;
    }
    //display result
    for (int i = 0; i < (m+n); i++){
          cout<<result[i]<<" ";
    }
    

    return 0;
}