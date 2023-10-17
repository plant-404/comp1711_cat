#include <stdio.h>

int main() {
    int choice;
    bool inmenu = true;
    
    while(inmenu){
        printf("Choose a menu option: ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                printf("Option 1 chosen.\n");
                break;
            case 2:
                printf("Option 2 chosen.\n");
                break;
            case 3:
                printf("Option 3 chosen.\n");
                break;
            case 4:
                printf("Option 4 chosen.\n");
                break;
            case 5:
                printf("Exitting menu...\n");
                inmenu = false;
                break;
            default:
                printf("Invalid choice.\n");
        }
    }
    
    return 0;
}
