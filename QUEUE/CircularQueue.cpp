

//Circular Queueu Implementation
//Using Array


#include<iostream>

using namespace std;
class Queue{
    int* arr;
    int capacity;
    int currSize;

    int front, rear;

    public:
      Queue(int capacity){
        this->capacity=capacity;
        arr=new int[capacity];
        currSize=0;

        front = rear = -1;


      }

      void push(int data){

      }

      void pop(){

      }
      int front(){

      }

      bool empty(){

        
      }
        
};

int main(){
  Queue q(4);

    return 0;
}