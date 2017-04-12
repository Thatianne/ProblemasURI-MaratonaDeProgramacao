/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Thati
 *
 * Created on 5 de Abril de 2017, 21:35
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int pessoas[10000], casos[30], ncasos, npessoas, nsaltos;
    int posAtual, s = 0;
    scanf("%d", &ncasos);

    for (int i = 0; i < ncasos; i++) {
        memset(pessoas, 1, 10000 * sizeof (int));
        scanf("%d  %d", &npessoas, &nsaltos);

        pessoas[nsaltos-1] = - 1;
        posAtual = nsaltos - 1;

        for (int j = 0; j < npessoas - 1; j++) {

            if (pessoas[posAtual] != -1) {
                s = s + 1;
                if(s == nsaltos){
                    pessoas[posAtual] = -1;
                    s = 0;
                }
            }
            posAtual = posAtual + 1;
        }
               
        for(int i=0; i<npessoas; i++){//imprimir vetor
            if(pessoas[i] != -1){
                printf("%d", i+1);
            }
        }
    }

    return (EXIT_SUCCESS);
}

