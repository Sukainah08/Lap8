#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Please, Enter array size: ";
    cin >> size;

    int arr[size];
    cout << "Enter [" << size << "] numbers:\n";
    for (int i = 0; i < size; i++) {
        cout << "Enter value - [" << i + 1 << "]: ";
        cin >> arr[i];
    }

    // Print the unsorted array
    cout << "Result is:\n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Sort ascending (bubble sort)
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - 1 - i; j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

    // Print the sorted array
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
