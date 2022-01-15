#include <bits/stdc++.h>
using namespace std;

// Function to print the Nth digit
// in the fraction (p / q)
int findNthDigit(int p, int q, int N)
{
    // To store the resultant digit
    int res;
 
    // While N > 0 compute the Nth digit
    // by dividing p and q and store the
    // result into variable res
    // and go to next digit
    while (N > 0) {
        N--;
        p *= 10;
        res = p / q;
        p %= q;
    }
    return res;
}


int main () {

    int p = 1, q = 2, N = 1;
 
    cout << findNthDigit(p, q, N);
    return 0;
}

