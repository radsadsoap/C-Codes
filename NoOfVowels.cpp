#include<iostream>
#include<string>
using namespace std;

int main(void) {
    string str = "abcdefghi";
    string vowel = "aeiouAEIOU";
    int n = str.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(str[i] == vowel[j])
                count++;
        }
        
    }
    cout << count;
}