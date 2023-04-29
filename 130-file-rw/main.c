#include <libgen.h>
#include <stdio.h>

int main(int argc, char const* argv[]) {
    // Get the directory path of the current file
    char* dir_path = dirname(__FILE__);

    printf("Current directory path: %s\n", dir_path);

    // Create a path to a file in current directory
    char path[100];
    sprintf(path, "%s/test.txt", dir_path);

    FILE* file = fopen(path, "w");

    // Write to file
    fprintf(file, "Salve 123\n");

    // Write again
    fprintf(file, "Salve 456\n");

    // Close file
    fclose(file);

    // Open the file again and read it
    file = fopen(path, "r");

    char line[100];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}
