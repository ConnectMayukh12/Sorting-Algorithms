#include <bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int>&arr){

    int n=arr.size();

    for(int i=1;i<n;i++){

        int current=arr[i];

        int j=i-1;

        while(arr[j]>current && j>=0){

            arr[j+1]=arr[j];

            j--;

        }

        arr[j+1]=current;


    }
    return;
}




void solve(){

    int n;

    cin>>n;

    vector<int>arr(n);

    for(int &x:arr)cin>>x;

    InsertionSort(arr);

    for(int x:arr)cout<<x<<" ";

}

int main(){
    solve();
    return 0;
}
