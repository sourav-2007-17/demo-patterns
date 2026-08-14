#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int target) {

    for (int i = 0; i < n; i++) {

        if (arr[i] == target) {
            return i;       // Target mil gaya, index return karo
        }
    }

    return -1;              // Target nahi mila
}

int main() {

    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
    int target = 22;

    int result = linearsearch(arr, n, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

    return 0;
}
