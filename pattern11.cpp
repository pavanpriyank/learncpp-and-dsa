#include<iostream>
using namespace std;
int main(){
 /*   int n,m;
    cin>>n>>m;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cout<<"*";
    }
    cout<<"\n";
}
*/
int n=5;
    //for loop to do some task for each line
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==n/2){
                cout<<"+";
            }
            else if(j==n/2){
                cout<<"+";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}