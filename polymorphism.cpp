#include<iostream>
using namespace std;
class shape{
    public:
    virtual void draw(){ //virtual keyword 
        cout<< "shape draw ho rha hai\n";
    }
};
class circle : public shape{
    public:
    void draw() override{ //override
        cout<<"circle draw ho rha hai\n";
    }
};
class square : public shape{
    public:
    void draw() override{
        cout<<"square draw ho rha hai\n";
    }
};
int main(){
    shape *ptr;  //base  class pointer
    circle c;
    square s;
    ptr =&c;
    ptr ->draw();  //output:gol circle draw ho rha hai
    ptr=&s;
    ptr ->draw();  //output: square draw ho rha hai
    //runtime polymorphism is achieved using virtual function and base class pointer
    //runtime pe decide hota hai1 vtable magic 
}
