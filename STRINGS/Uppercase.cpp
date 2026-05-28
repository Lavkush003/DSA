
//Convert to Upper Case

// #include<iostream>
// #include<cstring>
// using namespace std;

// void toUpper(char word[], int n){
//     for(int i=0;i<n;i++){
//         char ch=word[i];
//         if(ch>='A' && ch<='Z'){ //Upppercase
//             continue;
             
//         }else{ //lowercase
//             word[i]=ch-'a'+'A';
//         }
//     }


// }


// int main(){

// char word[]="ApPle";
//     toUpper(word, strlen(word));
//     cout<<word<<endl;

//     return 0;
// }


//Convert to LowerCase

#include<iostream>
#include<cstring>
using namespace std;

void toLower(char word[], int n){

    for(int i=0;i<n;i++){
        char ch=word[i];
        if(ch>='a' && ch<='z'){ //lowercase
            continue;
        }else{ //uppercase
     
            word[i]=ch-'A'+'a';
        }
    }
}


int main(){
 char word[]="COLLEGE";
  toLower(word, strlen(word));
  cout<<word<<endl;


    return 0;
}