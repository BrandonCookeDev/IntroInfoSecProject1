//
// Created by BC719C on 9/3/2016.
//

/*
 * Part1 is a program that has a stack overflow vulnerability
 * written in it.
 */

#include <stdio.h>
#include <stdlib.h>
#include <mem.h>
#include "Part1.h"
#include "student.h"

Student_t s;

struct Student create_student_bo(){
    char name[15], class[10], gpa[4], student_id[6];
    printf("Please input student name:\n");
    gets(name);

    printf("Please input student's class [Freshman, Sophomore, Junior, Senior]:\n");
    fgets(class, sizeof class, stdin);
    fflush(stdin);
    if(     strcmp(class, "Freshman") < 0 &&
            strcmp(class,"Sophomore") < 0 &&
            strcmp(class,"Junior") < 0 &&
            strcmp(class,"Senior") < 0)
    {
        printf("Error, class must equal one of the following [Freshman, Sophomore, Junior, Senior] \n");
        exit(1);
    }

    printf("Please input the student's gpa:\n");
    fgets(gpa, sizeof gpa, stdin);
    fflush(stdin);
    if(strlen(gpa) > 4 || strlen(gpa) < 0)
    {
        printf("Error, gpa must be in the format X.X");
        exit(1);
    }

    printf("Please input the student's id number:\n");
    fgets(student_id, sizeof student_id, stdin);
    fflush(stdin);
    if(strlen(student_id) < 0 || strlen(student_id) > 6)
    {
        printf("Error, student id should be format XXXXX.");
        exit(1);
    }

    strcpy(s.name, name);
    strcpy(s.class, class);
    strcpy(s.gpa, gpa);
    strcpy(s.student_id, student_id);

    return s;
}


