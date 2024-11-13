#include <stdio.h>
#include <string.h>

int getLineLength() {
    char line[1000];  // Array to hold the line of text

    printf("Enter a line of text: ");
    if (fgets(line, sizeof(line), stdin) != NULL) {  // Read line from standard input
        int length = strlen(line);

        // If the newline character is included, subtract it from the length
        if (line[length - 1] == '\n') {
            length--;
        }

        return length;
    }
    
    return 0;  // Return 0 if no input is read
}

int main() {
    int length = getLineLength();
    printf("The length of the line is: %d\n", length);

return 0;
}