#include <stdio.h>
#include <stdlib.h>

void main() {
    int n = 5;
    char *str = "hello world";

    printf("Original string: %s\n", str);
    printf("Length of the string: %d\n", strlen(str));
    
    // Copying a string into a character array
    char *cp = (char *)malloc(n * sizeof(char));
    if (cp == NULL) {
        perror("Memory allocation failed");
        return;
    }
    strcpy(cp, str);
    printf("Copied string: %s\n", cp);

    free(cp);  // Don't forget to free the allocated memory
}
