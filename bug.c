int main() {
    int x = 10;
    int *ptr = &x; 
    *ptr = 20; 
    int y = *ptr; 
    printf("%d\n", y);
    return 0;
}