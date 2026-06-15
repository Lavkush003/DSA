
// #include<iostream>
// #include<stack>
// #include<vector>

// using namespace std;

// void stockspanProblem(vector<int> stock, vector<int> span){
//     stack<int>s;
//     s.push(0);
//     span[0]=1;

//     for(int i=1;i<stock.size(); i++){
//         int currPrice=stock[i];
//         while(!s.empty() && currPrice>=stock[s.top()]){
//             s.pop();
//         }
//         if(s.empty()){
//             span[i]=i+1;
//         }else{
//             int prevHigh=s.top();
//             span[i]=i-prevHigh;
//         }
//     }
//  for(int i=0;i<span.size();i++){
//     cout<<span[i]<<" ";
//  }

//  cout<<endl;
// }


// int main(){

//     vector<int> stock={100, 80,60,70,60,85,100};
//     vector<int>span={0,0,0,0,0,0,0};
//     stockspanProblem(stock,span);
//     return 0;
// }




//Next Greater Element

//next Greater=first greater element that is to the right

#include<iostream>
#include<stack>
#include<string>
#include<vector>

using namespace std;

void nextGreater(vector<int> arr, vector<int>ans){
    stack<int>s;
    int idx=arr.size()-1;

    ans[idx]=-1;
    s.push(arr[idx]);

    for(idx=idx-1;idx>=0;idx--){
        int curr=arr[idx];
        while(!s.empty() && curr>=s.top()){
            s.pop();
        }
        if(s.empty()){
            ans[idx]=-1;
        }else{
            ans[idx]=s.top();
        }
        s.push(curr);
    }
    for(int i=0;i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){

vector<int> arr={6,8,0,1,3};
vector<int>ans={0,0,0,0,0};
nextGreater(arr, ans);

    return 0;
}