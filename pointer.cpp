// Pointers
// By James Sacco

#include <stdio.h>
#include <cmath>

using namespace std;

void update(int *a,int *b) {
    // Modify the values in memory so that a contains their sum and b contains their absolute difference.
    int sum{*a + *b};
    *b = std::abs(*a - *b);
    *a = sum;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

