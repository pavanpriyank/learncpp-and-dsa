#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>>  pascalTriangle(int n){

    vector<vector<int>> pascal(n);

    for(int i=0;i<n;i++){
        pascal[i].resize(i+1);     //  rechange whole vector from { , , , , ,} to this           // {,
        for(int j=0;j<i+1;j++){                                                                  //,  ,
            if(j==0 || j==i){                                                                    //,  ,  ,
                pascal[i][j]=1; //for printing first and  last elements as 1                     //,  ,  ,  ,      
            }                                                                                    //,  ,  ,  ,  ,}
            else{
                pascal[i][j]= pascal[i-1][j] + pascal[i-1][j-1];     //main formula     
            }
        }
    }
    return pascal;
}
int main(){

    int n;
    cin>>n;

    vector<vector<int>> ans;
    ans = pascalTriangle(n);

    
    for(int i=0;i<ans.size();i++){
    //for printing spaces
        for(int space=0;space<ans.size()-i-1;space++){
            cout<<" ";
        }
    //for printing numbers
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}