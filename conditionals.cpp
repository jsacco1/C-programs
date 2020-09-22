#include <bits/stdc++.h>
#include <iostream>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string ints_mapped[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    // Given a positive integer n: 
    // If 1 <= n <= 9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.). If n > 9 , print Greater than 9.

    if(n >= 1 and n <= 9){
        cout << ints_mapped[n-1] << endl;
    }
    else if(n > 9){
        cout << "Greater than 9" << endl;
    };

    return 0;
}


