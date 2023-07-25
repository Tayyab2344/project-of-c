#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_SUBJECTS 10
#define MAX_SECTIONS 5

struct ExamSchedule {
    char subject[50];
    char section[5];
    int day;
    int month;
    int year;
};

void generateExamDates(struct ExamSchedule exams[], int numExams) {
    srand(time(NULL));

    for (int i = 0; i < numExams; i++) {
        exams[i].day = 17 + rand() % 14;  // Generate a random day (1-31)
        exams[i].month = 6 + rand() % 2; // Generate a random month (1-12)
        exams[i].year = 2023 + rand() % 1; // Generate a random year between 2023 and 2024
    }
}

void printExamSchedule(struct ExamSchedule exams[], int numExams) {
    printf("\nExam Schedule:\n");
    printf("-------------------------------------------------------\n");
    printf("| Subject             | Section | Date       | Time   |\n");
    printf("-------------------------------------------------------\n");

    for (int i = 0; i < numExams; i++) {
        printf("| %-19s | %-7s | %02d/%02d/%d | 09:00 - 12:00 |\n",
               exams[i].subject, exams[i].section,
               exams[i].day, exams[i].month, exams[i].year);
    }

    printf("-------------------------------------------------------\n");
}

int main() {
    int numSubjects, numSections;
    struct ExamSchedule exams[MAX_SUBJECTS * MAX_SECTIONS];

    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);

    if (numSubjects <= 0 || numSubjects > MAX_SUBJECTS) {
        printf("Invalid number of subjects. Please enter a number between 1 and %d.\n", MAX_SUBJECTS);
        return 1;
    }

    printf("Enter the number of sections: ");
    scanf("%d", &numSections);

    if (numSections <= 0 || numSections > MAX_SECTIONS) {
        printf("Invalid number of sections. Please enter a number between 1 and %d.\n", MAX_SECTIONS);
        return 1;
    }

    for (int i = 0; i < numSubjects; i++) {
        for (int j = 0; j < numSections; j++) {
            printf("Enter the name of Subject %d: ", i + 1);
            scanf("%s", exams[i * numSections + j].subject);

            printf("Enter the name of Section %d: ", j + 1);
            scanf("%s", exams[i * numSections + j].section);
        }
    }

    // Generate random exam dates
    generateExamDates(exams, numSubjects * numSections);

    // Display the exam schedule
    printExamSchedule(exams, numSubjects * numSections);

    return 0;
}

