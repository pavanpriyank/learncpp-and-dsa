#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;                              //ask
int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    int k=2;
    k=k%v.size();

    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());

    for (int a:v){
        cout<<a<<" ";
    }
    cout<<endl;

 /*
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
*/   
    return 0;
}