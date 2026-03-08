#include<stdio.h>
#include<stdbool.h>
struct stack{
    int arr[100];
    int top;
}stack;
struct stack s1,s2;
void push(int x){
    s1.arr[++s1.top]=x;
}
int pop(){
    if(s2.top==-1){
        while(s1.top!=-1){
            s2.arr[++s2.top]=s1.arr[s1.top--];
        }
    }
    if(s2.top==-1){
        printf("Queue is EMPTY!!");
        return -1;
    }
    return s2.arr[s2.top--];
}
int peek(){
    if(s2.top==-1){
        while(s1.top!=-1){
            s2.arr[++s2.top]=s1.arr[s1.top--];
        }
    }
    if(s2.top==-1){
        printf("Queue is EMPTY!!");
        return -1;
    }
    return s2.arr[s2.top];
}
bool empty(){
    return(s1.top==-1 && s2.top==-1);
}
int main(){
    s1.top=-1;
    s2.top=-1;
    int n;
    printf("Enter number of element: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        printf("Enter %dth element: ",(i+1));
        scanf("%d",&x);
        push(x);
    }
    printf("[null ,");
    for(int i=0;i<n;i++){
        printf("null, ");
    }
    printf("%d ,",peek());
    printf("%d ,",pop());
    printf("%s",empty()?"TRUE":"FALSE");
    printf("]");
    return 0;    
}