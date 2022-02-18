#include <iostream> 
#include <vector>

using namespace std;

int FindGCD(int m, int n) {

    // array to store the divisors of N numbers
    vector<int> arrM;

    // array to store the divisors of N numbers
    vector<int> arrN;

    // storing in M array the divisors
    for(int i = m; i > 0; i--) {
        if(m % i == 0) {
            arrM.push_back(i);
        }
    }
    
    // storing in N array the divisors
    for(int i = n; i > 0; i--) {
        if(n % i == 0) {
            arrN.push_back(i);
        }
    }

    // storing the common divisors between M and N divsors
    vector<int> common;
    for(int i = 0; i < arrM.size(); i++){
        for(int j = 0; j < arrN.size(); j++) {
            if(arrM[i] == arrN[j]) {
                common.push_back(arrM[i]);
            }
        }
    }

    // what numbers have stored in M array
    for(int i = 0; i < arrM.size(); i++) {
        cout<< arrM[i] << ", ";
    }
    cout<< endl;

    // what numbers have stored in N array
    for(int i = 0; i < arrN.size(); i++) {
        cout<< arrN[i] << ", ";
    }
    cout<< endl;

    // what numbers have stored in common array
    for(int i = 0; i < common.size(); i++) {
        cout<< common[i] << ", ";
    }
    cout<< endl;

    // storing the GCD number to return the function
    int gcd = 0;

    // storing the greatest common divsor by comparing each number in the common array
    for(int i = 0; i < common.size(); i++) {
        if(gcd < common[i]) {
            gcd = common[i];
        }

    }

    return gcd;
}

int main() {

    int gcd = FindGCD(8,4);
    cout<< "The gcd is " << gcd;

    return 0;
}