#include<iostream>
using namespace std;

int main(){
    int n, ch;
    
    // Display menu with better formatting
    cout << "\n========== PATTERN MENU ==========\n";
    cout << "1.  Number Pattern\n";
    cout << "2.  Star Pattern\n";
    cout << "3.  Alphabet Pattern\n";
    cout << "4.  Triangle Star\n";
    cout << "5.  Double Number Star\n";
    cout << "6.  Single Number\n";
    cout << "7.  Reverse Number\n";
    cout << "8.  Floyd's Triangle\n";
    cout << "9.  Inverted\n";
    cout << "10. Number Pyramid\n";
    cout << "11. Diamond Star\n";
    cout << "==================================\n";
    
    cout << "Enter your choice: ";
    cin >> ch;
    
    // Input validation
    if (ch < 1 || ch > 11) {
        cout << "Invalid choice!\n";
        return 1;
    }
    
    cout << "Enter your number: ";
    cin >> n;
    
    // Input validation for n
    if (n <= 0) {
        cout << "Number must be positive!\n";
        return 1;
    }
    
    switch(ch){
    case 1:
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cout << j << " ";
            }
            cout << endl;
        }
        break;
        
    case 2:
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cout << "* ";
            }
            cout << endl;
        }
        break;
        
    case 3: {
        cout << "Enter starting alphabet: ";
        char let;
        cin >> let;
        for(int i=0; i<n; i++){
            char temp = let; // Reset character for each row
            for(int j=0; j<n; j++){
                cout << temp << " ";
                temp++;
            }
            cout << endl;
        }
        break;
    }
        
    case 4:
        for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                cout << "*";
            }
            cout << endl;
        }
        break;
        
    case 5:
        for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                cout << i+1;
            }
            cout << endl;
        }
        break;
        
    case 6:
        for(int i=0; i<n; i++){
            for(int j=1; j<=i+1; j++){
                cout << j;
            }
            cout << endl;
        }
        break;
        
    case 7:
        for(int i=n; i>0; i--){
            for(int j=i; j>0; j--){
                cout << j;
            }
            cout << endl;
        }
        break;
        
    case 8: {
        cout << "Enter starting number: ";
        int num;
        cin >> num;
        for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                cout << num << " ";
                num++;
            }
            cout << endl;
        }
        break;
    }
        
    case 9:
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                cout << " ";
            }
            for(int j=0; j<n-i; j++){
                cout << i+1;
            }
            cout << endl;
        }
        break;
        
    case 10:
        for(int i=0; i<n; i++){
            for(int j=0; j<n-i-1; j++){
                cout << " ";
            }
            for(int j=1; j<=i+1; j++){
                cout << j;
            }
            for(int j=i; j>=1; j--){
                cout << j;
            }
            cout << endl;
        }
        break;
        
    case 11: {
        // Top half (including middle row)
        for(int i=0; i<n; i++){
            for(int j=0; j<n-i-1; j++) cout << " ";
            cout << "*";
            
            if(i != 0){
                for(int j=0; j<2*i-1; j++) cout << " ";
                cout << "*";
            }
            cout << endl;
        }
        
        // Bottom half
        for(int i=0; i<n-1; i++){
            for(int j=0; j<=i; j++) cout << " ";
            cout << "*";
            
            if(i != n-2){
                for(int j=0; j<2*(n-i-2)-1; j++) cout << " ";
                cout << "*";
            }
            cout << endl;
        }
        break;
    }
    }
    
    return 0;
}
