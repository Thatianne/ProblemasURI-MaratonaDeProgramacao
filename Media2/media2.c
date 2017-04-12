/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   media2.c
 * Author: Thati
 *
 * Created on 22 de Março de 2017, 21:40
 */

#include <stdio.h>
/*
 * 
 */
int main(int argc, char** argv) {

    double a, b, c, media;
    double pa =2, pb = 3, pc = 5;
    
    while(scanf("%lf %lf %lf", &a, &b, &c) == 3){
        media = ((a*pa)+(b*pb)+(c*pc))/(pa+pb+pc);
        printf("MEDIA = %.1lf\n", media);
    }    
    return (0);
}

