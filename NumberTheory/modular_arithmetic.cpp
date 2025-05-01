#include <iostream> // For cerr in error case

// Calculates (base^exp) % mod efficiently using binary exponentiation.
long long power(long long base, long long exp, long long mod) {
    long long res = 1;
    base %= mod; // Ensure base is within modulo
    while (exp > 0) {
        // If exp is odd, multiply base with result
        if (exp % 2 == 1) res = (res * base) % mod;
        // exp = exp/2
        exp >>= 1;
        // base = base^2
        base = (base * base) % mod;
    }
    return res;
}

// Calculates the modular multiplicative inverse of n modulo mod
// using Fermat's Little Theorem. Assumes mod is prime.
// Returns (n^(mod-2)) % mod
long long modInverseFermat(long long n, long long mod) {
    // Check if n is a multiple of mod? Might return 0 if mod is prime and n % mod == 0.
    // Add checks if necessary depending on context.
    return power(n, mod - 2, mod);
}

// Extended Euclidean Algorithm: Finds integers x, y such that ax + by = gcd(a, b).
// Returns gcd(a, b). x and y are updated by reference.
long long extendedGCD(long long a, long long b, long long &x, long long &y) {
    if (a == 0) {
        x = 0;
        y = 1;
        return b;
    }
    long long x1, y1;
    long long gcd = extendedGCD(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return gcd;
}

// Calculates the modular multiplicative inverse of n modulo mod
// using the Extended Euclidean Algorithm.
// Works even if mod is not prime, provided gcd(n, mod) = 1.
// Returns the inverse, or -1 if the inverse does not exist.
long long modInverseExtended(long long n, long long mod) {
    long long x, y;
    long long g = extendedGCD(n, mod, x, y);
    if (g != 1) {
        // Inverse does not exist if gcd is not 1
        // Handle error: return -1 or throw an exception
        // std::cerr << "Modular inverse does not exist for " << n << " mod " << mod << std::endl;
        return -1;
    }
    // Ensure x is in the range [0, mod-1]
    return (x % mod + mod) % mod;
}

// --- Example Usage ---
/*
#include <iostream>

int main() {
    long long M = 1000000007; // A common prime modulus

    long long base = 2;
    long long exp = 10;
    std::cout << base << "^" << exp << " mod " << M << " = " << power(base, exp, M) << std::endl; // 1024

    long long n = 3;
    long long inv_fermat = modInverseFermat(n, M);
    if (inv_fermat != -1) { // Check if inverse calculation might fail implicitly
        std::cout << "Modular inverse of " << n << " mod " << M << " (Fermat) = " << inv_fermat << std::endl;
        // Verification: (3 * 333333336) % 1000000007 = 1000000008 % 1000000007 = 1
        std::cout << "(" << n << " * " << inv_fermat << ") mod " << M << " = " << (1LL * n * inv_fermat) % M << std::endl;
    }


    long long inv_extended = modInverseExtended(n, M);
    if (inv_extended != -1) {
        std::cout << "Modular inverse of " << n << " mod " << M << " (Extended) = " << inv_extended << std::endl;
        std::cout << "(" << n << " * " << inv_extended << ") mod " << M << " = " << (1LL * n * inv_extended) % M << std::endl;
    }

     // Example where inverse doesn't exist
     long long non_prime_mod = 10;
     long long num = 4; // gcd(4, 10) = 2 != 1
     long long inv_non_exist = modInverseExtended(num, non_prime_mod);
     std::cout << "Modular inverse of " << num << " mod " << non_prime_mod << " (Extended) = " << inv_non_exist << std::endl; // Expected: -1

    return 0;
}
*/