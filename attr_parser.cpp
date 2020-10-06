// Attribute Parser
// James Sacco

#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    constexpr std::size_t maxlinelen{200};
    // Input number of lines and queries
    int n, q, i;
    cin >> n >> q;
    string input;
    // Use vectors as dynamic arrays; their sizes can change at runtime.
    vector<string> src;
    vector<string> query;
    cin.ignore();

    // map string attributes
    map<string, string> m;
    // initialize tag variable 
    vector<string> tagName;

    for(i = 0 ; i < n; i++)
    {
        getline(cin,input);
        src.push_back(input);
    }
    for(i=0;i<q;i++)
    {
        getline(cin,input);
        query.push_back(input);
    }
    
    // remove these chars from tag declarations
    char chars[] = "<\"

    // Print value of attribute from each query.
    for(i = 0; i < q; i++)
    {
        if (m.find(query[i]) == m.end())
        {
            cout << "Not Found!"<< endl;
        }
        else
        {
            cout << m[query[i]] << endl;
        }
    }

    return 0;
}

