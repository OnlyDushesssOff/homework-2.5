#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Russian");

    int x, y, z;
    scanf_s("%d %d %d", &x, &y, &z);
    int max, min, srz;
    if (x > y) {
        max = x;
        min = y;
    }
    else {
        max = y;
        min = x;
    }
    if (x > z) {
        max = x;
        if (z > y) {
            min = y;
            srz = z;
        }
        else {
            min = z;
            srz = y;
        }
    }
    else{
        max = z;
        srz = y;
    }
    printf("%d, %d, %d", min, srz, max);
}
