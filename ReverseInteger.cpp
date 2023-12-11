#include<iostream>
using namespace std;

int main(void) {

    int num = 112;
    int sum = 0;

    while (num != 0)  
    {
        int digit = num % 10;
        sum = (sum * 10) + digit;
        num /= 10;
    }
    
    cout << sum;

}