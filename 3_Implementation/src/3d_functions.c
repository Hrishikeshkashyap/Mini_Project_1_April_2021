/**
 * @file 3d_functions.c
 * @author Manjari.A.P
 * @brief source file for 3 dimensional shape parameter
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "geometry_calculator.h"
/**
 * @brief defining the value of PI
 * 
 */
#define PI 3.142857
/**
 * @brief function definition for cube
 * 
 * @param cb 
 * @param op 
 */
void cube_func(cube* cb, output_3d* op){
    op->tsa = 6 * cb->length_of_side * cb->length_of_side;
    op->volume = cb->length_of_side * cb->length_of_side * cb->length_of_side;
}
/**
 * @brief function definition for ciuboid
 * 
 * @param cbd 
 * @param op 
 */
void cuboid_func(cuboid* cbd, output_3d* op){
    op->tsa = 2 * ((cbd->length * cbd->breadth) + (cbd->height * cbd->breadth) + (cbd->length * cbd->height));
    op->volume = cbd->length* cbd->breadth * cbd->height;
}
/**
 * @brief function definition for sphere
 * 
 * @param sph 
 * @param op 
 */
void sphere_func(sphere* sph, output_3d* op){
    op->tsa = 4 * PI * sph->radius * sph->radius;
    op->volume = 4/3 * PI * sph->radius * sph->radius * sph->radius;
}
/**
 * @brief function definition for hemisphere
 * 
 * @param hsph 
 * @param op 
 */
void hemisphere_func(hemisphere* hsph, output_3d* op){
    op->tsa = 3 * PI * hsph->radius * hsph->radius;
    op->volume = 2/3 * PI * hsph->radius * hsph->radius * hsph->radius;
}
/**
 * @brief function definition for torus
 * 
 * @param tor 
 * @param op 
 */
void torus_func(torus* tor, output_3d* op){
    op->tsa = 4 * PI * PI * tor->large_radius * tor->small_radius;
    op->volume = 2 * PI * PI * tor->large_radius * tor->small_radius * tor->small_radius;
}
/**
 * @brief function definition for cylinder
 * 
 * @param cyl 
 * @param op 
 */
void cylinder_func(cylinder* cyl, output_3d* op){
    op->tsa = 2 * PI * cyl->radius * (cyl->radius + cyl->height);
    op->volume =  PI * cyl->radius * cyl->radius * cyl->height;
}