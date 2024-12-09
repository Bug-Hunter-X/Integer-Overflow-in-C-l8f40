int main() {
    long long x = 10;
    long long *ptr = &x; 
    *ptr = 20; 
    long long y = *ptr; 
    printf("%lld\n", y);
    return 0;
}