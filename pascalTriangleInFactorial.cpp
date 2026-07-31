#include <iostream>
#include <vector>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}

vector<vector<int>> pascalTriangle(int n){

    vector<vector<int>> pascal(n);

    for(int i = 0; i < n; i++){
        pascal[i].resize(i + 1);  //  rechange whole vector from { , , , , ,} to this           // {,
                                                                                                //,  ,
        for(int j = 0; j <= i; j++){                                                            //,  ,  ,
            pascal[i][j] = factorial(i) /(factorial(j) * factorial(i - j));      //main formula //,  ,  ,  ,      
        }                                                                                       //,  ,  ,  ,  ,}
    }
    return pascal;
}

int main(){

    int n;
    cin >> n;

    vector<vector<int>> ans = pascalTriangle(n);

    for(int i = 0; i < ans.size(); i++){
        //for printing spaces
        for(int space=0;space<ans.size()-i-1;space++){
            cout<<" ";
        }
        //for printing numbers
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}