#include <stdio.h>
#include <string.h>

// Prototypes
int myLen(char* s);
void sepCsv(char* s);

int main() {
    char name[] = "Mateus";

    // Copy Andre to name
    strcpy(name, "Andre");

    // Concat eeee to name
    strcat(name, "eeee");

    int l = myLen(name);

    printf("The length of %s is %d\n", name, l);

    char csv[] = "Mateus,Andre,Joao";
    sepCsv(csv);

    return 0;
}

// Function that gives the length of string
int myLen(char* s) { return strlen(s); }

void sepCsv(char* s) {
    char* token = strtok(s, ",");

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ",");
    }
}