// Strings Intro
// James Sacco

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Provided two strings a and b:
    string a, b;
    // Input a and b.
    cin >> a >> b;
    // Print lengths of a and b.
    // Print concatenation (a + b)
    // Print a and b with their first letters swapped.
    cout << a.size() << " " << b.size() << "\n" << a + b << "\n";
    cout << b[0] + a.substr(1) << " " << a[0] + b.substr(1);    
    return 0;

}
