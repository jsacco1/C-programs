// Vector Sort
// By: James Sacco

// Description: Sort a user-defined vector of integers

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
    // User-defined comparator to define how the data will sort.
    return a<b;
}

int main() {
    int n, input;
    // Input the number of integers.
    cin >> n;
    vector<int> v;
    while (v.size() < n && cin >> input){ //enter any non-integer to end the loop! 
        v.push_back(input);
        }
    // Sort integers with comparator function.
    sort(v.begin(), v.end() , cmp);

    // Print the sorted vector.
    for (int i=0; i<v.size(); i++) 
        cout << v[i] << " "; 

    return 0;
}

