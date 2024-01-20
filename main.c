#include <stdio.h>
#include "include/char_ver.h"
#include "include/int_ver.h"
#include "windows.h"

int main()
{
    char input[32];

    scanf("%s", input);

    printf("hexa to binary: %d", convert_hexa_to_binary(input));
    return 0;
}