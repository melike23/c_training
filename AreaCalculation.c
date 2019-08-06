/* Melike Yýldýrým */
/* 2019 */

#include <stdio.h>
#include <math.h>
#define PI 3

int main(){
int  firsthEdge, secondEdge, selection;
float result;

//pressing to screen the selections for user
printf("press\n\
for area of square 1\n\
for area of rectangle 2\n\
for area of equilateral triangle 3\n\
for area of circle 4\n\
for area of equilateral pentagon 5\n\
for area of hexagon 6\n ");


//if user selects 1 or 2 or 3 or 4 or 5 or 6 true else false
while(1){
	//user selects who wants which geometric shapes.
	printf("\n enter the your selection :");
	//assign the selection to selection
    scanf("%d", &selection);
    //if user selects 1
	if(selection==1){
		// for area of square is enough a length of edge
		printf("enter a length of edge.");
		//assign the length of edge to firsthEdge
		scanf("%d", &firsthEdge);
		//to calculate formula area of square 
		result=firsthEdge*firsthEdge;
		//pressing the screen result
		printf("%.2f", result);
	//if user selects 2
	}else if(selection==2){
		//we need 2 edge for area of rectangle: short edge and long edge  
		printf("enter a length of short edge.");
		//assign the short length of edge to firsthEdge
		scanf("%d", &firsthEdge);
		printf("enter a length of long edge.");
		//assign the long length of edge to secondEdge
		scanf("%d", &secondEdge);
		//to calculate formula area of rectangle
		result=firsthEdge*secondEdge;
		//pressing the screen result
		printf("%.2f", result);
	//if user selects 3
	}else if(selection==3){
		// for area of equilateral triangle is enough a length of edge
		printf("enter a length of edge.");
		//assign the length of edge to firsthEdge
		scanf("%d", &firsthEdge);
		//to calculate formula area of equilateral triangle
		result=firsthEdge*firsthEdge*sqrt(3)/4;
		//pressing the screen result
		printf("%.2f", result);
	//if user selects 4
	}else if(selection==4){
		// we need a radius for area of circle 
	    printf("enter a length of radius.");
	    //assign the length of radius to firsthEdge
		scanf("%d", &firsthEdge);
		//to calculate formula area of circle
		result=PI*firsthEdge*firsthEdge;
		//pressing the screen result
		printf("%.2f", result);	
	//if user selects 5
	}else if(selection==5){
		// for area of equilateral pentagon is enough a length of edge
		printf("enter a length of edge.");
		//assign the length of edge to firsthEdge
		scanf("%d", &firsthEdge);
		//to calculate formula area of equilateral pentagon
		result=pow(firsthEdge,2)*sqrt(25+10*sqrt(5))/4;
		//pressing the screen result
		printf("%.2f", result);
	//if user selects 6
	}else if(selection==6){
		// for area of equilateral hexagon is enough a length of edge
		printf("enter a length of edge.");
		//assign the length of edge to firsthEdge
		scanf("%d", &firsthEdge);
		//to calculate formula area of equilateral hexagon
		result=6*pow(firsthEdge,2)*sqrt(3)/4;
		//pressing the screen result
		printf("%.2f", result);
	}
}

}



