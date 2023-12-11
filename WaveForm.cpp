#include<iostream>
using namespace std;

void WavePrint(int m, int n, int arr[2][4]){
    for(int i = 0; i < n; i++){
        if( i % 2 == 0){
            for(int j = 0; j < m; j++) {
                cout << arr[j][i] << " ";
            }
        }
        else{
            for (int j = m-1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
    }
}

int main(void){
    int arr[2][4] = {{1,2,3,4},{5,6,7,8}};
    WavePrint(2,4,arr);
    return 0;
}
