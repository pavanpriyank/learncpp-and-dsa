#include<iostream>
#include<vector>
using namespace std;

void sortByParity(vector<int> &v){

    int left_prt=0;
    int right_prt=v.size()-1;

    while(left_prt<right_prt){

        if(v[left_prt]%2==1 && v[right_prt]%2==0){
            swap(v[left_prt],v[right_prt]);
            left_prt++; right_prt--;
        }
        if(v[left_prt]%2==0){
            left_prt++;
        }
        if(v[right_prt]%2==1){
            right_prt--;
        }                     
    }
    return;
}
int main(){

    int n;
    cin>>n;

    vector<int> v;

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sortByParity(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}