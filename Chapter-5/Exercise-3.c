// Author: Anshu Kumar Singh
// Date: 28/10/2023
// Let Us C 18th Edition Chapter 5 Question 3

/*
Write a program for a matchstick game being played between the computer and a user.
Your program should ensure that the computer always wins. Rules for the game are as follows: 

- There are 21 matchsticks.
- The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
- After the person picks, the computer does its picking.
- Whoever is forced to pick up the last matchstick loses the game.
*/

#include <stdio.h>

int main() {

    int no_of_matchsticks = 21;
    int last = 0; // It's second last as the loop breaks when 1 matchstick is remaining. 
    int bot_choice = 0;

    while (no_of_matchsticks > 1)
    {
        // Player's chance
        last = 1;
        int user_choice = 0;
        while (user_choice < 1 || user_choice > 4)
        {
            printf("Pick out 1 to 4 matchsticks: ");
            scanf("%d", &user_choice);
        }

        no_of_matchsticks -= user_choice;
        if (no_of_matchsticks <= 1)
            break;

        // Bot's chance
        last =  0;
        bot_choice = 5 - user_choice;
        printf("Bot picked up %d matchstick(s).\n", bot_choice);
        
        no_of_matchsticks -= bot_choice;
        printf("Remaining Matchstick(s): %d\n", no_of_matchsticks);
    }

    if (last == 0)
        printf("You lost the game!\n");
    else if (last == 1)
        printf("You Won the game!\n");
    else 
        printf("Something went wrong!\n");

    return 0;

    // I couldn't figure out the winning strategy and had to google it. It looks so 
    // easy now.
}
