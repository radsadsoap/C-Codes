#include<iostream>
using namespace std;

bool checkArmstrong(int n) {
    int temp = n; int sum = 0;
    while(temp > 0) {
        int rem = temp % 10;
        sum += (rem * rem * rem);
        temp /= 10;
    }
    if (sum == n)          
    {
        return true;
    }

    else
    {
        return false;
    }
    
}

int main(void) {

    int num = 153;

    cout << checkArmstrong(num);

}