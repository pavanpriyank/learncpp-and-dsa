#include<iostream>
using namespace std;
int main(){
    int arr[3] = {6,4,12};
    int n = 3;
    int *ptr = &arr[0];

    cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<"\n";

    cout<<*(arr + 1)<<" "<<*(arr + 2)<<endl;

    for(int i = 0 ;i < n ;i++){
        cout<<*(arr + i)<<endl;
    }
    return 0;
}