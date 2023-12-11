#include<iostream>
using namespace std;

int BitsCount(int n){
    if(n == 0)
        return 0;
    if( ( n & 1 ) == 1)
        return 1 + BitsCount(n >> 1);
    else 
        return BitsCount(n >> 1);
}

int main(void) {

    int num = 21;

    cout << BitsCount(num);

}