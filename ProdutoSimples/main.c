/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Thati
 *
 * Created on 22 de Março de 2017, 21:20
 */

#include <stdio.h>
/*
 * 
 */
int main(int argc, char** argv) {

    int v1, v2, prod;
    
    while(scanf("%d %d", &v1, &v2)==2){
        prod = v1*v2;
        printf("PROD = %d\n", prod);
    }
    return (0);
}

