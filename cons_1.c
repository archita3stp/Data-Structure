#include<stdio.h>
int main(){
    printf("Enter number element: ");
    int n,count=0,max=0;
    scanf("%d",&n); 
    int arr[n];
    for(int i;i<n;i++){
        printf("Enter the %dth element: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            if(count>max){
                max=count;
            }
        }
        else{
            count=0;
        }
    }
    printf("The max number of consecutive 1s: %d",max);
}