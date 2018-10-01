#include <cstdlib>
#include <iostream>

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

int main() {
    int num1;
    int num2;

    while (scanf("%d %d") != EOF) {
        std::cout << "GCD(" << num1 << "," << num2 << ") = " << gcd(num1, num2) << '\n';
    }
    return 0;
}

 
