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
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    printf("Array is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}