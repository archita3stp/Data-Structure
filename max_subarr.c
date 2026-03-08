#include<stdio.h>
int main(){
    printf("Enter number element: ");
    int n,sum,max=0;
    scanf("%d",&n); 
    int arr[n];
    for(int i;i<n;i++){
        printf("Enter the %dth element: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum>max){
                max=sum;
            }
        }
    }
    printf("Max sum of the subarrays is : %d",max);
}
