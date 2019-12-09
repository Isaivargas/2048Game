//  main.c
//  2048
//
//  Created by Isai vargas on 11/19/16.
//  Copyright © 2016 Isaí Vargas. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    
    int M[4][4]={0};
    int x=0,y=0,f=0,k=0,r;
    int n[100000],t=8,c=1024;
    char l,op=0;
    int v=0;
    int p,cont=0;
    srand(time(NULL));
    do
    {
        f=1;
        printf("Bienvenido al nivel %d\n\n",f);
        printf("introduce hacia donde te deseas mover\n \t\t w-arriba \n a-izquierda \t\t\td-derecha\n\t\t s-abajo\n");
        t=8;
       
        r=rand()%5+1;
        switch (r) {
            case 1:for(x=0; x<5; x++)
            {
                for(y=0; y<4; y++)
                {
                    M[x][y]=0;}}
                M[0][0]=2;
                M[0][1]=0;
                M[0][2]=0;
                M[0][3]=2;
                M[1][0]=0;
                M[1][1]=4;
                M[1][2]=0;
                M[1][3]=8;
                M[2][0]=0;
                M[2][1]=4;
                M[2][2]=0;
                M[2][3]=0;
                M[3][0]=8;
                M[3][1]=0;
                M[3][2]=0;
                M[3][3]=2;
                break;

        case 2:
                for(x=0; x<5; x++)
                {
                for(y=0; y<4; y++)
                {
                M[x][y]=0;}}
                M[0][0]=32;
                M[0][1]=32;
                M[0][2]=64;
                M[0][3]=4;
                M[1][0]=128;
                M[1][1]=2;
                M[1][2]=128;
                M[1][3]=8;
                M[2][0]=128;
                M[2][1]=2;
                M[2][2]=256;
                M[2][3]=16;
                M[3][0]=256;
                M[3][1]=512;
                M[3][2]=512;
                M[3][3]=2;
                break;
        case 3:
                for(x=0; x<5; x++)
                {
                    for(y=0; y<4; y++)
                    {
                        M[x][y]=0;
                    }
                }
                M[0][0]=512;
                M[0][1]=16;
                M[0][2]=32;
                M[0][3]=256;
                M[1][0]=0;
                M[1][1]=16;
                M[1][2]=32;
                M[1][3]=4;
                M[2][0]=1024;
                M[2][1]=16;
                M[2][2]=128;
                M[2][3]=4;
                M[3][0]=8;
                M[3][1]=8;
                M[3][2]=2;
                M[3][3]=2;

                break;
                
        case 4:
                for(x=0; x<5; x++)
            {
                for(y=0; y<4; y++)
                {
                    M[x][y]=0;}}
                M[0][0]=4;
                M[0][1]=4;
                M[0][2]=6;
                M[0][3]=2;
                M[1][0]=0;
                M[1][1]=8;
                M[1][2]=0;
                M[1][3]=4;
                M[2][0]=0;
                M[2][1]=6;
                M[2][2]=0;
                M[2][3]=2;
                M[3][0]=4;
                M[3][1]=0;
                M[3][2]=0;
                M[3][3]=4;
                break;
    case 5:  for(x=0; x<5; x++)
            {
                for(y=0; y<4; y++)
                {
                    M[x][y]=0;}}
                M[0][0]=0;
                M[0][1]=2;
                M[0][2]=0;
                M[0][3]=2;
                M[1][0]=0;
                M[1][1]=0;
                M[1][2]=0;
                M[1][3]=0;
                M[2][0]=2;
                M[2][1]=0;
                M[2][2]=0;
                M[2][3]=2;
                M[3][0]=0;
                M[3][1]=2;
                M[3][2]=0;
                M[3][3]=0;

                break;
        }
               system("color A");
        printf("Introduce 'y' si deseas empezar \n");
        scanf("%c",&l);
        if (l=='y'){
            printf("\t");
            
            for(y=1;  y<5; y++){printf("%dc\t",y);}//columnas 1-4c
            printf("\n");
            for(y=0;  y<4; y++){
                printf ("%dr\t",y+1);//renglones1-4r
                {for(x=0;  x<4; x++){
                    printf("|");
                    printf("%5d|\t",M[x][y]);}}
                printf("\n");} // Mtriz inicial
            printf("\n");
            do{
                n[10000]=0;
                scanf("%c",&op);
                switch(op){
                    case 'w': // arriba
                        printf("\t");
                        for(x=0; x<5; x++){
                            for(y=0; y<4; y++){
                                if (M[x][y]==M[x][y+1]){
                                    M[x][y]=M[x][y]+M[x][y+1];
                                    M[x][y+1]=0;
                                }else if (M[x][y]==M[x][y+2]){
                                    M[x][y]=M[x][y]+M[x][y+2];
                                    M[x][y+2]=0;}
                                else if (M[x][y]==M[x][y+2]){
                                    M[x][y]=M[x][y]+M[x][y+2];
                                    M[x][y+2]=0;}
                            }}
                        //impresion
                        printf(" ");
                        for(y=1;  y<5; y++)
                        //columnas 1-4c
                        printf("\n");
                        for(y=0;  y<4; y++)
                        {
                            //renglones1-4r
                            {
                                for(x=0;  x<4; x++)
                                {
                                    printf("|");
                                    printf("%5d",M[x][y]);
                                    printf("   |");
                                }
                            }
                            printf("\n");
                        }
                        printf("\n");
                        break;
                        
                    case 's': // abajo
                        for(x=0; x<5; x++){
                            for(y=0; y<4; y++){
                               if (M[x][y]==M[x][y+1]){
                                    M[x][y+1]=M[x][y]+M[x][y+1];
                                   n[k]=M[x][y+1];
                                    M[x][y]=0;
                                }
                                else if (M[x][y+1]==0){
                                    if(M[x][y]==M[x][y+2]){
                                        M[x][y+2]=M[x][y]+M[x][y+2];
                                        n[k]=M[x][y+2];
                                        M[x][y]=0;}}
                                else if(M[x][y+2]==0){
                                    if(M[x][y]==M[x][y+3]){
                                        M[x][y]=M[x][y]+M[x][y+3];
                                       n[k]=M[x][y+3];
                                        M[x][y]=0;}
                                }}}
                        // impresion
                        printf(" ");
                        for(y=1;  y<5; y++)//columnas 1-4c
                        printf("\n");
                        for(y=0;  y<4; y++){
                           //renglones1-4r
                            {for(x=0;  x<4; x++){
                                printf("|");
                                printf("%5d",M[x][y]);
                                printf("    |");}}
                            printf("\n");}
                        printf("\n");
                        break;
                    case 'a': // izquierda
                        for(x=0; x<5; x++){
                            for(y=0; y<4; y++){
                                if (M[x][y]==M[x][y+4]){
                                    M[x][y]=M[x][y]+M[x][y+4];
                                    n[k]=M[x][y];
                                    M[x][y+4]=0;
                                } else if (M[x][y+4]==0){
                                    if(M[x][y]==M[x][y+8]){
                                        M[x][y]=M[x][y]+M[x][y+8];
                                       n[k]=M[x][y];
                                        M[x][y+8]=0;}}}}
                        //impresion
                        printf(" ");
                        for(y=1;  y<5; y++)//columnas 1-4c
                        printf("\n");
                        for(y=0;  y<4; y++){
                            //renglones1-4r
                            {for(x=0;  x<4; x++){
                                printf("| ");
                                printf("%5d",M[x][y]);
                                printf("    |");}}
                            printf("\n");}
                        printf("\n");
                        break;
                    case 'd': // Derecha
                        for(x=0; x<5; x++){
                            for(y=0; y<4; y++){
                                if (M[x][y]==M[x][y+4]){
                                    M[x][y+4]=M[x][y]+M[x][y+4];
                                    n[k]=M[x][y+4];
                                    M[x][y]=0;
                                }else if (M[x][y+4]==0){
                                    if(M[x][y]==M[x][y+8]){
                                        M[x][y+8]=M[x][y]+M[x][y+8];
                                        n[k]=M[x][y+8];
                                        M[x][y]=0;}}}}
                         printf("n = %d",n[k]);
                        // impresion
                        printf(" ");
                        for(y=1;  y<5; y++)//columnas 1-4c
                        printf("\n");
                        for(y=0;  y<4; y++){
                            //renglones1-4r
                            {for(x=0;  x<4; x++){
                                printf("|");
                                printf("%5d",M[x][y]);
                                printf("    |");}}
                            printf("\n");
                        }
                        printf("\n");
                       
                        break;
                        
                }
            }while(n[k]!=2048);//menu
        }
        else
        {
            printf("Hasta luego...\n");
        }
        
        printf("Subes de nivel\n");
        c=c/2;
        f=f+1;
    }while(f<=10);
    printf("GANASTE!");
    
    // getchar();
    // system("cls");
}//fin main