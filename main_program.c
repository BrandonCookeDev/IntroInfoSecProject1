//
// Created by BC719C on 9/5/2016.
//

#include <stdlib.h>
#include <stdio.h>
#include "student.h"
#include "Part1.h"
#include "Part2.h"

Student_t s;

int main(int argc, const char* argv[])
{
    printf("\nStudent Creation Begin\n");
    //s = create_student_bo();
    s = create_student_ho();
    student_to_string(s);
}
