/*
funcionando somente com um caracter
#include <stdio.h>

#define getbit(by, pos)  ((by >> pos)&0x1)

void byte2bits(char c, char* s)
{
    int i = 7;
    while(i >= 0)
        *s++ = '0' + getbit(c, i--);
    *s = 0;
}

int main(int argc, char* argv[])
{
    char bits[9], c;
    
    fputs("Inisira um caractere\n", stdout);
    scanf("%c%*c", &c);
    byte2bits(c, bits);
    fprintf(stdout, "No sistema binario %s\n", bits);
    return 0;
}*/
