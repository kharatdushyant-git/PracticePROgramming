/*

Q141) Write a PROgram which display ASCII table . Table contains symbol, Decimal,hexadecimal and octal 
     representation of every member from 0 to 255 

     code is from chatgpt
*/

#include <stdio.h>

int main()
{
    char *control[] =
    {
        "NUL","SOH","STX","ETX","EOT","ENQ","ACK","BEL",
        "BS","HT","LF","VT","FF","CR","SO","SI",
        "DLE","DC1","DC2","DC3","DC4","NAK","SYN","ETB",
        "CAN","EM","SUB","ESC","FS","GS","RS","US"
    };

    int i;

    printf("-----------------------------------------------------------\n");
    printf("%-10s %-10s %-10s %-10s\n",
           "SYMBOL", "DECIMAL", "HEX", "OCTAL");
    printf("-----------------------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        if(i < 32)
        {
            printf("%-10s %-10d %-10X %-10o\n",
                   control[i], i, i, i);
        }
        else if(i == 32)
        {
            printf("%-10s %-10d %-10X %-10o\n",
                   "SPACE", i, i, i);
        }
        else if(i == 127)
        {
            printf("%-10s %-10d %-10X %-10o\n",
                   "DEL", i, i, i);
        }
        else if(i >= 33 && i <= 126)
        {
            printf("%-10c %-10d %-10X %-10o\n",
                   i, i, i, i);
        }
        else
        {
            printf("EXT-%-6d %-10d %-10X %-10o\n",
                   i, i, i, i);
        }
    }

    printf("-----------------------------------------------------------\n");

    return 0;
}