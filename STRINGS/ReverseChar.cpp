
//Reverse a char array

// #include<iostream>
// #include<cstring>

// using namespace std;

// void reverse(char word[], int n){
//     int st=0, end=n-1;

//     while(st<end){
//         swap(word[st], word[end]);
//         st++;
//         end--;
//     }
// }
// int main(){
//  char word[]="code";
//  reverse(word, strlen(word));
//  cout<<"reverse ="<<word<<endl;

//     return 0;
// }


//Valid Plindrome

// #include<iostream>
// #include<cstring>

// using namespace std;

// bool isPalindrome(char str[], int n){
//     int st=0, end=n-1;
//     while(st<end){
//         if(str[st++]!=str[end--]){
//             cout<<"not valid palindrome\n";
//             return false;
//         }
//     }
//   cout<<"valid palindrome\n";
//   return true;
// }

// int main(){
//  char word[]="racecar";
//  isPalindrome(word, strlen(word));



//     return 0;
// }




//C++ strings

#include<iostream>
#include<cstring>

using namespace std;

int main(){

    string str;
    getline(cin, str);
    cout<<str<<endl;


    //substr

    string str1="helloworld";
    cout<<str1.substr(5,5)<<endl;
    return 0;
}