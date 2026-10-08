#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){

    // string str = "pavan";
    // string str1("priyank");

    // cout<<str<<" "<<str1<<endl;

   // string str;
   // cin>>str;
  //  getline(cin,str);           // we where we have spaces b/w words
  //  cout<<str<<endl;

  //char ch='a';              //ascii values or numarical values
  //cout<<int(ch)<<endl;

//   string str ="star";
//   reverse(str.begin(),str.end());
//   cout<<str<<endl;

// string str="Dhurandhar";
// cout<<str.substr(3,4);        //substr(position,length)

// string s1=" pavan";
// string s2="priyank";
// s1+=s2; // s1 = s1+s2           // +
// cout<<s1<<endl;

    //  char s1[30]="pavan";
    //  char s2[30]="priyank";

    //  strcat(s1,s2);                 //strcat for char and + for strings
    //  cout<<s1<<endl;

    // string s1 =" ABCD";
    // char ch= 'e';
    // s1.push_back(ch);
    // cout<<s1<<endl;

    // string str = "abcde";
    // cout<<str.size()<<endl;
    // cout<<str.length()<<endl;
    // char ch[20]="abcde";
    // cout<<strlen(ch)<<endl;

    int num=432;
    string str = to_string(num);                // to convert num into string
    str += "1";
    cout<<str[1]<<" "<<str<<endl;
    return 0;
}