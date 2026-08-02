#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maximumOnesRows(vector< vector <int>> &V){

    int maxOnes=INT_MIN;
    int maxOnesRow = -1;
    int columes =V[0].size();
    for(int i=0;i<V.size();i++){
        for(int j=0;j<V[i].size();j++){

            if(V[i][j]==1){
                int NumberOfOnes = columes - j;
                if( NumberOfOnes > maxOnes){
                    maxOnes = NumberOfOnes;
                    maxOnesRow = i;
                }
            }
        }
    }
    return maxOnesRow;
}
int main(){

    int n,m;
    cin>>n>>m;

    vector<vector<int>> vec(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    int result= maximumOnesRows(vec);
    cout<< result<<endl;

    return 0;
}