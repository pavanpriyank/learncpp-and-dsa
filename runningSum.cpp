#include<iostream>
#include<vector>
using namespace std;

// 1 2 3 4 5
// i= 4-1 +4 =3+4= 10+5=15  {1,3,6,10,15}
 
void runningSum(vector<int> &v){           

    for(int i=1;i<v.size();i++){
        v[i]+=v[i-1];                    // v[i]= v[i-1]+ v[i];     
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

    runningSum(v);

    for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}