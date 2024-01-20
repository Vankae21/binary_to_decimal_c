#include "include/int_ver.h"

int convert_hexa_to_decimal(const char* hexa)
{
    int len = strlen(hexa);
    int decimal = 0;
    int decimal_value;
    int pos = 0;
    for(int i = len - 1; i >= 0; i--)
    {
        if(hexa[i] >= '0' && hexa[i] <= '9')
        {
            decimal_value = (hexa[i] - '0');
        }
        else if(hexa[i] >= 'A' && hexa[i] <= 'F')
        {
            decimal_value = (hexa[i] - 'A' + 10);
        }
        else if(hexa[i] >= 'a' && hexa[i] <= 'f')
        {
            decimal_value = (hexa[i] - 'a' + 10);
        }
        else
        {
            printf("error character: %c", hexa[i]);
            exit(1);
        }
        decimal += decimal_value * pow(16, pos);
        pos++;
    }

    return decimal;
}

int convert_decimal_to_binary(int decimal)
{
    int binary = 0;
    int multiplier = 1;
    while(decimal != 0)
    {
        binary += (decimal % 2) * multiplier;
        decimal /= 2;
        multiplier *= 10;
    }
    return binary;
}

int convert_hexa_to_binary(const char* hexa)
{
    return convert_decimal_to_binary(convert_hexa_to_decimal(hexa));
}