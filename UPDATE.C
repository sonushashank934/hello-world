#include <stdio.h>

int main() {
    // Open file in read and write mode
    FILE *file = fopen("example.txt", "r+");

    if (file == NULL) {
        // Error opening file
        printf("Error opening file for reading and writing.\n");
        return 1;
    }

    // Move the file pointer to the beginning of the file
    fseek(file, 0, SEEK_SET);

    // Write content to the file using fputs
    fputs("This is new content written with fputs.\n", file);

    // Close the file after writing
    fclose(file);

    printf("Data successfully written to example.txt\n");

    return 0;
}
