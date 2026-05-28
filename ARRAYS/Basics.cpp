//Arrays
//Linear collections of same type of elements that are stored together in contiguous memory spaces.


//creating an array
// int marks[50]
//int marks[50]= {1,2,3}
//int marks[]={1,2,3}
//memory is statically allocated (at compile time)


// #include<iostream>
// using namespace std;

// int main(){
//     int marks[5]={1,2,3,4,5}; //0 to 4
//     int n=sizeof(marks)/sizeof(int); //size of array
//     cout<<n<<endl;

//     return 0;
// }

//Output and Input Array


// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"enter length of array: ";
//   cin>>n;

//     int arr[n];
    
//  //input an array

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
//     }
//     cout<<endl;

//     return 0;

// }
    


//Maximum element in array

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={5,4,3,9,12};
//     int n=sizeof(arr)/sizeof(int);

//     int max=arr[0];
//     int min=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//             cout<<"assingning val "<<arr[i]<<" to max\n";
//         }
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//  cout<<"largest = "<<max<<endl;
//  cout<<"smallest = "<<min<<endl;

//     return 0;
// }



//Arrays are passed by reference

// void printArr(int arr[]) {...}
//void printArr(int *arr) {...}
//both are same

// #include<iostream>
// using namespace std;

// int main(){
//     int a=5;
//     int *ptr=&a;
//     cout<<ptr<<endl;

//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(int);
//     cout<<*arr<<endl; //arr[0]
//     cout<<*(arr+1)<<endl; //arr[1]
//     cout<<*(arr+2)<<endl; //arr[2]


//     return 0;
// }

#include<iostream>
using namespace std;

void printArr(int nums[], int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<",";
    }
    cout<<endl;
}
int main(){
int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(int);
cout<<"array size = "<<sizeof(arr)<<endl; //20
printArr(arr, n);

    return 0;
}
