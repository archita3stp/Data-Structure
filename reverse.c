#include<stdio.h>
int main(){
    printf("Enter number of element in array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d element of the array\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("Reverse of this array is: \n");
    for(int j=0;j<n;j++){
        printf("%d\n",arr[j]);
    }
}