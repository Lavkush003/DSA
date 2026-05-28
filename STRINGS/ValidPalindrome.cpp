
//Valid Palindrome

//char[] ="apple" -> false
//char[]= "racecar"-> true


#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char str[], int n){
    int st=0, end=n-1;
    while(st<end){
        if(str[st++]!=str[end--]){
            cout<<"not a valid palindrome\n";
            return false;
        }

    }
    cout<<"valid palindrome\n";
    return true;
}

int main(){
char word[]="racecar";
char word1[]="apple";


isPalindrome(word, strlen(word));
isPalindrome(word1, strlen(word1));

return 0;

    
}





//Leetcode: 125

// class Solution {
// public:
//     bool isPalindrome(string s) {
//         int n=s.size();
//         int st=0,end=n-1;



//         while(st<end){

//             if(!isalnum(s[st])){
//             st++;
//             continue;
//             }
//             if(!isalnum(s[end])){
//                 end--;
//                 continue;
//             }

//             if(tolower(s[st++])!=tolower(s[end--])){
//                 return false;
                

//             }
//         }
//         return true;
        
//     }
// };