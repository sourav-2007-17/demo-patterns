//class defintion (blueprint)
#include <iostream>
#include <string>
using namespace std;

class car{
    private:
    string brand; //data member
    int speed;   // data member
    string color; //data member
    public:
    void setbrand(string b){brand=b;} //membner function
    void setspeed(int s){speed=s;} //member function
    void setcolor(string c){color=c;} //member function
    void display(){
        cout<<"brand:"<< brand<<endl;
        cout<<"speed:"<<speed<<endl;
        cout<<"color:"<<color<<endl;
    }
};//end of class defintion
int main(){
    car mycar; //object creation
    mycar.setbrand("BMW");
    mycar.setspeed(200);
    mycar.setcolor("black");
    mycar.display();
    return 0;
}
