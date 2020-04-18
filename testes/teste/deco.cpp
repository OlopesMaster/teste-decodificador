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
char menu[1],ascii[500];



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


void decAsc(){

}


void codBi(){
    





}
void decBi(){

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

        //opcao 1
        if ((opcao == 1) && (strcmp(menu,"s")==0))
        {
            while (lecod!=7)
            {
                system("cls");

                printf("selecione a linguagem desejada para codificar:\n\n");
                printf("0-contador de caractes(limite de 500 ca sem esapaços) \n1-Binario\n2-Hexa-Decimal\n3-Cesar\n4-Ascii\n5-Morse \n6-Base64\n7-Voltar Menu\n8-encerrar programa\nInsira:");
                scanf("%d",&lecod);
                if (lecod==1)
                {
                    system("cls");
                    printf("Insira:");
                    getch();
                }else if(lecod==2){
                    system("cls");
                    printf("Insira:");
                    getch();
                }else if (lecod==3){
                    system("cls");
                    printf("Insira:");
                    getch();
                }else if (lecod==4){
                    fflush(stdin);
                    system("cls");
                    printf("Insira:");
                    scanf("%[^\n]s",ascii);
                    setbuf(stdin, NULL);
                    codAsc();
                    getch();

                }else if(lecod==5){
                    system("cls");
                    printf("Insira:");
                    getch();
                }else if(lecod==6){
                    system("cls");
                    printf("Insira:");
                    getch();
                }else if(lecod==7){
                opcao=0;
                }else if(lecod==8){
                    opcao=0;
                    strcpy(menu,"n");
                    lecod = 7;
                }else if(lecod==0){
                    system("cls");
                    printf("Insira:");
                    getch();
                }
                if((lecod<=7) && (opcao==1)){
                    printf("\n1-codificar novamente\n2-voltar ao menu?\nInsira:");
                    scanf("%d",&opcao);
                    if (opcao==2){
                        opcao = 0;
                        lecod = 7;
                    }    
                }
            }
        }
    

        if ((opcao == 2) && (strcmp(menu,"s")==0))
        {
            while (decod!=7)
            {
                system("cls");

                printf("selecione a linguagem desejada para decodificar:\n\n");
                printf("1-Binario\n2-Hexa-Decimal\n3-Cesar\n4-Ascii\n5-Morse\n6-Base64\n7-Voltar Menu\n8-encerrar programa\nInsira:");
                scanf("%d",&decod);
                if (lecod==1)
                {
                    system("cls");
                    printf("Insira:");
                    getch();
                }else if(decod==2){
                    system("cls");
                    printf("Insira:");
                    getch();
                }else if (decod==3){
                    system("cls");
                    printf("Insira:");
                    getch();
                }else if (decod==4){
                    system("cls");
                    printf("Insira:");
                    getch();
                }else if(decod==5){
                    system("cls");
                    printf("Insira:");
                    getch();
                }else if(decod==6){
                    system("cls");
                    printf("Insira:");
                    getch();
                }else if(decod==7){
                opcao=0;
                }else if(decod==8){
                    opcao=0;
                    strcpy(menu,"n");
                    decod=7;
                }
                if((decod<=7)&&(opcao==2)){
                    printf("\n1-decodificar novamente\n2-voltar ao menu?\nInsira:");
                    scanf("%d",&opcao);
                    if (opcao==2){
                        opcao = 0;
                        decod = 7;
                    }    
                }
            }
        }
    }
      //termino do programa
    printf("\nobrigado por utilizar meu programa\nass. L Olopes");
    return 0;
}
