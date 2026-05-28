
//Last Occurence
//Wrtie a Function to find last occurence of an element in a vector

#include<iostream>
#include<vector>

using namespace std;
int lastOccurence(vector<int>arr, int tar, int i){
    if(i==arr.size()){
        return -1;
    }

    int idxFound=lastOccurence(arr, tar, i+1);
    if(idxFound==-1 && arr[i]==tar){
        return i;
    }
    return idxFound;

}
int main(){
  vector<int> arr={1,2,3,3,3,4};
  cout<<lastOccurence(arr,3,0)<<endl;

    return 0;
}