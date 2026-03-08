#include<stdio.h>
int main(){
    printf("Enter number of elements:\n");
    int n,j=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d element of the array\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i=i+2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    printf("Array is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}