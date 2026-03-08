#include<stdio.h>
#include<string.h>
int main(){
    char s[100],p[100];
    printf("Enter the first string: ");
    scanf("%s",s);
    printf("Enter the second String: ");
    scanf("%s",p);
    int s1=strlen(s);
    int p1=strlen(p);
    char result[100];
    int len=0;
    for(int i=0;i<s1;i++){
        result[len++]=s[i];
        if(len>=p1){
            int match=1;
            for(int j=0;j<p1;j++){
                if(result[len-p1+j]!=p[j]){
                    match=0;
                    break;
                }
            }
            if(match){
                len-=p1;
            }
        }
    }
    if(len==0){
        printf("EMPTYY!!");
    }
    else{
        result[len]='\0';
        printf("The resultant string is : %s",result);
    }

}