#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define width 40

int main()
{
    char message1[] = "WELCOME TO HUNGER RELIEF HUB !";
    char message2[] = "Helping reduce food waste & feed the needy";
    int len1 = strlen(message1);
    int len2 = strlen(message2);
    int padding1 = (width - len1)/2;
    int padding2 = (width - len2)/2;
    int user_choice;

    printf("%*s%s\n", padding1, "", message1);
    printf("%*s%s\n", padding2, "", message2);

    while (true)
    {
        printf("1. Donate Food\n");
        printf("2. View Available Food\n");
        printf("3. Request Food\n");
        printf("4. Contact Us\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", user_choice);

        if (user_choice == 1)
        {
            donateFood();
        }
        else if (user_choice == 2)
        {
            viewAvailableFood();
        }
        else if (user_choice == 3)
        {
            requestFood();
        }
        else if (user_choice == 4)
        {
            contactUs();
        }
        else if (user_choice == 5)
        {
            exitSystem();
            break;
        }
        else 
        {
            printf("Invalid choice. Please choose from the given options./n");
            scanf("%d", user_choice);
        }
    }
    
    
}