#include <stdio.h>

void firstpath();
void secondpath();

int main()
{
    int role;
    int choice1;

    printf("Select your role:\n 1.Warrior\t 2.Wizard\t 3.Rogue\n");
    scanf("%d", &role);
    if (role == 1)
    {
        printf("\n\tBeing a mighty Warrior is now your destiny!\n\n");
    }
    else if (role == 2)
    {
        printf("\n\tWizard it is! Prepare yourself for adventure!\n\n");
    }
    else if (role == 3)
    {
        printf("\n\tYou are now the tricky Rogue!\n\n");
    }
    else
    {
        printf("Invalid choice, please enter a valid number (1-3).\n");
    }



    printf("\nYou spawned in the village.\nThere is a person waiting to give you a quest.\nThere is a path to the forest.\n\n 1)Take the quest\t2)Continue to the forest\n");
    scanf("%d", &choice1);

    if(choice1 == 1)
    {
        firstpath();
    }
    else if(choice1 == 2)
    {
        secondpath();
    }
    else
    {
        printf("Please enter a valid choice.\n");
    }


}

void firstpath()
{
    int secondchoice;
    int thirdchoice;

    printf("\n\"There is a pig messing around here, I need you to kill it.\"\nYou went to the forest and slayed the pig.\nYou leveled up and unlocked a new ability.\n\n 1)Return the quest\t2)Continue forward\n");
    scanf("%d", &secondchoice);

    if(secondchoice == 1)
    {

        printf("\nThe villager rewarded you with gold and experience.\nYou leveled up and unlocked a new ability.\nHe has another quest for you.\n\n 1)Take the quest\t2)Continue forward\n");
        scanf("%d", &thirdchoice);

        if(thirdchoice == 1)
        {
            printf("\n\"That task was nothing for you. You deserve a greater challenge!\nGo prove your honor and slay The Dragon, hiding inside a cave deep in the forest.\"\nAfter a long wander, you found the cave. You go inside and you find the dragon.\nAfter a prolonged fight, you slay the dragon.\n\nThanks for playing!\nExpect the full game soon!\n");
        }
        else if(thirdchoice == 2)
        {
            printf("\nYou continue to the forest. After a long walk, you find a cave.\nA colossal dragon comes out of the cave and eats you alive\n\nEnd of the game.\n");
        }
        else
        {
            printf("Please enter a valid choice.\n");
        }

    }

    else if(secondchoice == 2)
    {

        printf("\nAfter a long walk, you find a cave.\nA colossal dragon comes out of the cave and eats you alive\n\nEnd of the game.\n");

    }

    else
    {

        printf("\nPlease enter a valid choice.\n");

    }
}

void secondpath()
{
    int secondchoice;
    int thirdchoice;

    printf("\nYou find a wild pig in the forest.\nYou slay the pig and level up, granting you a new ability.\n\n 1)Return to take the quest\t2)Continue forward\n");
    scanf("%d", &secondchoice);

    if(secondchoice == 1)
    {

        printf("\nThe villager warned you for a wild pig in the forest. You informed him that the pig was slayed by you.\nHe gives you gold and experience, resulting in you leveling up and granting a new ability.\nHe wants you to take another quest.\n\n 1)Take the quest\t2)Continue forward\n");
        scanf("%d", &thirdchoice);

        if(thirdchoice == 1)
        {

            printf("\n\"That task was nothing for you. You deserve a greater challenge!\nGo prove your honor and slay The Dragon, hiding inside a cave deep in the forest.\"\nAfter a long wander, you found the cave. You go inside and you find the dragon.\nAfter a prolonged fight, you slay the dragon.\n\nThanks for playing!\nExpect the full game soon!\n");

        }

        else if(thirdchoice == 2)
        {

            printf("\nYou continue to the forest. After a long walk, you find a cave.\nA colossal dragon comes out of the cave and eats you alive\n\nEnd of the game.\n");

        }
        else
        {

            printf("Please enter a valid choice.\n");

        }


    }

    else if(secondchoice == 2)
    {

        printf("\nYou continue to the forest. After a long walk, you find a cave.\nA colossal dragon comes out of the cave and eats you alive\n\nEnd of the game.\n");

    }
    else
    {
        printf("Please enter a valid choice.\n");
    }
}
