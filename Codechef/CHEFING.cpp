#include <ctype.h>
#include<stdio.h>
#include<string.h>
int main() {
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    char str[n][1000];
    char var[n][26];
    memset(&var[0][0], 0, sizeof(var));

    for(int i=0; i<n; i++) {
        scanf("00s", str[i]);
        char ch;
        for(int j=0; ch=str[i][j]; ++j){
            if(islower(ch)){
                var[i][ch-'a']=1;//depend on the sequence of character codes
            }
        }
    }

    int x = 0;
    for(int i=0; i<26; ++i){
        int num = 0;
        for(int j=0;j<n;++j)
            if(var[j][i])
                ++num;
        if(num==n)//all string has character of ('a'+i)
            ++x;
    }
    printf("%d\n",x);
    }

    return 0;
}

