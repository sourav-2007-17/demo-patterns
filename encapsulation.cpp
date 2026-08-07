#include <iostream>
using namespace std;
class bankaccount{
    private:
        double balance;  //protected! direct access to balance is not allowed

        public:
        bankaccount(double b){ balance=b;}

        void deposit(double amount){
            if (amount>0) balance=balance+amount; //validation!
        }
        double getbalance(){return balance;} //getter function to access balance
    };

    //main function
    int main(){
        bankaccount myaccount(1000); //create an object of bankaccount with initial balance of 1000
        myaccount.deposit(500); //deposit 500 into the account
        cout<<"Current balance: "<<myaccount.getbalance()<<endl; //display the current balance
        return 0;
    }
