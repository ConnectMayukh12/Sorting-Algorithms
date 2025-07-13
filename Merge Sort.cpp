#include <bits/stdc++.h>
using namespace std;

// Function to merge two sorted subarrays into one sorted array
void Merge(vector<int>& arr, int low, int mid, int high) {
    // Sizes of the two subarrays
    int n1 = mid - low + 1;
    int n2 = high - mid;

    // Create temporary arrays
    vector<int> left(n1), right(n2);

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
        left[i] = arr[low + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    // Merge the two arrays back into arr[low..high]
    int i = 0, j = 0, k = low;

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of left[], if any
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy remaining elements of right[], if any
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

// Recursive function to divide the array and call merge
void MergeSort(int low, int high, vector<int>& arr) {
    if (low < high) {
        int mid = low + (high - low) / 2; // Find the middle point

        // Recursively sort first and second halves
        MergeSort(low, mid, arr);
        MergeSort(mid + 1, high, arr);

        // Merge the sorted halves
        Merge(arr, low, mid, high);
    }
}

// Solve function to handle input/output
void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    MergeSort(0, n - 1, arr);

    for (int x : arr) cout << x << " ";
}

int main() {
    solve();
    return 0;
}
