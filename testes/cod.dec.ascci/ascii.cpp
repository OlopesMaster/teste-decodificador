#include <stdio.h>
#include <iostream>
#include <string.h>

int i;
char b[500];

void tranforma(){
    for ( i = 0; i < 500; i++)
    {
 
        if (b[i] == NULL)
        {
            break;
        }
        if(b[i]<100){
            printf("0");
        }
        
        printf("%d ",b[i]);    
        
    
        
    }
    

}

main ()

{
    scanf("%[^\n]s", b);
    setbuf(stdin, NULL);
    tranforma();
    return 0;
}
