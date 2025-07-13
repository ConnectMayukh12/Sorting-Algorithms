#include <bits/stdc++.h>
using namespace std;

// Function to perform insertion sort on the given vector
void InsertionSort(vector<int>& arr) {
    int n = arr.size();

    // Start from the second element (index 1) because the first element is considered sorted
    for (int i = 1; i < n; i++) {
        int current = arr[i]; // Store the current element to be inserted into the sorted part
        int j = i - 1;        // Initialize j to point to the last index of the sorted part

        // Move elements of arr[0..i-1], that are greater than current,
        // to one position ahead to make space for current
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j]; // Shift element to the right
            j--;                 // Move j to the left
        }

        // Insert the current element at its correct position in the sorted part
        arr[j + 1] = current;
    }
    return;
}

// Function to handle input and output
void solve() {
    int n;
    cin >> n; // Read the size of the array

    vector<int> arr(n); // Declare a vector of size n

    for (int &x : arr) cin >> x; // Read n elements into the array

    InsertionSort(arr); // Sort the array using insertion sort

    for (int x : arr) cout << x << " "; // Print the sorted array
}

int main() {
    solve(); // Call the solve function
    return 0; // Indicate successful termination
}
