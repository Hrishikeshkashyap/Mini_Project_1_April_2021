#include <unity.h>
#include <unity_internals.h>
#include "geometry_calculator.h"

#define PROJECT_NAME    "geometric_calc"

//output_2d* op_2d = ((output_2d *) malloc(sizeof(output_2d)));
circle c1 = {0};
ellipse e1 = {0,0};
ring ri1 = {0,0};
rectangle re1 = {0,0};
parallelogram p1 = {0,0,0};
rhombus rh1 = {0,0,0};
char shape_choice_2D ='0';
char shape_choice_3D ='0';
//output_3d* op_3d = ((output_3d *) malloc(sizeof(output_3d)));
cube cb1 = {0};
cuboid cd1 = {0,0,0};
sphere s1 = {0};
hemisphere h1 = {0};
torus t1 = {0,0};
cylinder cy1 = {0,0};

/* Prototypes for all the test functions */
void test_circle_func(void);
void test_ellipse_func(void);
void test_ring_func(void);
void test_rectangle_func(void);
void test_parallelogram_func(void);
void test_rhombus_func(void);
void test_two_dimension(void);

void test_cube_func(void);
void test_cuboid_func(void);
void test_sphere_func(void);
void test_hemisphere_func(void);
void test_torus_func(void);
void test_cylinder_func(void);
void test_three_dimension(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_circle_func);
  RUN_TEST(test_ellipse_func);
  RUN_TEST(test_ring_func);
  RUN_TEST(test_rectangle_func);
  RUN_TEST(test_parallelogram_func);
  RUN_TEST(test_rhombus_func);
  RUN_TEST(test_two_dimension);
  RUN_TEST(test_cube_func);
  RUN_TEST(test_cuboid_func);
  RUN_TEST(test_sphere_func);
  RUN_TEST(test_hemisphere_func);
  RUN_TEST(test_torus_func);
  RUN_TEST(test_cylinder_func);
  RUN_TEST(test_three_dimension);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_circle_func(void){
    output_2d* op_2d = ((output_2d *) malloc(sizeof(output_2d)));
    c1.radius=1;
    TEST_ASSERT_EQUAL(0,circle_func(&c1,op_2d));
    TEST_ASSERT_EQUAL(6.285714,op_2d->perimeter);
    TEST_ASSERT_EQUAL(3.142857,op_2d->area);
    free(op_2d);
}
void test_ellipse_func(void){
    output_2d* op_2d = ((output_2d *) malloc(sizeof(output_2d)));
    e1.semi_major_axis=2;
    e1.semi_minor_axis=1;
    TEST_ASSERT_EQUAL(0,ellipse_func(&e1,op_2d));
    TEST_ASSERT_EQUAL(9.938586,op_2d->perimeter);
    TEST_ASSERT_EQUAL(6.285714,op_2d->area);
    free(op_2d);
}
void test_ring_func(void){
    output_2d* op_2d = ((output_2d *) malloc(sizeof(output_2d)));
    ri1.outer_radius=2;
    ri1.inner_radius=1;
    TEST_ASSERT_EQUAL(0,ring_func(&ri1,op_2d));
    TEST_ASSERT_EQUAL(18.857142,op_2d->perimeter);
    TEST_ASSERT_EQUAL(9.428571,op_2d->area);
    free(op_2d);
}
void test_rectangle_func(void){
    output_2d* op_2d = ((output_2d *) malloc(sizeof(output_2d)));
    re1.length=2;
    re1.breadth=1;
    TEST_ASSERT_EQUAL(0,rectangle_func(&re1,op_2d));
    TEST_ASSERT_EQUAL(6.000000,op_2d->perimeter);
    TEST_ASSERT_EQUAL(2.000000,op_2d->area);
    free(op_2d);
}
void test_parallelogram_func(void){
    output_2d* op_2d = ((output_2d *) malloc(sizeof(output_2d)));
    p1.length=2;
    p1.breadth=1;
    p1.height=1;
    TEST_ASSERT_EQUAL(0,parallelogram_func(&p1,op_2d));
    TEST_ASSERT_EQUAL(6.000000,op_2d->perimeter);
    TEST_ASSERT_EQUAL(2.000000,op_2d->area);
    free(op_2d);
}
void test_rhombus_func(void){
    output_2d* op_2d = ((output_2d *) malloc(sizeof(output_2d)));
    rh1.length_of_side=2;
    rh1.length_of_diagonal1=4;
    rh1.length_of_diagonal2=4;
    TEST_ASSERT_EQUAL(0,rhombus_func(&rh1,op_2d));
    TEST_ASSERT_EQUAL(8.000000,op_2d->perimeter);
    TEST_ASSERT_EQUAL(8.000000,op_2d->area);
    free(op_2d);
}

void test_cube_func(void){
    output_3d* op_3d = ((output_3d *) malloc(sizeof(output_3d)));
    cb1.length_of_side=1;
    TEST_ASSERT_EQUAL(0,cube_func(&cb1,op_3d));
    TEST_ASSERT_EQUAL(6.000000,op_3d->tsa);
    TEST_ASSERT_EQUAL(1.000000,op_3d->volume);
    free(op_3d);
}
void test_cuboid_func(void){
    output_3d* op_3d = ((output_3d *) malloc(sizeof(output_3d)));
    cd1.length=2;
    cd1.breadth=1;
    cd1.height=1;
    TEST_ASSERT_EQUAL(0,cuboid_func(&cd1,op_3d));
    TEST_ASSERT_EQUAL(10.000000,op_3d->tsa);
    TEST_ASSERT_EQUAL(2.000000,op_3d->volume);
    free(op_3d);
}
void test_sphere_func(void){
    output_3d* op_3d = ((output_3d *) malloc(sizeof(output_3d)));
    s1.radius=1;
    TEST_ASSERT_EQUAL(0,sphere_func(&s1,op_3d));
    TEST_ASSERT_EQUAL(12.571428,op_3d->tsa);
    TEST_ASSERT_EQUAL(3.142857,op_3d->volume);
    free(op_3d);
}
void test_hemisphere_func(void){
    output_3d* op_3d = ((output_3d *) malloc(sizeof(output_3d)));
    h1.radius=1;
    TEST_ASSERT_EQUAL(0,hemisphere_func(&h1,op_3d));
    TEST_ASSERT_EQUAL(9.428571,op_3d->tsa);
    TEST_ASSERT_EQUAL(2.095236,op_3d->volume);
    free(op_3d);
}
void test_torus_func(void){
    output_3d* op_3d = ((output_3d *) malloc(sizeof(output_3d)));
    t1.large_radius=2;
    t1.small_radius=1;
    TEST_ASSERT_EQUAL(0,torus_func(&t1,op_3d));
    TEST_ASSERT_EQUAL(79.020401,op_3d->tsa);
    TEST_ASSERT_EQUAL(39.510200,op_3d->volume);
    free(op_3d);
}
void test_cylinder_func(void){
    output_3d* op_3d = ((output_3d *) malloc(sizeof(output_3d)));
    cy1.radius=2;
    cy1.height=1;
    TEST_ASSERT_EQUAL(0,cylinder_func(&cy1,op_3d));
    TEST_ASSERT_EQUAL(37.714284,op_3d->tsa);
    TEST_ASSERT_EQUAL(12.571428,op_3d->volume);
    free(op_3d);
}
void test_two_dimension(void){
    TEST_ASSERT_EQUAL(0,two_dimension(shape_choice_2D));
}
void test_three_dimension(void){
    TEST_ASSERT_EQUAL(0,three_dimension(shape_choice_3D));
}
