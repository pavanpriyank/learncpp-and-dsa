/*#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();

    int top = 0;
    int bottom = row - 1;
    int left = 0;
    int right = col - 1;

    while (top <= bottom && left <= right) {

        // Left -> Right
        for (int j = left; j <= right; j++) {
            ans.push_back(matrix[top][j]);
        }
        top++;

        // Top -> Bottom
        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--;

        // Right -> Left
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                ans.push_back(matrix[bottom][j]);
            }
            bottom--;
        }

        // Bottom -> Top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return ans;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    vector<int> result = spiralOrder(matrix);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}*/
#include<iostream>
#include<vector>
using namespace std;

void spiralOrder(vector<vector<int>> &matrix){

    int left=0;
    int right=matrix[0].size()-1;
    int top=0;
    int bottom=matrix.size()-1;

    int direction=0;

    while(left<=right && top<=bottom){
    // left-> right
    if(direction==0){
        for(int col=left;col<=right;col++){
            cout<<matrix[top][col]<<" ";
        }
        top++;
    }
    //top -> bottom
    else if(direction==1){
        for(int row=top;row<=bottom;row++){
            cout<<matrix[row][right]<<" ";
        }
        right--;
    }
    //right -> left
    else if(direction==2){
        for(int col=right;col>=left;col--){
            cout<<matrix[bottom][col]<<" ";
        }
        bottom--;
    }
    // bottom -> top
    else{
        for(int row=bottom;row>=top;row--){
            cout<<matrix[row][left]<<" ";
        }
        left++;
    }
    direction = (direction + 1)%4;
    // 0,1,2,3
    }
    return;
}
int main(){

    int n,m;
    cin>>n>>m;

    vector<vector<int>> matrix(n,vector<int> (m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    spiralOrder(matrix);

    return 0;
}
