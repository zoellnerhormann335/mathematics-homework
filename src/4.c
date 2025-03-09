int main() {
    int a = 5;
    int b = 10;
    int result = add(a, b);
    printf("The sum of %d and %d is %d\n", a, b, result);
    return 0;
}

int add(int x, int y) {
    return x + y;
}
