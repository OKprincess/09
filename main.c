//
//  main.c
//  09_P3(2)
//
//  Created by ok sojoung on 2023/11/03.
//

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int i;
    int a[SIZE] = {1,2,3,4,5};
    int b[SIZE] = {1,2,3,4,5};
    int flag_same = 1;
    
    for(i=0; i<SIZE; i++)
    {
        if(a[i] != b[i])
        {
            printf("배열은 다른 값을 가집니다.\n");
            printf("a[%d]=%d  b[%d]=%d\n",i,a[i],i,b[i]);
            flag_same = 0;
        }
    }
    return 0;
    
}
