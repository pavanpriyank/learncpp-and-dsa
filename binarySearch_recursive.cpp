#include<iostream>
#include<vector>
using namespace std;

int binarysearchRecursive(vector<int> &input , int target , int lo , int hi){
    /*
       time: 0(logn)
       space:0(logn)    
    */
    if(lo>hi) return -1;
    int mid = lo + (hi - lo)/ 2;
    if(input[mid] == target) return mid;
    if(input[mid] < target){
        return binarysearchRecursive(input, target, mid + 1, hi);
    }
    else{
        return binarysearchRecursive(input, target, mid = 1, lo);
    }
}
int main(){
 
    int n;
    cin>>n;
    vector<int> input;
    for(int i=0;i<=n;i++){
        int z;
        cin>>z;
        input.push_back(z);
    }

    int target;
    cin>>target;
    cout<< binarysearchRecursive(input , target, 0, n-1);

    return 0;
}