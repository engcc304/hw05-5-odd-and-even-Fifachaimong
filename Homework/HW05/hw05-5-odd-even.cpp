/*
    จงรับตัวเลขจากผู้ใช้ และให้แสดงผลลัพธ์ว่าเป็นเลขคู่หรือเลขคี่
    
    Test case:
        Input :
            15

    Output:
        15 is an odd integer

    Test case:
        Input :
            -22

    Output:
        -22 is an even integer

*/
#include <stdio.h>
int main(){
    int i;
    printf("Test case:\n");
    printf("Input :\n");
    scanf("%d",&i);

    if (i%2==1)
    {printf("Output:\n %d is an odd integer",i);
    }else
    {printf("Output:\n %d is an even integer",i);
        
    }
    return 0;
    }
    