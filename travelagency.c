/*
n=3
you manage a travel agency and you want an n drivers to input their details ;
following deatils you want to ask him/ her ;
1. name
2. driving license number
3. route
4. kms
your program should be able to take n as an input numbers and your drivers start inputting the deatils one by one for the sake of the simplicity;

your program should be able to print the details of the drivers in a beutiful fashion or you can say in a good manner

using of structures
*/

#include <stdio.h>

typedef struct driver
{
    char name[45];
    char dlno[45];
    char route[45];
    int kms;
} dr;
int main()
{
    dr d1, d2, d3;

    printf("--------------------------------------\n");
    printf("Enter the details of the first driver \n");
    printf("Enter the NAME of the first driver : ");
    scanf("%s", &d1.name);
    printf("Enter the drving license number of the first driver : ");
    scanf("%s", &d1.dlno);
    printf("Enter the route of the first driver : ");
    scanf("%s", &d1.route);
    printf("Enter the kms of the first driver : ");
    scanf("%d", &d1.kms);

    printf("--------------------------------------\n");
    printf("Enter the details of the second driver \n");
    printf("Enter the NAME of the second driver : ");
    scanf("%s", &d2.name);
    printf("Enter the drving license number of the second driver : ");
    scanf("%s", &d2.dlno);
    printf("Enter the route of the second driver : ");
    scanf("%s", &d2.route);
    printf("Enter the kms of the second driver : ");
    scanf("%d", &d2.kms);

    printf("--------------------------------------\n");
    printf("Enter the details of the third driver \n");
    printf("Enter the NAME of the third driver : ");
    scanf("%s", &d3.name);
    printf("Enter the drving license number of the third driver : ");
    scanf("%s", &d3.dlno);
    printf("Enter the route of the third driver : ");
    scanf("%s", &d3.route);
    printf("Enter the kms of the third driver : ");
    scanf("%d", &d3.kms);

    printf("*******************************************\n");
    printf("printing the information of all the drivers\n");
    printf("FOR DRIVER NUMBER 01:\n Name is %s\n", d1.name);
    printf("Dl number is %s\n", d1.dlno);
    printf("route is %s\n", d1.route);
    printf("kms is %d\n\n\n", d1.kms);

    printf("FOR DRIVER NUMBER 02:\n Name is %s\n", d2.name);
    printf("Dl number is %s\n", d2.dlno);
    printf("route is %s\n", d2.route);
    printf("kms is %d\n\n\n", d2.kms);

    printf("FOR DRIVER NUMBER 03:\n Name is %s\n", d3.name);
    printf("Dl number is %s\n", d3.dlno);
    printf("route is %s\n", d3.route);
    printf("kms is %d\n", d3.kms);

    return 0;
}

/*
what happen when we have infinte number of drivers 
use while loop 
*/