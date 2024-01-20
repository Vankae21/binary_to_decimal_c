#include "include/char_ver.h"

char* hexa_to_binary(char c)
{
    switch(c)
    {
        case '0':
            return "0000";
        case '1':
            return "0001";
        case '2':
            return "0010";
        case '3':
            return "0011";
        case '4':
            return "0100";
        case '5':
            return "0101";
        case '6':
            return "0110";
        case '7':
            return "0111";
        case '8':
            return "1000";
        case '9':
            return "1001";
        case 'a':
            return "1010";
        case 'A':
            return "1010";
        case 'b':
            return "1011";
        case 'B':
            return "1011";
        case 'c':
            return "1100";
        case 'C':
            return "1100";
        case 'd':
            return "1101";
        case 'D':
            return "1101";
        case 'e':
            return "1110";
        case 'E':
            return "1110";
        case 'f':
            return "1111";
        case 'F':
            return "1111";
        default:
            return "eror";
    }
}

char* hexa_to_binary_full(const char* hexa)
{
    char* binary = calloc(strlen(hexa) * 4 + 1, sizeof(char));

    for(int i = 0; i < strlen(hexa); i++)
    {
        strcat(binary, hexa_to_binary(hexa[i]));
    }

    return binary;
}