#include<iostream>
using namespace std;
int main(){

    int n=7;

//this loop for upper triangle
    for(int j=1;j<=n;j++){
//this loop for spaces in each lines
    for(int k=1;k<=(n-j);k++){
        cout<<" ";
    }

    int no_of_char=(2*j-1);
//this loop used for printing no_of_char in one line
    for(int i=0;i<no_of_char;i++){

    char ch= (char)('A'+ i);
    cout<<ch;
    }
    cout<<endl;
}
//loop for lower triangle
for(int j=n+1;j<=(2*n-1);j++){
    for(int k=0;k<(j-n);k++){
        cout<<" ";
    }

    //this is for printing lower triangle 
    for(int R=0;R<(2*(2*n-j)-1);R++){
        cout<<(char)('A' + R);
    }
    cout<<endl;
}
    return 0;
}