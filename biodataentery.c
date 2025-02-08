#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i = 0;
    FILE *fp = fopen("family_data.csv", "w");  // Create a CSV file

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Name,Age\n");  // CSV Header

    printf("How many members in your family: ");
    scanf("%d", &n);    

    while (i < n) {
        int chars;
        char *name;
        int age;

        printf("FAMILY MEMBER NO %d:\n", i + 1);
        // printf("Enter the number of characters in your NAME: ");
        // scanf("%d", &chars);

        name = (char *)malloc((chars + 1) * sizeof(char));  // Allocate memory for name

        printf("ENTER YOUR NAME: ");
        scanf("%s", name);

        printf("ENTER YOUR AGE: ");
        scanf("%d", &age);

        fprintf(fp, "%s,%d\n", name, age);  // Write data to CSV file

        free(name);
        i++;
    }

    fclose(fp);  // Close the file

    printf("Family data saved successfully in 'family_data.csv'.\n");

    return 0;
}
