#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

//a C program that emulates the ls command in Linux
int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Invalid Number of arguments");
        return 0;
    }
    struct dirent *directory;
    DIR *folder = opendir(argv[1]);
    if (folder != NULL) {
        printf("Directory opened!");
        for (directory = readdir(folder); directory != NULL; directory = readdir(folder)) {
            printf("%s\n",directory->d_name);
        }
    } else {
        printf("Cannot open directory");
    }
    closedir(folder);
    return 0;
}
