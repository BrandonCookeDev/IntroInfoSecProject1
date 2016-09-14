//
// Created by BC719C on 9/5/2016.
//

#include <stdlib.h>
#include <stdio.h>
#include "student.h"

void student_to_string(struct Student s){
    printf("\nName: %s \nClass: %s \nGPA: %s \nID#: %s",
           s.name, s.class, s.gpa, s.student_id);
}