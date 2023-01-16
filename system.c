#include <stdio.h>

//Global Variable
 float price,partialAmount,totalAmount;

void menu()
{
    int choice;
    system("CLS");
    printf("\t\t\t\t Here's our Menu \n\n");
    printf("\t\t\t\t 1. Appetizers\n");
    printf("\t\t\t\t 2. Steak and Ribs \n");
    printf("\t\t\t\t 3. Salads\n");
    printf("\t\t\t\t 4. Drinks\n");
    printf("\n\n\t\t\t\tChoose what do you want to have: ");
    scanf("%d",&choice);


    if(choice == 1)
    {
        appetizer();
    }
    else if(choice == 2)
    {
        printf("steakAndribs();");
    }
    else if (choice == 3)
    {
        printf("Salads();");
    }
    else if (choice == 4)
    {
        printf("Drinks();");
    }
    else
    {
        printf("\n\t\t\t\tWrong input");
        printf("\n\t\t\t\tChoose (1/2/3/4): ");
        scanf("%d",&choice);
    }

    totalAmount = totalAmount + partialAmount ;
    printf("\t\t\n\nThe total is: %.2f",totalAmount);
}

appetizer()
{

    int choice,quantity;
    char anotherOrder;

    do{
    system("CLS");
    printf("\t\tHere's our Appetizers \t\t\tPrice\n");
    printf("\t\t1. Concia di zuchhine \t\t\t 800.00\n");
    printf("\t\t2. Bruschetta alla romana \t\t 750.00\n");
    printf("\t\t3. Fritta di peperoni e patate\t\t 700.00\n");
    printf("\t\t4. Deviled Eggs \t\t\t 900.00\n");
    printf("\t\t5. Back to Menu ");
    printf("\n\n\t\tEnter here: ");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:
            price = 800.00;
            break;
        case 2:
            price = 750.00;
            break;
        case 3:
            price = 700.00;
            break;
        case 4:
            price = 900.00;
            break;
        case 5:
            menu();
        default:
            printf("\n\n\t\tWrong Input");
    }
    printf("\n\n\t\tEnter quantity: ");
    scanf("%d",&quantity);
    partialAmount = price * quantity;
    printf("\n\n\t\tThe partial price: %.2f",partialAmount);


    printf("\n\n\t\tAdd another y/n?: ");
    anotherOrder = getche();

    totalAmount = totalAmount + partialAmount ;
    printf("\t\t\nThe total is: %.2f",totalAmount);

    }while (anotherOrder == 'y' || anotherOrder =='Y');

}


void mainScreen(void)
{
    printf("\n\n\n\n");
    printf("==================================================================\n");
    printf("||                            Welcome                           ||\n");
    printf("==================================================================\n");
    printf("\n\n\n\n\n\n\n");
    printf("Press any key to continue....");
    getch();
}




int main()
{
    mainScreen();
    menu();
    return 0;
}










do
{
    printf("\n\t\tCash Entered: ");
    scanf("%f",&cash);
}while (cash>=total);


do
{
    printf("\n\t\tCash Entered: ");
    scanf("%f",&cash);
    if(cash < total){
        printf("\n\t\tSorry, Not enough money. Please enter more money: ");
    }
}while (cash < total);


while (cash < total)
{
    printf("\n\t\tCash Entered: ");
    scanf("%f",&cash);
}













