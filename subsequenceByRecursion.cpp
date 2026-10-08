#include<iostream>
#include<vector>
using namespace std;

void f(string &str, int i, string result, vector<string> &bjp){
    if(i == str.length()){
        bjp.push_back(result);
        return;
    }
    f(str, i+1, result + str[i], bjp);
    f(str, i+1, result, bjp);
}

int main(){

    vector<string> res;
    string str = "abc";
    f(str, 0, "", res);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }

    return 0;
}