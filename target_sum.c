#include<stdio.h>
int main(){
    printf("Enter number element: ");
    int n,target;
    scanf("%d",&n); 
    int arr[n];
    printf("Enter the target sum: ");
    scanf("%d",&target);

    for(int i;i<n;i++){
        printf("Enter the %dth element: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<n-1;j++){
            if(arr[i]+arr[j]==target){
                printf("indices are:%d %d",i,j);

            }
        }
    }
}