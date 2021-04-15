# Name of the project
PROJECT_NAME = geometry_calc

# Output directory
BUILD = build

# All source code files
SRC = Main_prog_geocalc.c\
src\2d_functions.c\
src\3d_functions.c

# All include folders with header files
INC	= -Iinc

# Project Output name
PROJECT_OUTPUT = $(BUILD)\$(PROJECT_NAME).exe

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	.\$(PROJECT_OUTPUT)