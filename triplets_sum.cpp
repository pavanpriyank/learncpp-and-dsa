#include<iostream>
using namespace std;

// 3 1 2 4 0 1                    3+1+2    3+2+1   1+4+1
//  array [i]=1  1
//  array [i]=4  4
//  array [i]=5  1

int main(){
    int array[]={3,1,2,4,0,1};
    int targetsum=6;
    int size=6;
    int triplets=0;

    for(int i=0;i<size;i++){                                       // finding i 
        for(int j=i+1;j<size;j++){                                 // finding j
            for(int k=j+1;k<size;k++){                             // finding k
                if (array[i]+array[j]+array[k]==targetsum){        // i+j+k = 3+1+2=6 ,4+0+2=6
                triplets++;
                }
            }   
        }  
    }   
    cout<<triplets<<endl;

    return 0;
}