#include<iostream>
using namespace std;

int CountStair(int n) {
    if( n == 1)
        return 1;
    if ( n == 2)
        return 2;
    else
        return CountStair(n-1) + CountStair(n-2);
}

int main(void) {

    int num = 5;

    cout << CountStair(num);

}