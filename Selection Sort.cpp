#include <bits/stdc++.h>
using namespace std;

// Function to perform selection sort on a vector
void SelectionSort(vector<int>& arr) {
    int n = arr.size();

    // Iterate over each position in the array
    for (int i = 0; i < n; i++) {

        int mini = INT_MAX; // Initialize the minimum value to a large value
        int index = -1;     // Initialize index to store the position of the minimum element

        // Find the minimum element in the unsorted part of the array [i to n-1]
        for (int j = i; j < n; j++) {
            if (mini > arr[j]) {
                mini = arr[j]; // Update mini with new smaller value
                index = j;     // Update index with the position of this new minimum element
            }
        }

        // Swap the found minimum element with the element at position i
        swap(arr[i], arr[index]);
    }
}

// Function to handle input, call sorting, and output
void solve() {
    int n;
    cin >> n; // Read size of the array

    vector<int> arr(n); // Declare vector of size n

    // Read n elements into the vector
    for (int &x : arr) cin >> x;

    // Sort the vector using selection sort
    SelectionSort(arr);

    // Output the sorted array
    for (int x : arr) cout << x << " ";
}

int main() {
    solve(); // Call solve to execute the program
    return 0; // Indicate successful termination
}
