#include <stdio.h>
void ConvertInteger(char asc); // This function is to convert ascii to integer
void ConvertAscii(int num); // This function is to convert integer to ascii

int main(void)
{
    int foo;
    printf("What do you wanna execute program? \n 1. Convert ASCII to integer \n 2. Convert integer to ASCII\n");
    scanf("%d", &foo);
    
    switch(foo)
    {
        char asc;
        int num;
        case 1:// ASCII to integer
            
            printf("Please type your alphabat\n");
            scanf("%c", &asc);
            ConvertInteger(asc);
            break;
        case 2:// Integer to ASCII
            printf("Please type your integer\n");
            scanf("%d", &num);
            ConvertAscii(num);
            break;
        default: printf("Exit this program");
    }
    
    return 0;
}

void ConvertAscii(int num)
{
    char asc;
    asc = num;
    printf("\n%c", asc);
}

void ConvertInteger(char asc)
{
    int integer;
    integer = asc;
    printf("\n%d", integer);
}
