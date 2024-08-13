 #include <stdio.h>
#include <string.h>

typedef struct information {
    char post[100];
    char Department[100];
    char name[100];
    int id;
} info;

int main() {
    char status[100];
    char confirmation;
    int s1, s2, s3;
    info in[100];
    int count = 0;

    printf("BLOCK LETTER\n");

    while (count < 100) {
        printf("Do you want to enter information Y/N\n");
        scanf(" %c", &confirmation);    
        getchar(); // Consume leftover newline

        if (confirmation == 'Y') {
            printf("Enter status: ");
            fgets(status, sizeof(status), stdin);
            
            // Remove trailing newline character from fgets
            status[strcspn(status, "\n")] = '\0';

            s1 = strcmp(status, "STUDENT");
            s2 = strcmp(status, "TEACHER");
            s3 = strcmp(status, "STAFF");

            if (s1 == 0) {
                strcpy(in[count].post, "STUDENT");
            } else if (s2 == 0) {
                strcpy(in[count].post, "TEACHER");
            } else if (s3 == 0) {
                strcpy(in[count].post, "STAFF");
            } else {
                printf("INVALID STATUS\n");
                continue; // Skip the rest of the loop and prompt for input again
            }

            printf("Department: ");
            fgets(in[count].Department, sizeof(in[count].Department), stdin);
            in[count].Department[strcspn(in[count].Department, "\n")] = '\0'; // Remove newline
            
            printf("Name: ");
            fgets(in[count].name, sizeof(in[count].name), stdin);
            in[count].name[strcspn(in[count].name, "\n")] = '\0'; // Remove newline
            
            printf("Id: ");
            scanf("%d", &in[count].id);
            getchar(); // Consume leftover newline

            count++;
        } else if (confirmation == 'N') {
            printf("Goodbye\n");
            break;
        } else {
            printf("Invalid input. Please enter Y or N.\n");
        }
    }

    // Print all entered information
    for (int i = 0; i < count; i++) {
        printf("Post: %s Department: %s Name: %s Id: %d\n",
               in[i].post, in[i].Department, in[i].name, in[i].id);
    }

    return 0;
}