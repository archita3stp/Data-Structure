#include<stdio.h>
int main(){
    int n,ones=0;
    printf("Enter number of student and sandwiches: ");
    scanf("%d",&n);
    int student[n],sandwich[n];
    for(int i=0;i<n;i++){
        printf("Enter prefrence of %dth student: ",(i+1));
        scanf("%d",&student[i]);
        if(student[i]==1){
            ones++;
        }
    }
    int zeros=n-ones;
    for(int i=0;i<n;i++){
        printf("Enter type of %dth sandwich: ",(i+1));
        scanf("%d",&sandwich[i]);
    }
    for(int i=0;i<n;i++){
        if(sandwich[i]==1){
            if(ones==0){
                break;
            }
            ones--;
        }else{
            if(zeros==0){
                break;   
            }
            zeros--;
        }
    }
    printf("Number of students unable to eat is: %d",(zeros+ones));
}