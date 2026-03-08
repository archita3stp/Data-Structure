#include<stdio.h>
int main(){
    printf("Enter number element: ");
    int n,count;
    scanf("%d",&n); 
    int arr[n];
    for(int i;i<n;i++){
        printf("Enter the %dth element: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count==1){
            printf("The number occuring only one time is: %d",arr[i]);
        }
    }
}