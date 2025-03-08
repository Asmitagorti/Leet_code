// Pure Sieve of Eratosthenes algorithm
long long int arr[5000001] = {0}, ct = 0, u = 0;

long long sieve(long long n) {
    if (n <= 2) return 0;
    if (u == 0) {
        u = 1; // mark sieve
        for (int i = 2; i < 5000001; ++i) {
            arr[i] = 1;  
        }

        // Sieve of Eratosthenes
        for (long long i = 2; i * i < 5000001; ++i) {
            if (arr[i]) {
                for (long long j = i * i; j < 5000001; j += i) {
                    arr[j] = 0;
                }
            }
        }
        for (int i = 2; i < 5000001; ++i) {
            if (arr[i]) ct++;
        }
    }
    long long ct = 0;
    for (int i = 2; i < n; ++i) {
        if (arr[i]) ct++;
    }
    return ct;
}

int countPrimes(int n) {
    return sieve(n);
}
