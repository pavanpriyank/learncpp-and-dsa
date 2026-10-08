#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int fartorial=1;
    for (int i = 1; i <=n; i++)
    {
        fartorial*=i;
       cout<<fartorial<<endl; 
    }
    
    return 0;
}
/*
cin 5
1    1
2    1*2
6    1*2*3
24   1*2*3*4
120  1*2*3*4*5
*/