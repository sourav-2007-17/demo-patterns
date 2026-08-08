#include<iostream>
using namespace std;
//inline function -choti ,simple function ke liye
inline int square(int n){
    return n*n;
}
inline int max(int a,int b){
    return (a>b)?a:b;
}
//class ke ander define function automatically inline hota hai!
class calculator{
    public:
    int add(int a,int b)
    {return a+b;
    } //auto inline
};
int main(){
    cout<<square(5)<<endl; //compiler ise 5*5 replace kar deta hai
    cout<<max(10,20)<<endl;
}
