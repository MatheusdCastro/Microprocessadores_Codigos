// C program to Open a File,
// Read from it, And Close the File
#include <stdio.h>
#include <string.h>

int main()
{

    // Declare the file pointer
    FILE* filePointer;
    FILE* novo;

    // Declare the variable for the data to be read from
    // file
    char dataToBeRead[50];

    // Open the existing file GfgTest.c using fopen()
    // in read mode using "r" attribute
    filePointer = fopen("codigo.asm", "r");
    novo = fopen("condigo.bin", "w");

    // Check if this filePointer is null
    // which maybe if the file does not exist
    if (filePointer == NULL) {
        printf("Não foi.");
    }
    else {

        printf("The file is now opened.\n");

        // Read the dataToBeRead from the file
        // using fgets() method
        while (fscanf(filePointer, "%s", dataToBeRead)
               ==1) {

            if (strcmp(dataToBeRead,"ADD") == 0)
                {
                    fprintf(novo, "01\n");
                }
            else if (strcmp(dataToBeRead,"SUB") == 0)
                {
                    fprintf(novo, "10\n");
                }
            else{
                 fprintf(novo, "%s\n",&dataToBeRead);
            }
        }
       

        // Closing the file using fclose()
        fclose(filePointer);
        fclose(novo);

        printf(
            "Data successfully read from file GfgTest.c\n");
        printf("The file is now closed.");
    }
    return 0;
}