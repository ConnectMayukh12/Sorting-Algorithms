#include <bits/stdc++.h>
using namespace std;


// Basic_BubbleSort:
// - Performs Bubble Sort without any optimization.
// - Always makes n passes regardless of whether the array is already sorted.
// - Time Complexity: O(n^2) in all cases.
// - Not efficient for nearly sorted arrays.

void Basic_BubbleSort(vector<int>&arr){
	int n=arr.size();
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	return;
}



// Medium_BubbleSort:
// - Slightly optimized version of Bubble Sort.
// - After each pass, the largest unsorted element is placed at the end.
// - So, the number of comparisons is reduced in each successive pass.
// - Time Complexity: Worst & Average Case: O(n^2), Best Case (sorted): still O(n^2)
// - More efficient than basic version but doesn't detect sorted arrays.

void Medium_BubbleSort(vector<int>&arr){
	int n=arr.size();
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	return;
}


// Advanced_BubbleSort:
// - Fully optimized version of Bubble Sort.
// - Uses a boolean flag to check if any swaps occurred in the current pass.
// - If no swaps are made, the array is already sorted → early termination.
// - Time Complexity:
//     - Worst & Average Case: O(n^2)
//     - Best Case (already sorted): O(n)
// - Suitable for nearly sorted or small datasets.


void Advanced_BubbleSort(vector<int>&arr){
	int n=arr.size();
	for(int i=0;i<n-1;i++){
		bool flag=false;
		for(int j=0;j<n-i-1;j++){

			if(arr[j]>arr[j+1]){
				flag=true;
				swap(arr[j],arr[j+1]);
			}

		}
		if(!flag)break;
	}

	return;
}


signed main(){

	int n;
	cin>>n;

	vector<int>arr(n);

	for(int &x:arr)cin>>x;

	//Basic Bubble Sort
	Basic_BubbleSort(arr);

	////Medium Bubble Sort
	Medium_BubbleSort(arr);

	//Advanced Bubble Sort
	Advanced_BubbleSort(arr);

	for(int x:arr)cout<<x<<""<<endl;
	
}

