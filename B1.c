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

int searchElement(int arr[],int n,int value){
	
	for (int i = 0; i < n; i++) {
        if(arr[i] == value){
        	return i;
		}
    }
    return -1;
}
int main(){
	int n,a,value;
	int result[MAX_SIZE]; 
	printf("So phan tu (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n > MAX_SIZE) {
        printf("So phan tu khong duoc vuot qua %d!\n", MAX_SIZE);
    } else {
        insertElement(result, n);
        printArr(result, n);
    }
    
    printf("Nhap phan tu can tim: ");
    scanf("%d",&value);
    a = searchElement(result,n,value);
    if(a == -1){
    	printf("Ko tim thay phan tu");
	}
	else{
		
    	printf("Chi so phan tu vua tim: %d",a);
	}
	return 0;
}
