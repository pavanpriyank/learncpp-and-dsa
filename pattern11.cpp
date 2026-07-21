#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

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