#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int numbers[SIZE], distinct[SIZE];
    int distinctCount = 0;

    cout << "Enter Number Size: " << SIZE << endl;
    cout << "Enter [" << SIZE << "] numbers:\n";

    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];

        // Store the number only if it is new
        bool found = false;
        for (int j = 0; j < distinctCount; j++) {
            if (distinct[j] == numbers[i]) {
                found = true;
                break;
            }
        }
        if (!found)
            distinct[distinctCount++] = numbers[i];
    }

    cout << "\nThe number of distinct values is " << distinctCount << ".\n";
    cout << "The distinct numbers are:\n";
    for (int i = 0; i < distinctCount; i++) {
        cout << distinct[i];
        if (i < distinctCount - 1)
            cout << " ";
    }
    cout << endl;

    return 0;
}
