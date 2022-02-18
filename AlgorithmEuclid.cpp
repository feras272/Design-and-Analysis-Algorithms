#include <iostream>
#include <vector>

using namespace std;

int GCD(int m, int n) {
    int r;
    do{
        r = m % n;
    } while(n == 0);

    return r;
}

int main() {

    int gcd = GCD(12, 36);
    cout<< "The greatest common divisor is " << gcd;

    return 0;
}