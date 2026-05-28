
#include<iostream>
#include<string>
using namespace std;


int main(){

    string str="apna college";

    //normal for loop

    // for(int i=0;i<str.length(); i++){
    //     cout<<str[i]<<"-";

    // }
    // cout<<"\n";

    for(char ch: str){
        cout<<ch<<",";

    }
    cout<<endl;

    //Member Functions in C++

    //str.length()
    cout<<str.length()<<endl;

    //str.at(index)

    cout<<str.at(2)<<endl;
 

    //str.substr(startidx, length)

    cout<<str.substr(0,4)<<endl;

    //str.find(word)=>returns the index of first occurence of the word


    string str1="I love coding in C++";
    cout<<str1.find("coding")<<endl;




    return 0;
}