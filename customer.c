/*
 * customer.c
 * Project 4
 * CSC 341: Operating Systems
 * Dr. Bin Tang
 *
 * Matt Levan
 * Brad Taniguchi
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <pthread.h>
#include "headers.h"

/*Local file declarations below*/
int myRand(int x);
void use_resources(int n);

/*Primary Customer function, used to hold the logic and variables that pertain to
 * each thread. No classes in C but this will do.*/
void *Customer(void *customer_args_ptr) {
    int res_a, res_b, res_c, customer_id;
    /*cast so compiler knows what is going on*/
    struct customer_args *args = (struct customer_args *)customer_args_ptr; 
    res_a = args->resource_a;
    res_b = args->resource_b;
    res_c = args->resource_c;
    customer_id = args->customer_num;
    int r;
    /*add rest of logic here*/
    
    /*Customer main loop*/
    while(1) {
        /*do stuff here*/
        r = myRand(5); 
        sleep(r); //before acting
        printf("DEBUG: Sleeping for %d seconds", r);

        break;//temp break to not break things 
    }
}

/* Returns number between 0 and x. */
int myRand(int x) {
    srand(time(NULL)); 
    return (rand() % x); 
}

/* Uses item for n seconds, then returns returns resources back to system. */
void use_resouces(int n) {
    /*grab resources here*/

    /*sleep n seconds*/
    sleep(n);

    /*return resources here*/
}
