/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ibot
 *
 * Created on 01. Oktober 2018, 17:54
 */

//
//  main.c
//  converter
//
//  Created by Murat Durgut on 03.10.18.
//  Copyright © 2018 FHV IT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, remainder, n/2);
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}

int main()
{

    int i;
    printf("Enter 1 for binary or 2 for decimal number: ");
    scanf("%d", &i);

    if(i==1){
        long long n;
        printf("Enter a binary number: ");
        scanf("%lld", &n);
        printf("%lld in binary = %d in decimal", n, convertBinaryToDecimal(n));
        printf("\n");
        return 0;
    }
    if(i==2){
        int n;
        printf("Enter a decimal number: ");
        scanf("%d", &n);
        printf("%d in decimal = %lld in binary", n, convertDecimalToBinary(n));
        printf("\n");
        printf("\n");
        return 0;
    }
}
