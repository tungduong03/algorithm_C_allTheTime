//Nguyễn Tùng Dương 20210266
#include <stdio.h>

int cube(int x) {
    return x*x*x; //trả về lập phương của x
}

double cube(double x) {
    return x*x*x; //trả về lập phương của x
}

int main() {
    int n;
    double f;
    //Nhập giá trị n nguyên và số thực f
    scanf("%d %lf", &n, &f);

    printf("Int: %d\n", cube(n));
    printf("Double: %.2lf\n", cube(f));

    return 0;
}
