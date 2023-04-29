#include <stdio.h>
#include <string.h>

void reverse(char s[]) {
    int hi = strlen(s) - 1;
    int lo = 0;
    char tmp;

    while (lo < hi) {
        tmp = s[lo];
        s[lo] = s[hi];
        s[hi] = tmp;
        hi--;
        lo++;
    }
}

int main() {
    char s[7] = "Mateus";
    reverse(s);
    printf("%s\n", s);
    return 0;
}
