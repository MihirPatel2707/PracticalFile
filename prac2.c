#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    // Ask the user for input
    printf("Enter a string: ");
    gets(str);  // Note: unsafe but commonly used for beginner examples

    // Loop through the string
    for (i = 0; str[i] != '\0'; i++) {
        // Check if character is uppercase or lowercase and toggle it
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }

    // Output the toggled string
    printf("Toggled string: %s\n", str);

    return 0;
}
