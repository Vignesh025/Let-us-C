#include<stdio.h>
int main()
{
    int match_sticks = 21, user_choice, computer_choice;
    while(match_sticks>=1)
    {
        printf("Total Match Sticks: %d\n", match_sticks);
        printf("Pick up the match sticks between (1 to 4): ");
        scanf("%d", &user_choice);

        if(user_choice>4)
        {
            printf("Invalid Entry");
            break;
        }
        computer_choice = 5 - user_choice;
        printf("Computer picks up the %d match sticks.\n", computer_choice);
        match_sticks = match_sticks-user_choice-computer_choice;
        if(match_sticks==1)
        {
            printf("\nYou have been lost via computer.");
            break;
        }
    }
}