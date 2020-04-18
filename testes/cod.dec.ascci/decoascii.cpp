#include <stdio.h>
#include <iostream>
#include <string.h>

//char texto;

int cont,con,a,x;
char var[500],passa[3];
main ()

{   
    con=0;
    scanf("%[^\n]s", var);
    setbuf(stdin, NULL);
    for(cont=0;cont<=499;cont++){
        passa[con] = var[cont];
        con++;
        if(con>2){
            a=atoi(passa);
            printf("%c",a);
            con=0;
        }     
    }
    return 0;
}
