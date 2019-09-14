#include <stdio.h>
#include <stdlib.h>

/*
 * This is a simple program to encrypt and decrypt text files. 
 */

main()
{
    FILE *file;
    char fileName[100];
    int n;

    // Get file name
    // printf("Enter the file name: ");
    // scanf("%s", fileName);
    // printf("The file name is: %s \n", fileName);

    // Open the file
    file = fopen("test.txt", "r");

    while (!feof(file))
    {
        char str[100];
        fscanf(file, "%s", str);
        printf("%s\n", str);
    }

    return 0;
}