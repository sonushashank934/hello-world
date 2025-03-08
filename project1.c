#include <stdio.h>
#include <stdlib.h>

// Function to write data to a file
void write_to_file(const char *filename, const char *content) {
    FILE *file = fopen(filename, "w");  // Open file in write mode

    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }

    // Write content to the file
    fprintf(file, "%s", content);

    // Close the file
    fclose(file);
    printf("Data successfully written to %s\n", filename);
}

int main() {
    const char *filename = "example.txt";   // The file you want to write to
    const char *content_to_write = "Hello, this is a test content in C!";  // Content to write

    // Write to the file
    write_to_file(filename, content_to_write);

    return 0;
}

