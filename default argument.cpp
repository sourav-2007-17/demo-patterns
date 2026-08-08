#include<iostream>
using namespace std;
//default argument-right to left defince karo
void greet(string name,string msg="namaste",int times=1){
    for(int i=0;i< times;i++)
    cout<<msg<<" "<<name<<endl;
}
int main(){
    greet("rahul");   //namaste rahul(1baar)
    greet("priya","hello");  //hello priya(1baar)
    greet("amit","hi",3);    //hi amit(3baar)
}
//const arguments-function value change nahi kar sakti
void display(const int x){
    cout<<x;
}
