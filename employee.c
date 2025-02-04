#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chars, n ,i = 0;
    char *ptr;

    printf(" how many employee is present today :");
    scanf("%d", &n);

    while (i < n)
    {
        printf(" EMPLOYEE NO %d: \nenter the number of charcters in your Employee id :", i + 1);
        scanf("%d", &chars);
        ptr = (char *)malloc((chars + 1) * sizeof(chars));
        printf("ENTER YOUR EMPLOYEE ID : \n");
        scanf("%s", ptr);
        printf("your employee id is  %s\n", ptr);
        free(ptr);
        i = i + 1;  //this is for icreamnet of number in first print f under while loop 
    }

    return 0;
}