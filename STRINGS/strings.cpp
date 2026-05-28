
#include<iostream>
#include<string>
using namespace std;

int main(){
    // string str="hello";
    // cout<<str<<endl;
    // str="yellow"; //updated value will print

    // cout<<str<<endl;

    //Input in strings

    string str;
    getline(cin, str);
    cout<<str<<endl;

    //delimeter-->stop where it get delimeter value
  string str1;
    getline(cin, str1, '$');
    cout<<str1<<endl;

    return 0;
}
