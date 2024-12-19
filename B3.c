#include <stdio.h>
void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void check(int arr[], int n) {
    int isSymmetric = 0;

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] == arr[n - i - 1]) {
            printf("Cap doi xung: (%d, %d)\n", arr[i], arr[n - i - 1]);
            isSymmetric = 1;
        }
    }
    if (!isSymmetric) {
        printf("Khong co phan tu doi xung trong mang.\n");
    }
}
int main() {
     int n;
    printf("So phan tu: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d",&arr[i]);
    }
   
    check(arr, n);
    return 0;
}