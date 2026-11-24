#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter Number Size: ";
    cin >> size;

    int arr[size];
    cout << "Enter [" << size << "] numbers:\n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int sum = arr[0], largest = arr[0], smallest = arr[0];
    cout << "The number of values is " << size << ":\n";
    cout << arr[0];
    for (int i = 1; i < size; i++) {
        cout << "\t" << arr[i];
        sum += arr[i];
        if (arr[i] > largest)  largest = arr[i];
        if (arr[i] < smallest) smallest = arr[i];
    }
    cout << endl;

    double average = (double)sum / size;
    cout << "The Sum is: " << sum << endl;
    cout << "The Average is: " << average << endl;
    cout << "The Largest is: " << largest << endl;
    cout << "The Smallest is: " << smallest << endl;

    return 0;
}
