#include <vector>
#include <iostream> // For example

// Required: modular_arithmetic.cpp (for power and modInverse)
// --- Assume power and modInverseExtended are defined as in modular_arithmetic.cpp ---
long long power(long long base, long long exp, long long mod); // Needs definition
long long modInverseExtended(long long n, long long mod);     // Needs definition
// --- Or include the modular_arithmetic.cpp file ---


const int MAX_FACTORIAL = 200005; // Max N for which factorials are needed
long long fact[MAX_FACTORIAL];
long long invFact[MAX_FACTORIAL];
long long MOD_COMB = 1000000007; // Default modulus, can be changed

// Precompute factorials and their modular inverses
void precompute_combinations(int max_n, long long mod) {
    MOD_COMB = mod;
    fact[0] = 1;
    invFact[0] = 1; // Inverse of 1 is 1
    for (int i = 1; i <= max_n; ++i) {
        fact[i] = (fact[i - 1] * i) % MOD_COMB;
        // Calculate inverse factorial using inverse of i
        // invFact[i] = (invFact[i-1] * power(i, MOD_COMB - 2, MOD_COMB)) % MOD_COMB; // Using Fermat
         long long inv_i = modInverseExtended(i, MOD_COMB);
         if (inv_i == -1) {
             // Handle error: inverse doesn't exist (modulus not prime or i is multiple)
             // This shouldn't happen if mod is prime and i <= mod
             std::cerr << "Error: Modular inverse for " << i << " mod " << MOD_COMB << " doesn't exist." << std::endl;
             // Potentially fill rest with sentinel value or throw
             return;
         }
         invFact[i] = (invFact[i-1] * inv_i) % MOD_COMB; // Using Extended Euclidean
    }
}

// Calculate nCr % mod using precomputed factorials and inverses
// nCr = n! / (r! * (n-r)!) = n! * inv(r!) * inv((n-r)!) % mod
long long nCr_mod(int n, int r) {
    if (r < 0 || r > n) {
        return 0; // Invalid input
    }
    if (n >= MAX_FACTORIAL) {
         // Handle error: n is too large for precomputation
         std::cerr << "Error: n is too large for precomputed factorials." << std::endl;
         return -1; // Or throw
    }
    // Calculate n! * inv(r!) * inv((n-r)!) % mod
    long long num = fact[n];
    long long den = (invFact[r] * invFact[n - r]) % MOD_COMB;
    return (num * den) % MOD_COMB;
}


// --- Example Usage ---
/*
#include <iostream>

// --- Paste implementations of power and modInverseExtended here ---
long long power(long long base, long long exp, long long mod) {
    long long res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}
long long extendedGCD(long long a, long long b, long long &x, long long &y) {
    if (a == 0) { x = 0; y = 1; return b; }
    long long x1, y1;
    long long gcd = extendedGCD(b % a, a, x1, y1);
    x = y1 - (b / a) * x1; y = x1;
    return gcd;
}
long long modInverseExtended(long long n, long long mod) {
    long long x, y;
    long long g = extendedGCD(n, mod, x, y);
    if (g != 1) return -1;
    return (x % mod + mod) % mod;
}
// --- End of pasted code ---


int main() {
    int max_n_needed = 100; // Max N we expect for nCr
    long long modulus = 1000000007;

    precompute_combinations(max_n_needed, modulus);

    int n1 = 10, r1 = 3;
    std::cout << n1 << "C" << r1 << " mod " << modulus << " = " << nCr_mod(n1, r1) << std::endl; // Expected: 120

    int n2 = 5, r2 = 2;
    std::cout << n2 << "C" << r2 << " mod " << modulus << " = " << nCr_mod(n2, r2) << std::endl; // Expected: 10

    int n3 = 50, r3 = 5;
     std::cout << n3 << "C" << r3 << " mod " << modulus << " = " << nCr_mod(n3, r3) << std::endl; // Expected: 2118760

    return 0;
}
*/