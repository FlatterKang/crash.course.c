double PI = 3.1415926;

int add(int a, int b) {
    return a + b;
}

int diff(int a, int b) {
    return a > b ? a - b : b - a;
}

double area(int r) {
    return PI * r * r;
}

double circle(int r) {
    return 2 * PI * r;
}