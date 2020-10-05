// StringStream
// James Sacco

// Description:
// Input one line of n integers separated by commas.
// Returns a vector of parsed integers.

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// create stringstream
    stringstream ss(str);
    int num;
    char ch;
    vector<int> res;
    while(ss >> num){
        ss >> ch;
        res.push_back(num);
    }
    return res;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
 
