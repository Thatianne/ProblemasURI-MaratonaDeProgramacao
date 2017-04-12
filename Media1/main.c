/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Thati
 *
 * Created on 22 de Março de 2017, 21:27
 */

#include <stdio.h>
/*
 * Média Ponderada 
 * v1 e v2, p1, p2 (valor e peso)
 * m = (v1*p1 + v2*p2)/p1 + p2
 */
int main(int argc, char** argv) {

    double n1, n2, media;
    double p1 = 3.5, p2 = 7.5;
    
    while(scanf("%lf %lf", &n1, &n2) == 2){
        media = ((n1*p1) + (n2*p2))/(p1 +p2);
        printf("MEDIA = %.5lf\n", media);
    }
    return (0);
}

