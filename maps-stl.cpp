// Maps Problem
// By James Sacco

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main()
{
    // create map
    map<string, int> m={};

    string score;
    // declare the number of queries (q) and query type (t) vars
    int q, t;
    cin >> q;
    while(q--)
    {
        cin >> t;
        cin >> score;
        // type cases
        switch(t)
        {
            case 1: cin >> t; m[score] += t; break;
            case 2: m.erase(score); break;
            case 3: cout << m[score] << endl;
        }
    }
    return 0;
}

