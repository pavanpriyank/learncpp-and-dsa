#include<iostream>                   // ask and understand code
#include<vector>
using namespace std;

int binarysearchsortedRotated(vector<int> &input , int target){
    // time: 0(logn)
    // space: 0(1)
    int lo = 0, hi = input.size() - 1;
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(input[mid] == target) return mid;
        if(input[mid] >= input[lo]){
            if(target >= input[lo] and target <= input[mid]){
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }   
        }
        else{
            if(target >= input[mid] and target <= input[hi]){
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }   
        }
    }
    return -1;
}
int main(){

    int n;
    cin>>n;
    vector<int> input;
    for(int i = 0;i < n; i++){
        int x;
        cin>>x;
        input.push_back(x);
    }
    int target;
    cin>>target;

    cout<<binarysearchsortedRotated(input , target)<<endl;

    return 0;
}