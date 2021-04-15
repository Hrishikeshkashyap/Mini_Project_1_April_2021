#include "geometry_calculator.h"
int dimension_choice = 1;
int shape_choice_2D =0;
int shape_choice_3D =0;
int main(int argc, char *argv[])
{
    printf("\n****GeometriCalc M.0****\n");
    while(1)
    {
        geometric_calculator_menu();
    }
}

void geometric_calculator_menu(void){
    printf("\nDimension Options Available\n");
    printf("\nType '2' if your choice is 2-Dimensional Shape(Area and Perimeter will be calculated)");
    printf("\nType '3' if your choice is 3-Dimensional Shape(Total Surface Area and Volume will be calculated)");
    printf("\nType '0' to Exit");
    scanf("%d", &dimension_choice);
    switch(dimension_choice){
        case 2:
            printf("\n2D Shape Options Available\n");
            printf("\nType '1' if your choice is Circle");
            printf("\nType '2' if your choice is Ellipse");
            printf("\nType '3' if your choice is Ring");
            printf("\nType '4' if your choice is Rectangle");
            printf("\nType '5' if your choice is Parallelogram");
            printf("\nType '6' if your choice is Rhombus");
            printf("\nType '0' to Exit");
            scanf("%d", &shape_choice_2D);
            two_dimension(shape_choice_2D);
            break;
        case 3:
            printf("\n3D Shape Options Available\n");
            printf("\nType '1' if your choice is Cube");
            printf("\nType '2' if your choice is Cuboid");
            printf("\nType '3' if your choice is Sphere");
            printf("\nType '4' if your choice is Hemisphere");
            printf("\nType '5' if your choice is Torus");
            printf("\nType '6' if your choice is Cylinder");
            printf("\nType '0' to Exit");
            scanf("%d", &shape_choice_3D);
            three_dimension(shape_choice_3D);
            break;
        case 0:
            printf("\nQuitting GeometriCalc M.0.\n");
            exit(0);
            break;
        default:
            printf("\nInvalid choice, choose a valid dimension option\n");
    }

}
void two_dimension(int shape_2D){
    output_2d* op_2d = ((output_2d *) malloc(sizeof(output_2d)));
    circle c1 = {0};
    ellipse e1 = {0,0};
    ring ri1 = {0,0};
    rectangle re1 = {0,0};
    parallelogram p1 = {0,0,0};
    rhombus rh1 = {0,0,0};
    switch(shape_2D){
        case 0:
            printf("\nQuitting GeometriCalc M.0.\n");
            exit(0);
            break;
        case 1:
            printf("\nPlease type the radius of the circle:\n");
            scanf("%lf",&c1.radius);
            circle_func(&c1, op_2d);
            break;
        case 2:
            printf("\nPlease type the semi-major axis and semi-minor axis of the ellipse:\n");
            scanf("%lf %lf",&e1.semi_major_axis,&e1.semi_minor_axis);
            ellipse_func(&e1, op_2d);
            break;
        case 3:
            printf("\nPlease type the outer radius and inner radius of the ring:\n");
            scanf("%lf %lf",&ri1.outer_radius,&ri1.inner_radius);
            ring_func(&ri1, op_2d); 
            break;
        case 4:
            printf("\nPlease type the length and breadth of the rectangle:\n");
            scanf("%lf %lf",&re1.length,&re1.breadth);
            rectangle_func(&re1, op_2d);  
            break; 
        case 5:
            printf("\nPlease type the length, breadth and height of the parallelogram:\n");
            scanf("%lf %lf %lf",&p1.length,&p1.breadth,&p1.height);
            parallelogram_func(&p1, op_2d); 
            break;
        case 6:
            printf("\nPlease type the length of side, diagonal 1, diagonal 2 of the rhombus:\n");
            scanf("%lf %lf %lf",&rh1.length_of_side,&rh1.length_of_diagonal1,&rh1.length_of_diagonal2);
            rhombus_func(&rh1, op_2d);   
            break;    
        default:
            printf("\nInvalid choice, choose a valid 2D shape option\n");
    }
}
