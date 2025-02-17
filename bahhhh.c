#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// create a structure to store the student marks
typedef struct {
    int M1,M2,M3,M4;
    char G1,G2,G3,G4;
    char student_name[50];
    } Student_Mark;

//function declarations
int print_students_names(Student_Mark *student_marks, int count);
int print_students_marks(Student_Mark *student_marks, int count);


int main(void){
    
    //create an array of structures to store the student marks
    Student_Mark student_marks[10];
    FILE *file = fopen("Test_COSC.csv", "r");
    if (!file) {
        perror("Failed to open COSC file");
        return 1;
    }
    char line[1024];
    int count = 0;
    //read the file line by line
    while (fgets(line, sizeof(line), file)) {
        
        line[strcspn(line, "\n")] = 0; //remove newline character at the end of the line
        char *token = strtok(line, ","); //parse the line using strtok() to get the first token

        if (token == NULL) continue;//skip empty lines

        //store parsed data in the struct with the tokens
        strncpy(student_marks[count].student_name, token, sizeof(student_marks[count].student_name)); //first column: Name
        
        token = strtok(NULL, ",");
        student_marks[count].M1 = atoi(token); //second column
        token = strtok(NULL, ",");
        student_marks[count].M2 = atoi(token); //third column
        token = strtok(NULL, ",");
        student_marks[count].M3 = atoi(token); //fourth column
        token = strtok(NULL, ",");
        student_marks[count].M4 = atoi(token); //fifth column
        count++;
    }

    fclose(file);
    print_students_marks(student_marks, count);
    print_students_names(student_marks, count);
    

    return 0;
}

int print_students_names(Student_Mark *student_marks, int count){
    for(int i = 0; i < count; i++){
        printf("Student Name: %s\n", student_marks[i].student_name);
    }
    return 0;
}
int print_students_marks(Student_Mark *student_marks, int count){
    for(int i = 0; i < count; i++){
        printf("Student Name: %s\n", student_marks[i].student_name);
        printf("Marks: %d %d %d %d\n", student_marks[i].M1, student_marks[i].M2, student_marks[i].M3, student_marks[i].M4);
    }
    return 0;
}

