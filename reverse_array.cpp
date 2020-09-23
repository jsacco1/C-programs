// Reverse array
// By James Sacco

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Given an array of  integers and you have to print the integers in the reverse order. The first line of the input contains n, where n is the number of integers. The next line contains n space-separated integers.*/
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
        cin >> a[i];
        }
        for(int i = n-1; i >= 0; i--)
        {
            cout << a[i] <<" ";
        }

    return 0;
}

