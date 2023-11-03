//
//  main.c
//  09_P2(1)
//
//  Created by ok sojoung on 2023/11/03.
//

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int i;
    int grade[SIZE];
    printf("5명의 점수를 입력하세요.\n");
    
    for(i=0; i<SIZE; i++)
        scanf("%d", &grade[i]);
    
    for(i=0; i<SIZE; i++)
        printf("grade[%d] = %d\n", i, grade[i]);
    
    return 0;
}
