#include <stdio.h>
#include <stdarg.h>

// Function to handle format flags
int handleFlags(const char *format, int i, int *plusFlag, int *spaceFlag, int *hashFlag) {
    // Reset flags
    *plusFlag = 0;
    *spaceFlag = 0;
    *hashFlag = 0; 
    int counter = 0;

    // Check for flags
    for (i = 0; format[i] != '\0'; ){
        printf("format[%d] = %c\n", i, format[i]);
        if (format[i] == '%') {
          
          if (format[i + 1] == '+') {
              *plusFlag += 1;
          } else if (format[i + 1] == ' ') {
              *spaceFlag += 1;
          } else if (format[i + 1] == '#') {
              *hashFlag += 1;
          }
          counter += 1;
        }

        i++;
    }
    return (counter);
}

// Example usage
int main() {
    const char *format = "#m%#% %#dh+% ";
    int plusFlag, spaceFlag, hashFlag;

    handleFlags(format, 0, &plusFlag, &spaceFlag, &hashFlag);

    printf("Plus Flag: %d\n", plusFlag);
    printf("Space Flag: %d\n", spaceFlag);
    printf("Hash Flag: %d\n", hashFlag);
    int p = handleFlags(format, 0, &plusFlag, &spaceFlag, &hashFlag);
    printf("p = %d\n", p);

    return 0;
}
