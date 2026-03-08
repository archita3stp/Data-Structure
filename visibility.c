#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int h[n],result[n];
    for(int i=0;i<n;i++){
        printf("Enter the %dth value of the array: ",(i+1));
        scanf("%d",&h[i]);
    }
int stack[n];
int top=-1;
for(int i=n-1;i>=0;i--){
    int count=0;
    for(int j=0;j<=top;j++){
        if(stack[j]>h[i]){
            count++;
        }

    }
    result[i]=count;
    stack[++top]=h[i];
}
printf("[");
for(int i=0;i<n;i++){
    printf("%d ",result[i]);
}
printf("]");
}