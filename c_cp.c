#include <stdio.h>

//A C program that emulates the cp command in Linux

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Invalid Number of arguments"); /* check to make sure the program only has two arguments*/
        return 0;
    } 
    else 
    {
        FILE *fptr = fopen(argv[1], "r"); // getting the file opened
        if (fptr != NULL) {
            FILE *newFile = fopen("copied_doc.txt", "a+");
            char content[10000];
            while (fgets(content, 10000, fptr)) {
                fputs(content, newFile);
            }
            fclose(fptr);
            fclose(newFile);
        } else {
            printf("Cannot open document");
            return 0;
        }
    }

    return 0;
}
