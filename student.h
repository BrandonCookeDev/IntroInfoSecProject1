//
// Created by BC719C on 9/5/2016.
//

#ifndef INTROINFOSECP1_STUDENT_H
#define INTROINFOSECP1_STUDENT_H

struct Student {
    char    name[15];
    char    class[10];
    char    gpa[4];
    char    student_id[6];
} typedef Student_t;

void student_to_string(struct Student s);

#endif //INTROINFOSECP1_STUDENT_H
