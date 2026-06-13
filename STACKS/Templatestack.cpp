
#include<iostream>
#include<vector>
using namespace std;

template<class T>
class Stack{
    vector<T> vec;
    public:
       void push(T val){  //O(1)
        vec.push_back(val);

       }
    
       void pop(){ //O(1)
        if(isEmpty()){
            cout<<"stack is empty.\n";
        }
        vec.pop_back();

       }
    T top(){
        int lastIdx=vec.size()-1;
        return vec[lastIdx];

    }
    bool isEmpty(){
        return vec.size()==0;
    }
    
};



int main(){
//   Stack<int> s;
//   s.push(3);
//   s.push(2);
//   s.push(1);

//char 
Stack<char>s;
s.push('c');
s.push('b');
s.push('a');

  while(!s.isEmpty()){
    cout<<s.top()<<" ";
    s.pop();

  }

  cout<<endl;

    return 0;
}