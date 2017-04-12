/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Thati
 *
 * Created on 22 de Março de 2017, 21:17
 */

#include <stdio.h>
/*
 * 
 */
int main(int argc, char** argv) {

    int a, b;
    while(scanf("%d %d", &a, &b)==2){
        printf("SOMA = %d", a+b);
    }
    
    return (0);
}

