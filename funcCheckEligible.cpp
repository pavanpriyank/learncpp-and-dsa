#include<iostream>
using namespace std;

bool checkeligible(int age,int limit){
    if(age>=limit){
        // person is eligible
        return true;
    }
    else{
        // person is not eligible
        return false;
    }
}
int main(){
    int voting_limit=18;
    int is_eligible_for_voting = checkeligible(15,voting_limit);
    if( is_eligible_for_voting){
        cout<<"yes , person is eligible for voting";
    }
    else{
        cout<<"no, person is not eligible for voting";
    }

    return 0;
}