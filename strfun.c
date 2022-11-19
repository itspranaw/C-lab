#include <stdio.h>
int i=0, j=0;

void len(char[]);
void concat(char[],char[]);
void comp(char[],char[]);


int main()
{
    char str1[]="Hello", str2[] = "bye";


    len(str1);
    len(str2);
    concat(str1,str2);

    return 0;
}


void concat(char str1[], char str2[])
{
    while(str1[i]!='\0')
        i++;

    while(str2[j]!='\0')
    {
        str1[i]= str2[j];
        j++;
        i++;
    }
    str1[i]='\0';
    printf("\n%s",str1);

}

void len(char str1[])
{
    int length =0;
    while(str1[length]!='\0')
        length++;

    printf("\n%d",length);
}
