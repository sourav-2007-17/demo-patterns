#include<iostream>
#include <string>
using namespace std;
//base class (parent)
class animal{
    public:
    string name;
    void eat(){cout << name <<"khana kha rha hai\n";}
    void sleep(){cout<< "so raha hai\n";}
};
//derived class (child)-single inheritance
class dog : public animal{
    public:
    void bark(){cout<<name<<"bhow bhow\n";}
};
//multilevel inheritance
class puppy : public dog{
    public:
    void play(){cout<<name<<"khel rha hai\n";}
};
int main(){
    dog d;
    d.name="tommy";
    d.eat();  //animal se mila 
    d.sleep(); 
    d.bark();  //dog ka apna function
    puppy p;    
    p.name="buddy";
    p.eat();  //animal se mila
    p.bark();  //dog se mila
    p.play();  //puppy se mila
}
