#include <stdio.h>
#include <math.h>

// Hàm kiểm tra số chính phương
int la_so_chinh_phuong(int n) {
    int sqrt_n = (int)sqrt(n);
    return (sqrt_n * sqrt_n == n);
}

// Hàm đếm và in các số chính phương nhỏ hơn n
void dem_va_in_so_chinh_phuong(int n) {
    int count = 0;
    printf("Cac so chinh phuong nho hon %d la:\n", n);
    for (int i = n - 1; i > 0; i--) {
        if (la_so_chinh_phuong(i)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTong so chinh phuong nho hon %d la: %d\n", n, count);
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong lon hon 0.\n");
    } else {
        dem_va_in_so_chinh_phuong(n);
    }

    return 0;
}
