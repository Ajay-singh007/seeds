#include<string.h>
#include<stdio.h>
#include <stdlib.h>

int main()
{
//char *secret= (char *)malloc(1);
char *input = (char *)malloc(1);
char *secret= (char *)malloc(1);

strcpy(secret, "Password");

printf("Enter password: ");
scanf("%s", input);

if(strcmp(secret, input) == 0)
{
   printf("Access granted");
}
else
{
   printf("Access Denied");
}

printf("\ninput: %p , content %s", &input[0], input);
printf(" len %d", strlen(input));
printf("\nsecret: %p, content %s", &secret[0], secret);
printf(" len %d", strlen(secret));
return 1;
}
