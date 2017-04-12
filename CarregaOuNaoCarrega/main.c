/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Thati
 *
 * Created on 5 de Abril de 2017, 20:27
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    unsigned long int num1, num2, num1n, num2n;
    unsigned long int p1, p2, p3;

    while (scanf("%lu %lu", &num1, &num2) == 2) {
        
        num1n = ~num1;
        num2n = ~num2;

        p1 = num1n & num2;

        p2 = num1 & num2n;

        p3 = p1 | p2;

        printf("%lu\n", p3);
    }
    return (EXIT_SUCCESS);
}

