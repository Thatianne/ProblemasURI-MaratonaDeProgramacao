/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   diferenca.c
 * Author: Thati
 *
 * Created on 22 de Março de 2017, 21:48
 */

#include <stdio.h>
/*
 * 
 */
int main(int argc, char** argv) {

    int a, b, c, d, r;
    
    while(scanf("%d %d %d %d", &a, &b, &c, &d) == 4){
        
        r = (a*b)-(c*d);
        
        printf("DIFERENCA = %d\n", r);
    }
    
    return (0);
}

