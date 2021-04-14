/**
 * @file geometry_calculator.h
 * @author Manjari.A.P
 * @brief 
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
 * @brief structure for N-sided regular polygon
 * 
 */
typedef struct n_sided_reg_polygon{
    double number_of_sides;
    double length_of_side;
}n_poly;
/**
 * @brief structure for isosceles triangle
 * 
 */
typedef struct isosceles_triangle{
    double length_of_common_side;
    double length_of_base;
}isos_tri;

/**
 * @brief structure for scalene triangle
 * 
 */
typedef struct scalene_triangle{
    double length_of_side1;
    double length_of_side2;
    double length_of_side3;
}scal_tri;

/**
 * @brief structure for circle
 * 
 */
typedef struct circle{
    double radius;
}circ;

/**
 * @brief structure for ellipse
 * 
 */
typedef struct ellipse{
    double semi_major_axis;
    double semi_minor_axis;
}ellis;

/**
 * @brief structure for ring
 * 
 */
typedef struct ring{
    double outer_radius;
    double inner_radius;
}rin;

/**
 * @brief structure for rectangle
 * 
 */
typedef struct rectangle{
    double length;
    double breadth;
}rect;

/**
 * @brief structure for parallelogram
 * 
 */
typedef struct parallelogram{
    double length;
    double breadth;
    double height;
}paral;

/**
 * @brief structure for rhombus
 * 
 */
typedef struct rhombus{
    double length_of_side;
    double length_of_diagonal1;
    double length_of_diagonal2;
}rhom;

/**
 * @brief structure for cube
 * 
 */
typedef struct cube{
    double length_of_side;
}cub;

/**
 * @brief structure for cuboid
 * 
 */
typedef struct cuboid{
    double length;
    double breadth;
    double height;
}cubd;

/**
 * @brief structure for sphere
 * 
 */
typedef struct sphere{
    double radius;
}sphr;

/**
 * @brief structure for hemisphere
 * 
 */
typedef struct hemisphere{
    double radius;
}hmsph;

/**
 * @brief structure for torus
 * 
 */
typedef struct torus{
    double large_radius;
    double small_radius;
}tor;

/**
 * @brief structure for right circular cone
 * 
 */
typedef struct cone{
    double radius;
    double height;
}con;
/**
 * @brief structure for right circular cylinder
 * 
 */
typedef struct cylinder{
    double radius;
    double height;
}cyl;

/**
 * @brief structure for N-sided regular prism
 * 
 */
typedef struct n_sided_reg_prism{
    double number_of_sides;
    double length_of_side;
    double height;
}n_prism;

/**
 * @brief structure for N-sided regular pyramid
 * 
 */
typedef struct n_sided_reg_pyramid{
    double number_of_sides;
    double length_of_side;
    double height;
}n_pyr;

#endif  /* #define __GEOMETRY_CALCULATOR_H__ */
