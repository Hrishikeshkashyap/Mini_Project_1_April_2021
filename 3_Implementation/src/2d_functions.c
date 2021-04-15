/**
 * @file 2d_functions.c
 * @author Manjari.A.P
 * @brief source file for 2 dimensional shape parameters
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "geometry_calculator.h"
/**
 * @brief defining value for PI 
 * 
 */
#define PI 3.142857
/**
 * @brief function definition for circle
 * 
 * @param circ 
 * @param op 
 */
void circle_func(circle* circ, output_2d* op){
    op->perimeter = 2 * PI * circ->radius;
    op->area = PI * circ->radius * circ->radius;
}
/**
 * @brief function definition for ellipse
 * 
 * @param ellp 
 * @param op 
 */
void ellipse_func(ellipse* ellp, output_2d* op){
    double temp = 0.5 * (pow(ellp->semi_major_axis,2) + pow(ellp->semi_minor_axis,2));
    op->perimeter = 2 * PI * pow(temp,0.5);
    op->area = PI * ellp->semi_major_axis * ellp->semi_minor_axis;
}
/**
 * @brief function definition for ring
 * 
 * @param rin 
 * @param op 
 */
void ring_func(ring* rin, output_2d* op){
    op->perimeter = 2 * PI * (rin->inner_radius + rin->outer_radius);
    op->area = PI * ((rin->outer_radius * rin->outer_radius) - (rin->inner_radius * rin->inner_radius));
}
/**
 * @brief function definition for rectangle
 * 
 * @param rect 
 * @param op 
 */
void rectangle_func(rectangle* rect, output_2d* op){
    op->perimeter = 2 * (rect->breadth + rect->length);
    op->area = rect->length * rect->breadth;
}
/**
 * @brief function definition for parallelogram
 * 
 * @param para 
 * @param op 
 */
void parallelogram_func(parallelogram* para, output_2d* op){
    op->perimeter = 2 * (para->breadth + para->length);
    op->area = para->length * para->height;
}
/**
 * @brief function definition for rhombus
 * 
 * @param rhom 
 * @param op 
 */
void rhombus_func(rhombus* rhom, output_2d* op){
    op->perimeter = 4 * rhom->length_of_side ;
    op->area = 0.5 * rhom->length_of_diagonal1 * rhom->length_of_diagonal2;
}
