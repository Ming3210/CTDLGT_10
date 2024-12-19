#include <stdio.h>

void findDuplicates(int arr[], int n) {
    int checked[n]; 
    for (int i = 0; i < n; i++) {
        checked[i] = 0;
    }

    int hasDuplicates = 0; 

    for (int i = 0; i < n; i++) {
        int count = 1; 
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                checked[j] = 1; 
            }
        }
        if (count > 1) {
            printf("Phan tu %d xuat hien %d lan.\n", arr[i], count);
            hasDuplicates = 1;
        }
    }
    if (!hasDuplicates) {
        printf("Khong co phan tu lap lai.\n");
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }
    findDuplicates(arr, n);

    return 0;
}