#include<iostream>
using namespace std;
int main(){
    int n,ch;
    cout << "1.Number Pattern \n2.Star Pattern \n3.Alphabet Pattern \n 4.Triangle Star \n 5.Double Number Star \n 6.Single Number \n 7.Reverse Number \n 8.Floyd's Triangle \n 9.Inverted \n 10.Number Pyramid \n 11.Hollow Diamond \n";
    cout << "Enter your choose :";
    cin >> ch;
    cout << "Enter Your Number :";
    cin >> n;
    switch(ch){
    case 1:
    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++){

            cout << j << " ";

        }
    cout << endl;
    }
    break;
    case 2:
    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++){

            cout <<"*" << " ";

        }
    cout << endl;
    }
    break;
    case 3:
    cout << "Enter Your Alphabet :";
    char let;
    cin >> let;
    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            cout << let <<" ";

            let++;
        }
    cout << endl;
    }
    break;
    case 4:
    for(int i=0;i<n;i++){

        for(int j=0;j<i+1;j++){

            cout << "*";
        }
    cout << endl;
    }
    break;
    case 5:
    for(int i=0;i<n;i++){

        for(int j=0;j<i+1;j++){

            cout << i+1;
        }
    cout << endl;
    }
    break;
    case 6:
    for(int i=0;i<n;i++){

        for(int j=1;j<=i+1;j++){

            cout << j;
        }
    cout << endl;
    }
    break;
    case 7:
    for(int i=n;i>0;i--){

        for(int j=i+1;j>0;j--){

            cout << j;
        }
    cout << endl;
    }
    break;
    case 8:
    cout <<"Enter Your Starting Number :";
    int num;
    cin >> num;
    for( int i=0;i<n;i++){

        for(int j=0;j<i+1;j++){

            cout << num << " ";

            num++;
        }
    cout << endl;
    }
    break;
    case 9:
    for(int i = 0; i < n; i++) {

        for(int j = 0; j < i; j++) {
            cout << " ";
        }

        for(int j = 0; j < n - i; j++) {
            cout << i + 1;
        }
        cout << endl;
    }
    break;
    case 10:
    for(int i=0;i<n;i++){

        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=1;j<=i+1;j++){
            cout << j;
        }
        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout << endl;
    }
    break;
    case 11:
    int n = 5; // You can change this to any odd number for size

    // Top half (including middle row)
    for (int i = 0; i < n; i++) {
        // Spaces before the first star
        for (int j = 0; j < n - i - 1; j++) cout << " ";
        
        cout << "*"; // First star
        
        if (i != 0) {
            // Spaces between the two stars
            for (int j = 0; j < 2 * i - 1; j++) cout << " ";
            cout << "*"; // Second star
        }
        cout << endl;
    }

    // Bottom half
    for (int i = 0; i < n - 1; i++) {
        // Spaces before the first star
        for (int j = 0; j <= i; j++) cout << " ";
        
        cout << "*"; // First star
        
        if (i != n - 2) {
            // Spaces between the two stars
            // Formula: 2 * (n - i - 2) - 1
            for (int j = 0; j < 2 * (n - i - 2) - 1; j++) cout << " ";
            cout << "*"; // Second star
        }
        cout << endl;
    }
}
return 0;
}
