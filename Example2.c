#include<string.h>
#include<stdio.h>



int main()
{
//char buffer2[50];
char buffer[12];
char buffer2[50];

char *str ="This is definitely longer than 12";

strcpy(buffer, str);

printf("\n Buffer2 address %p value: %s", &buffer2, buffer2);
printf("\n Buffer address %p value: %s", &buffer, buffer);
printf("\n str address %p value: %p, %s", &str, str, str);
return 1;
}
