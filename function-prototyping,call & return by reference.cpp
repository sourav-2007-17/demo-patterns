#include<iostream>
using namespace std;
//function prototype (declaration)-body nahi ,sirf signature
int add(int ,int);
void swapbyref(int &a,int &b);  //reference parameter
int main(){
    //call by value-copy kaati hai,original nahi badlata
    int x=5,y=10;
    //call by reference -original badal jaata hai!
    swapbyref(x,y);
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    //return by reference
    int arr[5]={1,2,3,4,5};
}
void swapbyref(int &a,int &b){ //&=reference
    int temp=a;
    a=b;
    b=temp;
}

//return by reference-array element directly modify
int & getelement(int arr[], int i){
    return arr[i]; //reference return 
}

//usage:getelement(arr,2)=99;direct modify!
