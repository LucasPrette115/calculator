#include <stdio.h>


double Calculate(int operation, double num1, double num2){
    switch (operation)
    {
    case 1:
        return num1 + num2;        
    case 2:
        return num1 - num2;        
    case 3:
        return num1/num2;        
    case 4:
        return num1 * num2;        
    default:
    return -1;        
    }
}

int main(int argc, char *argv[]){
    int userInput;
    double num1;
    double num2;
    int operations[] = {1, 2, 3, 4};
    int validInput = 0;

    while (!validInput)
    {
        printf("Select an operation -> | Add: 1 | | Subtract: 2 | | Divide: 3 | | Multiply: 4 |\n");
                
        if (scanf("%d", &userInput) != 1) {            
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); 
            continue; 
        }

        for(int i = 0; i < sizeof(operations)/sizeof(operations[0]); i++){
            if(userInput == operations[i]){
                validInput = 1;
                break;
            }
        }

        if(!validInput){
            printf("%d is not a valid input, try again\n", userInput);
        }
    }
    
    
    printf("Type in the first number: ");
    scanf("%lf", &num1);
    printf("Type in the second number: ");
    scanf("%lf", &num2);

    

    printf("Result: %.2lf", Calculate(userInput, num1, num2));    

}



