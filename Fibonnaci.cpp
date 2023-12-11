#include<iostream>
using namespace std;

int main(void) {

    int start = 0; int num = 7;

    int next = start + 1;
    for (int i = 0; i < num; i++)
    {
        cout << start << " ";
        int temp = start;
        start = next;
        next += temp;
    }
    
}