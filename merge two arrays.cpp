#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter the number of elements in the first array: ";
    cin >> n1;
    
    int arr1[n1];
    
    cout << "Enter " << n1 << " elements for the first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the number of elements in the second array: ";
    cin >> n2;
    
    int arr2[n2];
    
    cout << "Enter " << n2 << " elements for the second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int merged[n1 + n2];

    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    cout << "Merged array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}

