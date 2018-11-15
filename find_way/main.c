/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ibot
 *
 * Created on 06. Oktober 2018, 16:40
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int main() {
    printf("Hello, I will show you the way out. :D \n ");
    int num;
    int opt;

    int select() {

        printf("Select your situation: \n");
        printf("1       I can go forward \n");
        printf("2       I can go left \n");
        printf("3       I can go right \n");
        printf("4       Yeahh I'm out !!\n");
        printf("Enter a integer\n");
        scanf("%d", &num);
        return num;
    }


    while (num != 4) {
        int num = select();
        switch (num) {
                //So you can go forward
            case 1:
                printf("Go 1 step forward \n");
                break;
                //So you can go left
            case 2:
                printf("Go 1 step left \n");
                break;
            case 3:
                printf("Go 1 step right \n");
                break;
            case 4:
                printf("Yeahh man you're out !! \n");
                return (EXIT_SUCCESS);
                break;
        }
    }
    return (EXIT_SUCCESS);
}

