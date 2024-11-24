#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap vao 3 so nguyen:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("Thu tu cac so tu be den lon:");

    if (a <= b && a <= c) {
        if (b <= c) {
            printf("%d %d %d", a, b, c);
        } else {
            printf("%d %d %d", a, c, b);
        }
    } else if (b <= a && b <= c) {
        if (a <= c) {
            printf("%d %d %d", b, a, c);
        } else {
            printf("%d %d %d", b, c, a);
        }
    } else {
        if (a <= b) {
            printf("%d %d %d", c, a, b);
        } else {
            printf("%d %d %d", c, b, a);
        }
    }

    return 0;
}