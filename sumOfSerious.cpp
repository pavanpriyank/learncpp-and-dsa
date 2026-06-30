#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int result=0;
    for(int i=1;i<=n;i++){
        if (i%2==0)
        {
            result-=i;
        }
        else{
            result+=i;
        }
        
    }
    cout<<result<<endl;
    return 0;
}
//1-2+3-4+5-6+7-8+9-10=-5