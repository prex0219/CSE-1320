#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define width 40

void donateFood()
{
    int user_choice_donate;
    int user_choice_pickup;
    char user_choice_request;
    char food_name[50];
    char name[50];
    int quantity;
    printf("1. Please select a category.\n");
    printf("2. Grains & Staples\n");
    printf("3. Dairy Products\n");
    printf("4. Fruits & Vegetables\n");
    printf("5. Proteins\n");
    printf("6. Snacks & Beverages\n");
    printf("7. Baking & Cooking Essentials\n");
    scanf("%d", &user_choice_donate);

    printf("Would you like to check requested items before donating? (Y/N):\n");
    scanf("&c", &user_choice_request);
    toupper(user_choice_request);
    if (user_choice_request == 'Y')
    {
        displayRequestedItems();
    }
    else
    {
        printf("Enter food name: \n");
        scanf("%s", food_name);
        
        printf("Enter quantity: \n");
        scanf("%d", quantity);

        printf("Please choose a pickup location.");
        printf("1. Irving\n");
        printf("2. DFW\n");
        printf("3. Euless\n");
        printf("4. Arlington\n");
        printf("5. Dallas\n");
        printf("Enter your choice: \n");
        scanf("%d", user_choice_pickup);

        printf("Enter your name: \n");
        fgets(name, sizeof(name), stdin);

        addFoodDonationToList();

        printf("Thank you, %s ! Your donation has been recorded.", name);
    }
}

int main()
{
    char message1[] = "WELCOME TO HUNGER RELIEF HUB !";
    char message2[] = "Helping reduce food waste & feed the needy";
    int len1 = strlen(message1);
    int len2 = strlen(message2);
    int padding1 = (width - len1)/2;
    int padding2 = (width - len2)/2;
    int user_choice_menu;

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
        scanf("%d", user_choice_menu);

        if (user_choice_menu == 1)
        {
            donateFood();
        }
        else if (user_choice_menu == 2)
        {
            viewAvailableFood();
        }
        else if (user_choice_menu == 3)
        {
            requestFood();
        }
        else if (user_choice_menu == 4)
        {
            contactUs();
        }
        else if (user_choice_menu == 5)
        {
            exitSystem();
            break;
        }
        else 
        {
            printf("Invalid choice. Please choose from the given options./n");
            scanf("%d", user_choice_menu);
        }
    }
    
    
    
}