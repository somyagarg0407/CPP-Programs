#include <iostream>
using namespace std;

bool search_element(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return true;   // found
        }
    }
    return false;          // ----------------not found (AFTER loop)---------------
}

int main() {

    int n, key;
    int array[100];

    cout << "Enter the size (max = 100): ";
    cin >> n;

    cout << "Enter elements of array:\n";
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    if(search_element(array, n, key)) {
        cout << "Element found";
    } else {
        cout << "Element not found";
    }

    return 0;
}
