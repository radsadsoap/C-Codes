#include<bits/stdc++.h>
using namespace std;
void rotateArray(int arr[], int n, int k){
    k%=n;
    reverse(arr,arr+n);
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
}

int main(void){

    int arr[] = {1,2,3,4,5,6,7};
    int n =sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    rotateArray(arr,n,k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}