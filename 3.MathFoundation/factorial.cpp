long long factorial(int n){
    long long fact=1;
    for (int i=2;i<=n;i++){
        fact=fact*i;
    }
    return fact;
    if(n==0){
        return 1;
    }
}

long long nCr(int n, int r){
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    long long num = factorial(n);
    long long den = modMul(factorial(r), factorial(n - r));
    return modMul(num, modInverse(den, MOD));
}

