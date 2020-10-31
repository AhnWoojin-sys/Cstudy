#include <stdio.h>
void InputScore(void);
void PrintScore(void);
void Inputtotal(void); 

int ScoreBoard[5][5]; 
char subject[4][10] = {"Ranguage", "Math", "English", "History"};

int main(void)
{
    InputScore();
    Inputtotal();
    PrintScore();
    
    // 출력하는 코드
   }


void InputScore(void)
{
    
    int i, j;

    for(i=0;i<4;i++)
    {
        printf("Please type in order subject of %dPerson\n", i + 1);
        for(j=0;j<4;j++)
        {
            printf("Type score of %s subject\n",subject[j]);
            scanf("%d", &ScoreBoard[i][j]);
        }
    }
   
}

void PrintScore(void)
{
    int i, j;
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%-4d  ", ScoreBoard[i][j]);
        }
        printf("\n");
    }
 
}


void Inputtotal(void)
{
    int total;

    for(int i=0;i<4;i++)
    {
        total = 0;
        for(int j=0;j<4;j++)
        {
            total += ScoreBoard[i][j];
        }
        ScoreBoard[i][4] = total;
    }

    for(int i=0;i<5;i++)
    {
        total = 0;
        for(int j=0;j<4;j++)
            {
            total += ScoreBoard[j][i];
            }
        ScoreBoard[4][i] = total;
    }

}