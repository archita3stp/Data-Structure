#include <stdio.h>
int main(){
    printf("Enter number element: ");
    int n,k,count=0;
    scanf("%d",&n); 
    int arr[n];
    printf("Enter the target sum: ");
    scanf("%d",&k);
    for(int i;i<n;i++){
        printf("Enter the %dth element: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k){
                count++;
            }
        }
    }
    printf("Number of subarrays are: %d",count);    
}