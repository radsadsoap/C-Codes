#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool Anagram(string str1, string str2, int n) {
    for (int i = 0; i < n; i++)
    {
        if(str1[i] != str2[i])
            return false;
        else    
            return true;
    }
}

int main(void) {

    string str1 = "triangle";
    string str2 = "integral";

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    int n = str1.length();
    
    if(Anagram(str1, str2, n))
        cout << "anagram";
    

}