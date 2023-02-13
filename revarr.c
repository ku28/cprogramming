#include<stdio.h>
int main() {
    int arr[5];
    int n;
    printf("number of elements : ");
    scanf("%d", &n);

    printf("Enter an array : ");
    for (int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Reversed array : ");
    for (int i = n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}