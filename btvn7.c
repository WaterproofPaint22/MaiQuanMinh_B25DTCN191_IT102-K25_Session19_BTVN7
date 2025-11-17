#include <stdio.h>
void inputArray(int *arr, int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", arr + i);
    }
}
void displayArray(int *arr, int n) {
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int arrayLength(int n) {
    return n;
}
int sumArray(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}
int findMax(int *arr, int n) {
    int max = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max)
            max = *(arr + i);
    }
    return max;
}
int main() {
    int n = 0;
    int arr[100];
    int choice;
    do {
        printf("MENU:\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Moi ban nhap lua chon: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                inputArray(arr, &n);
                printf("\n");
                break;
            case 2:
                if (n == 0) printf("Mang chua duoc nhap!\n\n");
                else displayArray(arr, n);
                printf("\n");
                break;
            case 3:
                printf("Do dai mang: %d\n\n", arrayLength(n));
                break;
            case 4:
                if (n == 0) printf("Mang chua duoc nhap!\n");
                else printf("Tong cac phan tu: %d\n\n", sumArray(arr, n));
                break;
            case 5:
                if (n == 0) printf("Mang chua duoc nhap!\n");
                else printf("Phan tu lon nhat: %d\n\n", findMax(arr, n));
                break;
            case 6:
                printf("Thoat chuong trinh");
                break;
            default:
                printf("Lua chon khong hop le");
        }
    } while (choice != 6);
    return 0;
}
