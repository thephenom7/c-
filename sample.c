#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int age;
}s1;
void main()
{
    int i;
    char nam[10][10]={"akshay","vig"};
    for(i=0;i<2;i++)
    {
        printf("%c %d",*(nam[i]+1),i);
    }
}