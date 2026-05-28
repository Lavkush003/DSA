
//Character Arrays
//Creation & output

// char work[]="code";
// char work[5]="code";

// char work[]= {'c','o','d','e','\0'};
// char work[50]={'c','o','d','e','\0'};

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//   char work[50]={'h', 'e','l','l','o','\0'};
//   cout<<strlen(work)<<endl;
//     return 0;
// }


//Taking character arrays as input

//cin.getline()

#include<iostream>
#include<cstring>

using namespace std;

int main(){

char sentence[30];
cin.getline(sentence, 30);
//cin.getline(sentence,30,'*'); //third argument is delimeter from that point

cout<<"your word was : "<<sentence<<endl;
cout<<"length : "<<strlen(sentence)<<endl;


    return 0;
}