#include "geometry_calculator.h"
int dimension_choice = 1;
int shape_choice_2D =0;
int shape_choice_3D =0;
void geometric_calculator_menu(void);
//void two_dimension(int shape_2D);
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
            while(1){
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
            }          
            break;
        case 3:
            while(1){
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
            }
            break;
        case 0:
            printf("\nQuitting GeometriCalc M.0.\n");
            exit(0);
            break;
        default:
            printf("\nInvalid choice, choose a valid dimension option\n");
    }

}


