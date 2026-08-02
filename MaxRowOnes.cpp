#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int LeftMostOne(vector<vector<int>> &V){   // alternate method

    int  LeftMostOne = -1;
    int   maxOnesRow = -1;
    int j =V[0].size()-1;

    //finding leftmost one in 0th row
    while (j>=0 && V[0][j]==1 ){
    LeftMostOne = j;
    maxOnesRow = 0;
    j--;
    }
    
    // check in rest of the row if we find a one left to the leftMostOne 

    for(int i=1;i<V.size();i++){
       while (j>=0 && V[i][j]==1 ){
            LeftMostOne = j;
            j--;
            maxOnesRow = i;  
        }
    }
        
    return  maxOnesRow;
}

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
                break;
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
//  int result= maximumOnesRows(vec);
    int result = LeftMostOne(vec);
    cout<< result <<endl;

    return 0;
}