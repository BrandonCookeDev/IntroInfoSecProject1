//
// Created by BC719C on 9/5/2016.
//

/*
 * Part2 is a program with a heap overflow
 * vulnerability written in it
 */

#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include "Part2.h"
#include "student.h"

Student_t s;

struct Student create_student_ho(){
    char * name, * class, * gpa, * student_id;

    printf("\nPlease print student's name:\n");
    name = malloc(sizeof(char *) * 12);
    gets(name);

    printf("\nPlease print student's class\n");
    class = malloc(sizeof(char *) * 12);
    fgets(class, strlen(class) , stdin);

    printf("\nPlease print the student's gpa:\n");
    gpa = malloc(sizeof(char *) * 4);
    fgets(class, strlen(gpa), stdin);

    printf("\nPlease print the student's id:\n");
    student_id = malloc(sizeof(char *) * 8);
    fgets(student_id, strlen(student_id), stdin);

    strcpy(s.name, name);
    strcpy(s.class, class);
    strcpy(s.gpa, gpa);
    strcpy(s.student_id, student_id);

    return s;
};
