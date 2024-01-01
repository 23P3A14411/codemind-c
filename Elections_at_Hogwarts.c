#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x+y+z==101 && x>50 && y<=50 && z<=50)
    {
        printf("Gryffindor");
    }
    else if(x+y+z==101 && y>50 && x<=50 && z<=50)
    {
        printf("Slytherin");
    }
    else if(x+y+z==101 && z>50 && x<=50 && y<=50)
    {
        printf("Hufflepuff");
    }
    else
    {
        printf("NOTA");
    }
}