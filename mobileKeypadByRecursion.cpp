#include <iostream>
#include <vector>
#include <string>

using namespace std;

void f(string &str, int i, string result, vector<string> &li, vector<string> &v) {
    if(i == str.size()) {
        li.push_back(result);
        return;
    }
    
    int digit = str[i] - '0';
    if(digit <= 1) {
        f(str, i+1, result, li, v);
        return;
    }
    
    // Fixed: Changed v[digit][i] to v[digit][j]
    for(int j = 0; j < v[digit].size(); j++) {
        f(str, i + 1, result + v[digit][j], li, v); 
    }
    return;
}

int main() {
    vector<string> v(10);
    v = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    // Fixed: Changed "abc" to a numeric string so the digit conversion works
    string str = "23"; 
    vector<string> li;
    
    f(str, 0, "", li, v);
    
    for(int i = 0; i < li.size(); i++) {
        cout << li[i] << " ";
    }
    
    return 0;
}