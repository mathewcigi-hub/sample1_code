#include <stdio.h>
#include <string.h>

void reverseString(char *s)
{
    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++; j--;
    }
}

int main() {
    char s[100];
    scanf("%s", s);
    reverseString(s);
    printf("%s\n", s);
    return 0;
}
