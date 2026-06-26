
#include <stdio.h>

int main() {
    int score = 0;
    int answer;

    printf("===================================\n");
    printf("      SIMPLE QUIZ APPLICATION\n");
    printf("===================================\n\n");


    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n");
    printf("2. New Delhi\n");
    printf("3. Kolkata\n");
    printf("4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is New Delhi.\n\n");
    }


    printf("Q2. Which language is mainly used for system programming?\n");
    printf("1. C\n");
    printf("2. HTML\n");
    printf("3. CSS\n");
    printf("4. SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C.\n\n");
    }

    
    printf("Q3. How many days are there in a week?\n");
    printf("1. 5\n");
    printf("2. 6\n");
    printf("3. 7\n");
    printf("4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is 7.\n\n");
    }

    
    printf("Q4. Which symbol is used to end a statement in C?\n");
    printf("1. .\n");
    printf("2. ;\n");
    printf("3. :\n");
    printf("4. ,\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is ;\n\n");
    }

    
    printf("Q5. Which function is used to display output in C?\n");
    printf("1. scanf()\n");
    printf("2. print()\n");
    printf("3. printf()\n");
    printf("4. input()\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is printf().\n\n");
    }

    
    printf("===================================\n");
    printf("Quiz Completed!\n");
    printf("Your Score: %d/5\n", score);

    if (score == 5)
        printf("Excellent! You got all answers correct.\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}