#include <stdio.h>
#include <stdarg.h>

// Function to handle format flags
int handleFlags(va_list args)
{
    char *plusFlag = va_arg(args, char*);
    // Reset flags
    char *spaceFlag = va_arg(args, char*);
    char *hashFlag = va_arg(args, char*);
    int counter = 0;
    int i ;

    // Check for flags
          
    if (*plusFlag == '+') {
        counter += 1;
    } else if (*spaceFlag == ' ') {
        counter += 1;
    } else if(*hashFlag == '#') {
        counter += 1;
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
