#include <stdio.h>
#include <string.h>

int main()
{
        /* Greeting message */
        printf("\nHello, Welcome to Mybank. Banking made easy. \n");

        /* Create an account - Implementing registration */
        char firstname[50], lastname[50]

        printf("Please create an account \nEnter your first and last names here: ");
        scanf("%s %s", firstname, lastname)

        char pass [20];
        char val[20];
        int value;
        int i = 3;
        int passwordCorrect = 0; //flag var to track correct password validation.

        printf("Create a password: ");
        scanf("%s", pass);

        print("confirm password; ");
        scanf("%s", val);

        value = strcmp(pass, val);

        if value( != 0 )
                while (i >= 0)
                {
                        printf("\n Your Passwords not correct \n");
                        printf("\n Try again, Re-enter password \n");
                        scanf("%s", val);

                        value = strcmp(pass, val);
                
                        if ( value == 0)
                        {
                                passwordCorrect = 1;
                                break;
                        }
                        if(i > 0)
                                printf("Passwords dont match. You have %d more attempts \n", i);
                        else
                                printf("Sorry. You cant create an account");
                                        i--;
                }
        else
                passwordCorrect = 1;
}
