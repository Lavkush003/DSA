
#include<iostream>
#include<string>
using namespace std;
int tilingProblem(int n){
    //Base Case
    if(n==0 || n==1){
        return 1;
    }

    //vertical
    int ans1=tilingProblem(n-1); //2*n-1

    //horizontal
    int ans2=tilingProblem(n-2);// 2*n-2

    return ans1+ans2;
}

int  main(){
int n=3;
cout<<tilingProblem(4)<<endl;
    return 0;
}