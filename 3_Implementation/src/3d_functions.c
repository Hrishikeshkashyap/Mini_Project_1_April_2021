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
    op->volume = 0.666666 * PI * hsph->radius * hsph->radius * hsph->radius;
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

void three_dimension(char shape_3D){
    output_3d* op_3d = ((output_3d *) malloc(sizeof(output_3d)));
    cube cb1 = {0};
    cuboid cd1 = {0,0,0};
    sphere s1 = {0};
    hemisphere h1 = {0};
    torus t1 = {0,0};
    cylinder cy1 = {0,0};
    switch(shape_3D){
        case '1':
            printf("\nPlease type the length of the cube:\n");
            scanf("%lf",&cb1.length_of_side);
            if(cb1.length_of_side < 0){
                printf("\nPlease provide positive values for input \n");
                break;
            }
            else{
                cube_func(&cb1, op_3d);
                printf("Total Surface Area: %lf \nVolume: %lf",op_3d->tsa,op_3d->volume);
                break;
            }
            break; 
        case '2':
            printf("\nPlease type the length, breadth and height of the cuboid:\n");
            scanf("%lf %lf %lf",&cd1.length,&cd1.breadth,&cd1.height);
            if(cd1.length < 0 && cd1.breadth < 0 && cd1.height < 0){
                printf("\nPlease provide positive values for input \n");
                break;
            }
            else{
                cuboid_func(&cd1, op_3d);
                printf("Total Surface Area: %lf \nVolume: %lf",op_3d->tsa,op_3d->volume);
                break;
            }
            break; 
        case '3':
            printf("\nPlease type the radius of the sphere:\n");
            scanf("%lf",&s1.radius);
            if(s1.radius < 0){
                printf("\nPlease provide positive values for input \n");
                break;
            }
            else{
                sphere_func(&s1, op_3d); 
                printf("Total Surface Area: %lf \nVolume: %lf",op_3d->tsa,op_3d->volume);
                break;
            }
            break; 
        case '4':
            printf("\nPlease type the radius of the hemisphere:\n");
            scanf("%lf",&h1.radius);
            if(h1.radius < 0){
                printf("\nPlease provide positive values for input \n");
                break;
            }
            else{
                hemisphere_func(&h1, op_3d);  
                printf("Total Surface Area: %lf \nVolume: %lf",op_3d->tsa,op_3d->volume);
                break; 
            }
            break; 
        case '5':
            printf("\nPlease type the large radius and small radius of the torus:\n\n");
            scanf("%lf %lf",&t1.large_radius,&t1.small_radius);
            if(t1.large_radius < 0 && t1.small_radius < 0){
                printf("\nPlease provide positive values for input \n");
                break;
            }
            else{
                if(t1.large_radius <= t1.small_radius){
                    printf("\nLarge radius less than small radius. Please provide proper input \n");
                    break;
                }
                else{
                    torus_func(&t1, op_3d); 
                    printf("\nTotal Surface Area: %lf \nVolume: %lf\n",op_3d->tsa,op_3d->volume);
                    break; 
                }
            }  
            break;           
        case '6':
            printf("\nPlease type the radius and height of the cylinder:\n");
            scanf("%lf %lf",&cy1.radius,&cy1.height);
            if(cy1.radius < 0 && cy1.height < 0){
                printf("\nPlease provide positive values for input \n");
                break;
            }
            else{
                cylinder_func(&cy1, op_3d);  
                printf("Total Surface Area: %lf \nVolume: %lf",op_3d->tsa,op_3d->volume);
                break;   
            } 
            break; 
        case '0':
            printf("\nQuitting GeometriCalc M.0.\n");
            exit(0);
            break;
        default:
            printf("\nInvalid choice, choose a valid 3D shape option\n");
            break;
    }
}