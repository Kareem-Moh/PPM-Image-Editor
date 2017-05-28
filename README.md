# PPM-Image-Editor
This C program takes PPM files as inputs and allows the user to do one of the three options:

1. Remove all the read from a image by setting all red bits in each pixel to 0

2. Turn the input image to black and white

3. Reformat the picture to a square by cutting down on either exceeding rows or columns

This program can be compiled on cmd line. First you must compile the 2 C files using this command:
  
  gcc -Wall -std=c99 -o image_editor image_editor.c image_processing.c

Next you can run the funciton straight from command line with any of the following input/output streams:

  image_editor 1
    This will take keyboard input from command line and will output to command line as well
  
  image_editor 3 < [...]/sample_image.ppm
    This will take a ppm formatted image as input, and will output the result to the command line. No keyboard input is required
    
  image_editor 2 < [...]/sample_image.ppm > [...]/sample_black_and_white_image.ppm
    This will take a ppm formatted image as input and will place the output in a new ppm file at the specified path. No keyboard input         required
