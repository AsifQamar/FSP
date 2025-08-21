#include <stdio.h>  

int main() {
    // Open file "name.txt" in write+read mode ("w+")
    // "w+" creates the file if it doesn't exist, 
    // and clears its content if it already exists.
    FILE *f = fopen("name.txt", "w+");
    if (f == NULL) {   // Check if file opening failed
        printf("Error opening file!\n");
        return 1;      // Exit program with error code
    }

    // Write a string into the file
    fprintf(f, "AB123456789");

    // Move file pointer back to the beginning so we can read from the start
    rewind(f);

    char ch;
    // Read characters one by one until End Of File (EOF) is reached
    while ((ch = fgetc(f)) != EOF) {
        printf("%c", ch);   // Print each character to console
    }

    // Close the file to free resources
    fclose(f);

    return 0;   // Successful program termination
}
