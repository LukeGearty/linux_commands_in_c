#include <stdio.h>
#include <stdlib.h>

//a C program that emulates the cat command in Linux
int main(int argc, char **argv) {

    FILE *fptr = fopen(argv[1], "r"); // "r" for read

    if (fptr != NULL) {
        char content[1000];

        while (fgets(content, 1000, fptr)) {
            printf("%s", content);
    }

        fclose(fptr);

    
    } else {
        printf("Not a file");
        exit(0);
    }
    return 0;
}
