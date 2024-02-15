#include<stdio.h>
#include<string.h>
int main()
{
    printf("Give n \n");
    int n;
    scanf("%d", &n);
    char ch[n+1];
    for(int i=0;i<n;i++)
    {
        printf("Enter character: \n");
        scanf(" %c", &ch[i]);
    }
    printf("Enter word: \n");
    char s[100];
    scanf(" %s", &s);
    for(int j=0;j<strlen(s)-1;j++)
    {
        int rep=0;
        for(int k=0;k<n;k++)
        {
            if(s[j]==ch[k])
            {rep++;}
        }
        if(rep==0)
        {
            printf("Word can't be written with the help of character array\n");
                return 0;
        }
    }
    printf("Word can be written with the help of character array\n");
    return 0;

}