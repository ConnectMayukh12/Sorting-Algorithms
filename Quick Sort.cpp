#include <bits/stdc++.h>
using namespace std;

// Function to partition the array and return the pivot index
int GetPivotIndex(int low, int high, vector<int>& arr) {
    int PivotElement = arr[low]; // Choose the first element as pivot

    int i = low + 1; // Pointer moving from left to right
    int j = high;    // Pointer moving from right to left

    while (true) {
        // Move i to the right until an element greater than pivot is found or end is reached
        while (i <= j && arr[i] <= PivotElement) i++;

        // Move j to the left until an element less than pivot is found or start is reached
        while (i <= j && arr[j] >= PivotElement) j--;

        // If pointers cross, break the loop
        if (i < j)
            swap(arr[i], arr[j]); // Swap elements at i and j
        else
            break;
    }

    // Place pivot in its correct position
    swap(arr[low], arr[j]);

    // Return the final position of the pivot
    return j;
}

// Recursive QuickSort function
void QuickSort(int low, int high, vector<int>& arr) {
    if (low < high) {
        // Get pivot index after partitioning
        int PivotIndex = GetPivotIndex(low, high, arr);

        // Recursively sort the left part
        QuickSort(low, PivotIndex - 1, arr);

        // Recursively sort the right part
        QuickSort(PivotIndex + 1, high, arr);

        return;
    }
}

// Solve function to handle input/output
void solve() {
    int n;
    cin >> n; // Read number of elements

    vector<int> arr(n);
    for (int &x : arr) cin >> x; // Read array elements

    QuickSort(0, n - 1, arr); // Sort the array

    for (int x : arr) cout << x << " "; // Output sorted array
}

int main() {
    solve();
    return 0;
}
