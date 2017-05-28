#include <stdio.h>

char H1;
/*
 * Read an image from the standard input and set the red value of each pixel to
 * zero.
 */
void remove_red()
{
	int H2, H3, H4;
	scanf("%s%d%d%d", &H1, &H2, &H3, &H4);
	printf("%s \n%d %d\n%d\n", &H1, H2, H3, H4);
	int curr_r, curr_g, curr_b;
    for (int i = 1; i < H2*H3 + 1; i++) {
		scanf("%d%d%d", &curr_r, &curr_g, &curr_b);
		curr_r = 0;
		printf("%d %d %d  ", curr_r, curr_g, curr_b);
		if ((i > 1) && (i%(H2) == 0)){
		printf("\n");
		}
   }
}

/*
 * Read an image from the standard input and convert it from colour to black and white.
 */
void convert_to_black_and_white()
{
   int H2, H3, H4;
   scanf("%s%d%d%d", &H1, &H2, &H3, &H4);
   
   printf("%s \n%d %d\n%d\n", &H1, H2, H3, H4);
   
   int curr_r, curr_g, curr_b, avg, sum;
   for (int i = 1; i < H2*H3 + 1; i++) {
	scanf("%d%d%d", &curr_r, &curr_g, &curr_b);
	sum = (curr_r + curr_g + curr_b);
	avg = (sum/3);
	printf("%d %d %d  ", avg, avg, avg);
	if ((i > 1) && (i%(H2) == 0)){
		printf("\n");
	}
   }
}

/*
 * Read an image from the standard input and convert it to a square image.
 */
void instagram_square()
{
   int H2, H3, H4;
   scanf("%s%d%d%d", &H1, &H2, &H3, &H4);
   
   if (H3 > H2){
	   printf("%s \n%d %d\n%d\n", &H1, H2, H2, H4);
   }
   else if (H2 > H3) {
	   printf("%s \n%d %d\n%d\n", &H1, H3, H3, H4);
   }
   else {
	   printf("%s \n%d %d\n%d\n", &H1, H2, H3, H4);
   }
   
   int curr_r, curr_g, curr_b;

   //If the number of rows exceed the number of columns
	if (H3 > H2){
		int new_line_counter = 1;
		
		for (int i = 1; i < H2*H3 + 1; i++) {
			scanf("%d%d%d", &curr_r, &curr_g, &curr_b);
			if (new_line_counter <=  (H2)){
				printf("%d %d %d  ", curr_r, curr_g, curr_b);
			}
			if ((i%(H2) == 0) && (new_line_counter <= H2)) {
				printf("\n");
				new_line_counter++;
			}
		}
	}
	else if (H2 > H3){
		int col_counter = 0;
		
		for (int i = 1; i < H2*H3 + 1; i++) {
			scanf("%d%d%d", &curr_r, &curr_g, &curr_b);
			col_counter += 1;
			if (col_counter <=  (H3)){
				printf("%d %d %d  ", curr_r, curr_g, curr_b);
			}
			if ((i%(H3) == 0) && (col_counter <= H3)) {
				printf("\n");
				}
			if (col_counter == H2){
					col_counter = 0;
			}
		}
	}
	else {
		for (int i = 1; i < H2*H3 + 1; i++) {
			scanf("%d%d%d", &curr_r, &curr_g, &curr_b);
			printf("%d %d %d  ", curr_r, curr_g, curr_b);
			if ((i > 1) && (i%(H2) == 0)){
				printf("\n");
			}
		}	
	}
}








































