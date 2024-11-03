#include <stdio.h>
#include <ctype.h>

void toggleCase(char string[], int size) {
    for (int i = 0; i < size; i++) {
        if (islower(string[i])) {
            string[i] = toupper(string[i]);
        } else if (isupper(string[i])) {
            string[i] = tolower(string[i]);
        }
    }
}

int main() {
    char input_string[101];
    //printf("Enter a string: ");
    fgets(input_string, 101, stdin);
    
    int size = 0;
    while (input_string[size] != '\0' && input_string[size] != '\n') {
        size++;
    }

    // Call the function to toggle case
    toggleCase(input_string, size);
    
    // Print the modified string
    printf("%s", input_string);
    
    return 0;
}
