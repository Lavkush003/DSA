#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int> &s, int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    int temp=s.top();
    s.pop();
    pushAtBottom(s, val);
    s.push(temp);


};

//reverse a string using stack

string reverseString(string str){ //O(N)
    string ans;
    stack<char>s;

    for(int i=0;i<str.size(); i++){
        s.push(str[i]);

    }

    while(!s.empty()){
        char top=s.top();
        ans+=top;
        s.pop();
    }
    return ans;
}


//reverse a stack

void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int temp=s.top();
    s.pop();
    reverse(s);
    pushAtBottom(s,temp);

}
void printStack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";
}

int main(){
string str="abcd";
 cout<<"reverse = "<<reverseString(str)<<endl;

stack<int>s;

s.push(3);
s.push(2);
s.push(1);
printStack(s);//1, 2, 3
reverse(s);
printStack(s); //3,2,1

    return 0;
}