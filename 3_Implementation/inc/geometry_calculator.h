/**
 * @file geometry_calculator.h
 * @author Manjari.A.P
 * @brief header file for geometric calculator
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * geometric calculator that calculates the area and perimeter of 2D shapes
 * and total surface area and volume of 3D shapes
 */
#ifndef __GEOMETRY_CALCULATOR_H__
#define __GEOMETRY_CALCULATOR_H__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * @brief structure for circle
 * 
 */
typedef struct circle{
    double radius;
}circle;

/**
 * @brief structure for ellipse
 * 
 */
typedef struct ellipse{
    double semi_major_axis;
    double semi_minor_axis;
}ellipse;

/**
 * @brief structure for ring
 * 
 */
typedef struct ring{
    double outer_radius;
    double inner_radius;
}ring;

/**
 * @brief structure for rectangle
 * 
 */
typedef struct rectangle{
    double length;
    double breadth;
}rectangle;

/**
 * @brief structure for parallelogram
 * 
 */
typedef struct parallelogram{
    double length;
    double breadth;
    double height;
}parallelogram;

/**
 * @brief structure for rhombus
 * 
 */
typedef struct rhombus{
    double length_of_side;
    double length_of_diagonal1;
    double length_of_diagonal2;
}rhombus;

/**
 * @brief structure for cube
 * 
 */
typedef struct cube{
    double length_of_side;
}cube;

/**
 * @brief structure for cuboid
 * 
 */
typedef struct cuboid{
    double length;
    double breadth;
    double height;
}cuboid;

/**
 * @brief structure for sphere
 * 
 */
typedef struct sphere{
    double radius;
}sphere;

/**
 * @brief structure for hemisphere
 * 
 */
typedef struct hemisphere{
    double radius;
}hemisphere;

/**
 * @brief structure for torus
 * 
 */
typedef struct torus{
    double large_radius;
    double small_radius;
}torus;

/**
 * @brief structure for right circular cylinder
 * 
 */
typedef struct cylinder{
    double radius;
    double height;
}cylinder;

/**
 * @brief structure for output of 2d shapes- perimeter and area
 * 
 */
typedef struct output_2d{
    double perimeter;
    double area;
}output_2d;
/**
 * @brief structure for output of 3d shapes- tsa and volume
 * 
 */
typedef struct output_3d{
    double tsa;
    double volume;
}output_3d;
/**
 * @brief function that computes and stores the area and perimeter of circle from the given input
 * 
 * @param circ 
 * @param op 
 * @return int
 */
int circle_func(circle* circ, output_2d* op);
/**
 * @brief function that computes and stores the area and perimeter of ellipse from the given input
 * 
 * @param ellp 
 * @param op 
 * @return int
 */
int ellipse_func(ellipse* ellp, output_2d* op);
/**
 * @brief function that computes and stores the area and perimeter of ring from the given input
 * 
 * @param rin 
 * @param op 
 * @return int
 */
int ring_func(ring* rin, output_2d* op);
/**
 * @brief function that computes and stores the area and perimeter of rectangle from the given input
 * 
 * @param rect 
 * @param op 
 * @return int
 */
int rectangle_func(rectangle* rect, output_2d* op);
/**
 * @brief function that computes and stores the area and perimeter of parallelogram from the given input
 * 
 * @param para 
 * @param op 
 * @return int
 */
int parallelogram_func(parallelogram* para, output_2d* op);
/**
 * @brief function that computes and stores the area and perimeter of rhombus from the given input
 * 
 * @param rhom 
 * @param op 
 * @return int
 */
int rhombus_func(rhombus* rhom, output_2d* op);

/**
 * @brief function that computes and stores the tsa and volume of cube from the given input
 * 
 * @param cb 
 * @param op 
 * @return int
 */
int cube_func(cube* cb, output_3d* op);
/**
 * @brief function that computes and stores the tsa and volume of cuboid from the given input
 * 
 * @param cbd 
 * @param op 
 * @return int
 */
int cuboid_func(cuboid* cbd, output_3d* op);
/**
 * @brief function that computes and stores the tsa and volume of sphere from the given input
 * 
 * @param sph 
 * @param op 
 * @return int
 */
int sphere_func(sphere* sph, output_3d* op);
/**
 * @brief function that computes and stores the tsa and volume of hemisphere from the given input
 * 
 * @param hsph 
 * @param op 
 * @return int
 */
int hemisphere_func(hemisphere* hsph, output_3d* op);
/**
 * @brief function that computes and stores the tsa and volume of torus from the given input
 * 
 * @param tor 
 * @param op 
 * @return int
 */
int torus_func(torus* tor, output_3d* op);
/**
 * @brief function that computes and stores the tsa and volume of cylinder from the given input
 * 
 * @param cyl 
 * @param op 
 * @return int
 */
int cylinder_func(cylinder* cyl, output_3d* op);
/**
 * @brief function that obtains input and calls the appropriate 2D shape
 * 
 * @param shape_2D 
 * @return int 
 */
int two_dimension(char shape_2D);
/**
 * @brief function that obtains input and calls the appropriate 3D shape
 * 
 * @param shape_3D 
 * @return int 
 */
int three_dimension(char shape_3D);
#endif  /* #define __GEOMETRY_CALCULATOR_H__ */
