#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 

void insertElement(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

int binarySearch(int arr[], int low, int high, int value) {
    if (low > high) {
        return -1; 
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == value) {
        return mid; 
    } else if (arr[mid] > value) {
        return binarySearch(arr, low, mid - 1, value); 
    } else {
        return binarySearch(arr, mid + 1, high, value); 
    }
}

int main() {
    int n, index, value;
    int result[MAX_SIZE]; 

    printf("So phan tu (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n > MAX_SIZE) {
        printf("So phan tu khong duoc vuot qua %d!\n", MAX_SIZE);
        return 1;
    }

    insertElement(result, n);
    printArr(result, n);

    printf("Nhap phan tu can tim: ");
    scanf("%d", &value);

    index = binarySearch(result, 0, n - 1, value);

    if (index == -1) {
        printf("Khong tim thay phan tu\n");
    } else {
        printf("Chi so phan tu vua tim: %d\n", index);
    }

    return 0;
}
