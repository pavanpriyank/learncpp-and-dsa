#include<iostream>
#include<vector>
using namespace std;

// Function to check if the given integer is present in the vector or not
bool checkNumPresent(int givenInt, vector<int> v){
    bool isPresent = false;
    int size = v.size();

    for(int i = 0; i < size; i++){
        if(v[i] == givenInt){
            isPresent = true;
            break;
        }
    }

    return isPresent;
}

int main(){
    vector<int> v(6);

    for(int i=0;i<6;i++){       // [0, 1, 2, 3, 4, 5]
        v.push_back(i);
    }
    
    cout<<checkNumPresent(5, v)<<endl;
    
        return 0;
    }