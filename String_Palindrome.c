#include<stdio.h>
#include<string.h>
int main()
{
    char string[40];
    int length=0, flag=1,i;

    scanf("%[^
]s",string);

    for(i=0;string[i]!=NULL;i++)
    {
        length++;
    }

    for(i=0;i< length/2;i++)
    {
        if( string[i] != string[length-1-i] )
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}