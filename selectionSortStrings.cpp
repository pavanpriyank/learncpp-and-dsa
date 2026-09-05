#include<iostream>                               // ask, code not working properly
#include<cstring>
using namespace std;

void selectionSort(char fruits[][60], int n){

    for(int i=0;i<n-1;i++){

        //finding the min element
        int min_index=i;
        for(int j=j+1;j<n;j++){
            if(strcmp(fruits[min_index], fruits[j]) > 0){
                min_index =j;
            }
        }

        //place the min element at the beginning
        if(i!=min_index){
            swap(fruits[i], fruits[min_index]);
        }
    }
    return;
}
int main(){

    char fruits[][60] = {"papaya","lime","watermelon","apple","mango","kiwi"};

    int n = sizeof(fruits)/sizeof(fruits[0]);

    selectionSort(fruits, n);

    for(int i=0;i<n;i++){
        cout<<fruits[i]<<" ";
    }
    cout<<endl;

    return 0;
}