#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

enum
{
    DRAW = 1,
    WIN = 2,
    LOSE = 3,
};

enum
{
    ROCK = 1,
    SCISSOR = 2,
    PAPER = 3,
};

char *save_pick_name(char *str, int num)
{
    switch (num)
    {
    case ROCK:
        strcpy(str, "ROCK");
        break;
    case SCISSOR:
        strcpy(str, "SCISSOR");
        break;
    case PAPER:
        strcpy(str, "PAPER");
        break;
    }
}

// Construct Random Number
int generate_computer_number(void)
{
    srand((int)time(NULL));

    return rand() % 3 + 1;
}

// Output Result Number
int fight_computer(int num_user, int num_computer)
{
    if (num_computer == num_user)
        return DRAW;
    else if (num_computer - 1 == num_user)
        return WIN;
    else if (num_computer + 2 == num_user)
        return WIN;
    else
        return LOSE;
}

void print_current_score(int result)
{
    switch (result)
    {
    case DRAW:
        puts("You Draw!");
        break;
    case WIN:
        puts("You Win!");
        break;
    case LOSE:
        puts("You Lose....");
        break;
    }
}

int main(void)
{
    int userNumber;
    int computerNumber;
    char user[10];
    char computer[10];
    int result = WIN;
    int scoreWin = 0, scoreDraw = 0;

    puts("========== Welcome to Rock Scissor paper Game ==========");

    while (result != LOSE)
    {
        int is_first_attempt = 1;
        do
        {
            if (!is_first_attempt)
            {
                printf("Wrong input!\n");
            }
            puts("Rock : 1 Scissor : 2 Paper : 3");
            printf("Input Number : ");
            scanf("%d", &userNumber);
            is_first_attempt = 0;
        } while (userNumber > 3 || userNumber <= 0);
        //     scanf("%d", &userNumber);
        //     while(userNumber>3 || userNumber<=0){
        //         // if(userNumber>3 || userNumber<=0){
        //             puts("It is denied access");
        //             puts("Rock : 1 Scissor : 2 Paper : 3");
        //         // }
        //    }
        computerNumber = generate_computer_number();
        save_pick_name(user, userNumber);
        save_pick_name(computer, computerNumber);
        printf("Your pick is %s, Computer pick is %s ", user, computer);
        result = fight_computer(userNumber, computerNumber);
        print_current_score(result);
        if (result == DRAW)
            scoreDraw++;
        if (result == WIN)
            scoreWin++;
    }
    printf("Result of Game  : %d win %d draw", scoreWin, scoreDraw);
    return 0;
}