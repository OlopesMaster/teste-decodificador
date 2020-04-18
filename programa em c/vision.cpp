#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <ctype.h> 
#include <math.h>
#include <iostream>

int opcao,lecod,decod,execucao,controle,cont;
//float;
char menu[1],ascii[500],decoAscii[3],bits[9], c;


//usado para o binario
#define getbit(by, pos)  ((by >> pos)&0x1)

//funcionando
void codAsc(){
    for ( cont = 0; cont < 500; cont++)
    {
 

        if (ascii[cont] == NULL)
        {
            break;
        }
        if(ascii[cont]<100){
            printf("0");
        }
        
        printf("%d ",ascii[cont]);    
        
    }
    

}


//funcionando
void decAsc(){

int con,traAscii;
con = 0;
  
    for(cont=0;cont<=499;cont++){
        decoAscii[con] = ascii[cont];
        con++;
        if(con>2){
            traAscii=atoi(decoAscii);
            printf("%c",traAscii);
            con=0;
        }     
    }

}

//funcionando somente com um caracter 
void codBi(char c, char* s){
    
/*int i = 7;
    while(i >= 0)
        *s++ = '0' + getbit(c, i--);
    *s = 0;*/

}



void decBi(){
//vou ter que fazer sozinho
}
void codHex(){

}
void decHex(){

}
void codCes(){

}
void decCes(){

}

void codMor(){

}
void decMor(){

}
void codBas(){

}
void decBas(){

}
void automati(){

}
main()
{
    while(controle==0){
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    printf("deseja iniciar o programa?\ns-Sim\nn-Nao\nInsira:");
    scanf("%s",&menu);
    if(strcmp(menu,"s")==0){
        controle = 1;
    }
    if(strcmp(menu,"n")==0){
        controle = 1;
    }
   }
    while (strcmp(menu,"s")==0)
    {
        //menu principal
        system("cls");
        printf("Programa De Codificaçao/Decodificaçao \n\n");
        printf("selecione alguma das opçoes abaixo:\n");
        printf("1-Codificar\n2-Decodificar\nInsira:");
        scanf("%d",&opcao);
        strcpy(menu,"s");
        lecod = 0;
        decod = 0;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        //opcao 1
        if ((opcao == 1) && (strcmp(menu,"s")==0))
        {
            while (lecod!=7)
            {
                system("cls");
                printf("selecione a linguagem desejada para codificar:\n\n");
                printf("0-contador de caractes(limite de 500 ca sem esapaços) \n1-Binario\n2-Hexa-Decimal\n3-Cesar\n4-Ascii\n5-Morse \n6-Base64\n7-Voltar Menu\n8-encerrar programa\nInsira:");
                scanf("%d",&lecod);
                switch(lecod)
                {
                    case 1:
                    /* fputs("Inisira um caractere\n", stdout);
                        scanf("%c%*c", &c);
                        codBi(c, bits);
                        fprintf(stdout, "No sistema binario %s\n", bits);*/
                        getch();
                        break;
                    case 2:
                        system("cls");
                        printf("Insira:");
                        getch();
                        break;
                    case 3:
                        system("cls");
                        printf("Insira:");
                        getch();
                        break;
                    case 4:
                        fflush(stdin);
                        system("cls");
                        printf("Insira:\n");
                        scanf("%[^\n]s",ascii);
                        setbuf(stdin, NULL);
                        codAsc();
                        getch();
                        break;
                    case 5:
                        system("cls");
                        printf("Insira:");
                        getch();
                        break;
                    case 6:
                        system("cls");
                        printf("Insira:");
                        getch();
                        break;
                    case 7:
                        opcao=0;
                        break;
                    case 8:
                        opcao=0;
                        strcpy(menu,"n");
                        lecod = 7;
                        break;
                    case 0:
                        system("cls");
                        printf("Insira:");
                        getch();
                        break;
                }
                if((lecod<=7) && (opcao==1)){
                    printf("\n1-codificar novamente\n2-voltar ao menu?\nInsira:");
                    scanf("%d",&opcao);
                    if (opcao==2){
                        opcao = 0;
                        lecod = 7;
                    }    
                }
                //////////////////
            }
        }
    

        else if ((opcao == 2) && (strcmp(menu,"s")==0))
        {
            while (decod!=7)
            {
                system("cls");

                printf("selecione a linguagem desejada para decodificar:\n\n");
                printf("1-Binario\n2-Hexa-Decimal\n3-Cesar\n4-Ascii\n5-Morse\n6-Base64\n7-Voltar Menu\n8-encerrar programa\nInsira:");
                scanf("%d",&decod);
                ////////////////////////
                switch (decod)
                {
                    case 1:
                        system("cls");
                        printf("Insira:");
                        getch();
                        break;
                    case 2:
                        system("cls");
                        printf("Insira:");
                        getch();
                        break;
                    case 3:
                        system("cls");
                        printf("Insira:");
                        getch();
                        break;
                    case 4:
                        fflush(stdin);
                        system("cls");
                        printf("Insira:\n");
                        scanf("%[^\n]s", ascii);
                        setbuf(stdin, NULL);
                        decAsc();
                        getch();
                        break;
                    case 5:
                        system("cls");
                        printf("Insira:");
                        getch();
                        break;
                    case 6:
                        system("cls");
                        printf("Insira:");
                        getch();
                        break;
                    case 7:
                        opcao=0;
                        break;
                    case 8:
                        opcao=0;
                        strcpy(menu,"n");
                        decod=7;
                        break;
                }
                if((decod<=7)&&(opcao==2)){
                    printf("\n1-decodificar novamente\n2-voltar ao menu?\nInsira:");
                    scanf("%d",&opcao);
                    if (opcao==2){
                        opcao = 0;
                        decod = 7;
                    }    
                }
                //////////////////////////
            }
        }
    }
      //termino do programa
    printf("\nobrigado por utilizar meu programa\nass. L Olopes");
    return 0;
}
