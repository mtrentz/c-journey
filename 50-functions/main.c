#include <stdio.h>
#include <string.h>

char* saySalve() { return "Salve salve!\n"; }

char* sayGreet(char* name) {
    char greet[100] = "Hello, ";
    strcat(greet, name);
    strcat(greet, "! How are you!?\n");
    return strdup(greet);
}

int main() {
    char* s = saySalve();
    printf("%s\n", s);

    char* greet = sayGreet("Mateus");
    printf("%s\n", greet);

    return 0;
}