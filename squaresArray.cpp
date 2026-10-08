#include<iostream> //this code only works when 1st and last element is bigger then middel element 
#include<vector>
#include<algorithm>
using namespace std;

// -11 3 -4 5 7
// 11  3  4 5 7  by abs
// 121 49 25 16 9

void  sortedSquaredArray(vector<int> &v){

    vector<int> ans;               // ans for storing

    int left_prt=0;                //left pointer
    int right_prt=v.size()-1;      //right pointer

    while (left_prt<=right_prt){
        if (abs(v[left_prt])<=abs(v[right_prt])){
            ans.push_back(v[right_prt]*v[right_prt]);
            right_prt--;
        }
        else{
            ans.push_back(v[left_prt]*v[left_prt]);
            left_prt++;
        }
    }

    reverse(ans.begin(),ans.end());                    //this line used for desending order
    for(int i=0;i<v.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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

    sortedSquaredArray(v);

    return 0;
}