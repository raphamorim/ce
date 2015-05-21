//
//  main.c
//  cê
//
//  Created by Hugo Raphael on 5/20/15.
//  Copyright (c) 2015 raphamorim. All rights reserved.
//

#include <stdio.h>

int sqrnum(int num);
int readnum(void);
int prompt(void);

prompt(void) {
    printf("Type a Number: ");
    return 0;
}

readnum(void){
    int t;
    scanf("%d", &t);
    return t;
}

sqrnum(int num) {
    printf("Is the number: %d\n\n", num);
    return num;
}

int main(void) {
    int t;
    
    for (prompt(); (t=readnum()); prompt())
        sqrnum(t);
}