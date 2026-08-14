#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int target) {

    int low = 0;
    int high = n - 1;

    while (low <= high) {

        // Overflow-safe formula
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;             // Element mil gaya
        }
        else if (arr[mid] < target) {
            low = mid + 1;          // Right half mein search karo
        }
        else {
            high = mid - 1;         // Left half mein search karo
        }
    }

    return -1;                      // Element nahi mila
}

int main() {

    // Binary search ke liye array sorted hona chahiye
    int arr[] = {45, 46, 47, 48, 49};

    int n = 5;
    int target = 46;

    int result = binarysearch(arr, n, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

    return 0;
}
