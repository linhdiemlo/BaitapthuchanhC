#include <stdio.h>

// Hàm kiểm tra nếu một số là bội của 7
int la_boi_cua_7(int n) {
    return n % 7 == 0;
}

// Hàm xuất các số nguyên có 2 chữ số và là bội của 7
void xuat_so_boi_cua_7() {
    for (int i = 10; i <= 99; i++) {
        if (la_boi_cua_7(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    printf("Cac so nguyen co 2 chu so va la boi cua 7 la:\n");
    xuat_so_boi_cua_7();
    return 0;
}
