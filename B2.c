#include<stdio.h>

int min(int arr[], int n){

    if(n<=0) return -1;
    
    int temp = arr[0];
    for(int i =0; i<n; i++){
        if(temp>arr[i]){
            temp = arr[i];
        }
        return temp;
    }
}
int main(){
    int n;
    printf("So phan tu: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d",&arr[i]);
    }
    int result = min(arr,n);
    if(result != -1){
        printf("Gia tri nho nhat trong mang la: %d", result);
    }else{
        printf("Mang khong co gia tri");
    }
    return 0;
}