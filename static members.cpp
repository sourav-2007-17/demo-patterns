#include<iostream>
using namespace std;
class student{
    private:
    string name;
    public:
    static int count; //static data member declaration
    student(string n) : name(n){
        count++;  //har object banne pe count badhta hai  
        }
        static void showcount(){ //static member function
            cout<<"total students:"<<count<<endl;
            //"this" pointer nahi milta static function mein!
        }
};

//class ke bahar define -zaruri hai
int student ::count=0;

int main(){
    student s1("amit"),s2("priya"),s3("rahul");
    student::showcount(); //class name se call
    //output :total student =3
    cout<<student::count; //direct acess bhi ho saktac                             
}
