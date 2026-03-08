#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter number of element for first array: ");
    scanf("%d",&n1);
    printf("Enter number of elemtent for second array: ");
    scanf("%d",&n2);
    int num1[n1],num2[n2],ans[n1];
    for(int i=0;i<n1;i++){
        printf("Enter %d element of first array: ",i+1);
        scanf("%d",&num1[i]);
    }
    for(int i=0;i<n2;i++){
        printf("Enter %d element of second array: ",i+1);
        scanf("%d",&num2[i]);
    }
    for(int i=0;i<n1;i++){
        ans[i]=-1;
        for(int j=0;j<n2;j++){
            if(num1[i]==num2[j]){
                for(int k=j+1;k<n2;k++){
                    if(num1[i]<num2[k]){
                        ans[i]=num2[k];
                        break;
                    }
                }
            }
        }
    }
    printf("[");
    for(int i=0;i<n1;i++){
        printf("%d ",ans[i]);
    }  
    printf("]");


}