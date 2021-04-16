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

void two_dimension(char shape_2D){
    output_2d* op_2d = ((output_2d *) malloc(sizeof(output_2d)));
    circle c1 = {0};
    ellipse e1 = {0,0};
    ring ri1 = {0,0};
    rectangle re1 = {0,0};
    parallelogram p1 = {0,0,0};
    rhombus rh1 = {0,0,0};
    switch(shape_2D){
        case '0':
            printf("\nQuitting GeometriCalc M.0.\n");
            exit(0);
            break;
        case '1':
            printf("\nPlease type the radius of the circle:\n");
            scanf("%lf",&c1.radius);
            if(c1.radius < 0){
                printf("\nPlease provide positive values for input \n");
                break;
            }
            else{
                circle_func(&c1, op_2d);
                printf("Perimeter: %lf \nArea: %lf",op_2d->perimeter,op_2d->area);
                break;
            }
            break;
        case '2':
            printf("\nPlease type the semi-major axis and semi-minor axis of the ellipse:\n");
            scanf("%lf %lf",&e1.semi_major_axis,&e1.semi_minor_axis);
            if(e1.semi_major_axis < 0 && e1.semi_minor_axis < 0){
                printf("\nPlease provide positive values for input \n");
                break;
            }
            else{
                ellipse_func(&e1, op_2d);
                printf("Perimeter: %lf \nArea: %lf",op_2d->perimeter,op_2d->area);
                break;
            }
            break;
        case '3':
            printf("\nPlease type the outer radius and inner radius of the ring:\n");
            scanf("%lf %lf",&ri1.outer_radius,&ri1.inner_radius);
            if(ri1.outer_radius < 0 && ri1.inner_radius < 0){
                printf("\nPlease provide positive values for input \n");
                break;
            }
            else{
                if(ri1.outer_radius <= ri1.inner_radius){
                    printf("\nOuter radius less than inner radius. Please provide proper input \n");
                    break;
                }
                else{
                    ring_func(&ri1, op_2d); 
                    printf("Perimeter: %lf \nArea: %lf",op_2d->perimeter,op_2d->area);
                    break;
                }
            }
            break;
        case '4':
            printf("\nPlease type the length and breadth of the rectangle:\n");
            scanf("%lf %lf",&re1.length,&re1.breadth);
            if(re1.length < 0 && re1.breadth < 0){
                printf("\nPlease provide positive values for input \n");
                break;
            }
            else{
                rectangle_func(&re1, op_2d);  
                printf("Perimeter: %lf \nArea: %lf",op_2d->perimeter,op_2d->area);
                break;
            }
            break; 
        case '5':
            printf("\nPlease type the length, breadth and height of the parallelogram:\n");
            scanf("%lf %lf %lf",&p1.length,&p1.breadth,&p1.height);
            if(p1.length < 0 && p1.breadth < 0 && p1.height < 0){
                printf("\nPlease provide positive values for input \n");
                break;
            }
            else{
                parallelogram_func(&p1, op_2d); 
                printf("Perimeter: %lf \nArea: %lf",op_2d->perimeter,op_2d->area);
                break;
            }
            break;
        case '6':
            printf("\nPlease type the length of side, diagonal 1, diagonal 2 of the rhombus:\n");
            scanf("%lf %lf %lf",&rh1.length_of_side,&rh1.length_of_diagonal1,&rh1.length_of_diagonal2);
            if(rh1.length_of_side < 0 && rh1.length_of_diagonal1 < 0 && rh1.length_of_diagonal2 < 0){
                printf("\nPlease provide positive values for input \n");
                break;
            }
            else{
                rhombus_func(&rh1, op_2d);  
                printf("Perimeter: %lf \nArea: %lf",op_2d->perimeter,op_2d->area); 
                break;   
            }
            break; 
        default:
            printf("\nInvalid choice, choose a valid 2D shape option\n");
            break;
    }
}