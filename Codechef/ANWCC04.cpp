#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>
int string_expression(char s1[]){
    char *endp = s1;
    int sum = 0;
    while(*s1){
        sum += strtol(s1, &endp, 10);
        s1 = endp;
    }
    return sum;
}

int main(void)
{
    int t,i,c=0,j;
scanf("%d",&t);
char a[1000];
char b[1000];
char arr[1000];
char num[1000];
char num1[1000];
int val;
while(t--)
{
    c=0;
    scanf("%s",&a);
for(i=0;i<strlen(a);i++)
{
    if(a[i]=='=')
        break;
    else
        b[i]=a[i];
}

b[i]='\0';
for(j=(i+1);j<strlen(a);j++)
    num[c++]=a[j];
num[c]='\0';
strcpy(arr,b);
strcpy(num1,num);
val=atoi(num1);
if(val==string_expression(arr))
    printf("Valid Equation\n");
else
printf("Invalid Equation\n");

}
}

