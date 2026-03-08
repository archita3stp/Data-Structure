#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter the string: ");
    char str[100];
    scanf("%s", str);
    int n = strlen(str);
    char stack[n];
    int top = -1;
    int ctr = 0;
    for (int i = 0; i < n; i++)
    {
        char c = str[i];
        if (c == '(' || c == '{' || c == '[')
        {
            stack[++top] = c;
        }

        else
        {
            if (top == -1)
            {
                ctr++;
                break;
            }
            char c2 = stack[top--];
            if ((c == '}' && c2 != '{') || (c == ']' && c2 != '[') || (c == ')' && c2 != '('))
            {
                ctr++;
                break;
            }
        }
    }
    if (ctr > 0)
    {
        printf("False\n");
    }
    else
    {
        printf("True");
    }
    return 0;
}