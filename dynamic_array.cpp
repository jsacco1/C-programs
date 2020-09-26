// Dynamic Arrays
// By James Sacco

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    // Input number of variable-length arrays and queries.
    int n, q;
    cin >> n >> q;
    // Ignore last character from input buffer.
    cin.ignore();
    // Vector of integers. size n, an n-element vector.
    vector<vector<int>> a(n);

    // Loop through a vector.
    for (int i = 0; i < n; i++){
        string line;
        // Get full line.
        getline(cin, line);
        // Create stringstream object
        istringstream ss(line);

        // K-sized array.
        int k_size, k_item;
        // Store size of k.
        ss >> k_size;
        // Set all integers in k-sized array to zero.
        vector<int> k(k_size, 0);
        // Populate array k. Store integer in k, at index j.
        for (int j = 0; j < k_size; j++){
            ss >> k_item;
            k[j] = k_item;
        }
        
        // Add integers i to array a.
        a[i] = k;
    }

        // Loop through queries
        for (int i = 0; i < q; i++){
            string query;
            getline(cin, query);
            // Use stringstream to extract query.
            istringstream ss(query);

            // Find location (l) in vector (v).
            int v, l;
            ss >> v >> l;
            cout << a[v][l] << endl;


    }

    return 0;
}

