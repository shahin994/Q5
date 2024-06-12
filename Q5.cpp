#include <iostream>
#include <algorithm>

using namespace std;

void printArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

double averageArray(int arr[], int size) {
    int sum = sumArray(arr, size);
    return static_cast<double>(sum) / size;
}

void sortArray(int arr[], int size, int sortedArr[]) {
    copy(arr, arr + size, sortedArr);
    sort(sortedArr, sortedArr + size);
}

int searchArray(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    printArray(arr, n);

    int max = findMax(arr, n);
    cout << "Maximum element: " << max << endl;

    int min = findMin(arr, n);
    cout << "Minimum element: " << min << endl;

    int sum = sumArray(arr, n);
    cout << "Sum of elements: " << sum << endl;

    double average = averageArray(arr, n);
    cout << "Average of elements: " << average << endl;

    int sortedArr[n];
    sortArray(arr, n, sortedArr);
    cout << "Sorted array: ";
    printArray(sortedArr, n);

    int target;
    cout << "Enter a value to search in the array: ";
    cin >> target;
    int index = searchArray(arr, n, target);
    if (index != -1) {
        cout << "Value " << target << " found at index " << index << endl;
    } else {
        cout << "Value " << target << " not found in the array" << endl;
    }

    return 0;
}