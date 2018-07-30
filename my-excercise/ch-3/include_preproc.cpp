#include <cstdio>
#include "preproc.h"

// #define PI 3.1417

// #ifndef PREPROC_H_
// #define PREPROC_H_

// const int _iOne = 1;
// const char _sOne[] = "one";

// #endif 

double area(double r){
    return PI*r*r;
}
int main()
{
    double r = 2.0;
    double a = area(r);
    
    printf("Area of a circle with radius 2 is %0.2f\n", a);
    printf("preproc_h is %s\n", PREPROC_H_ "HI");
    printf("Const int '1' %d\n", _iOne);
    printf("Const char 'one' %s\n", _sOne);
    return 0;
}
