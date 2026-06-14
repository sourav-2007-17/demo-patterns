#include<iostream>
using namespace std;
int main(){
    int n,ch;
    cout << "1.Number Pattern \n2.Star Pattern \n3.Alphabet Pattern \n 4.Triangle Star \n 5.Double Number Star \n 6.Single Number \n 7.Revedrse Number \n 8.Floyd's Triangle \n 9.Inverted \n 10.Number Pyramid \n 11.Hollow Diamond \n";
    cout << "Enter your choose :";
    cin >> ch;
    cout << "Enter Your Number :";
    cin >> n;
    switch(ch){
    case 1:
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << j;
        }
    cout << endl;
    }
    break;
    case 2:
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout <<"*";
        }
    cout << endl;
    }
    break;
}
return 0;
}
