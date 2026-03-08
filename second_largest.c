#include <stdio.h>
int main(){
    printf("Enter number of elements\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d element of the array\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n-1;j++){
        for(int k=j+1;k<n;k++){
            if(arr[k]>arr[j]){
                int temp=arr[k];
                arr[k]=arr[j];
                arr[j]=temp;
            }
        }

    }
    printf("The second largest element of the array is : %d\n",arr[1]);
    return 0;
}