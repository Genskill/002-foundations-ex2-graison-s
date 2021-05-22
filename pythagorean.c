#include <stdio.h>
#include <cs50.h>

int main(int argc, char const *argv[])
{
	float side1,side2,side3,large;
	side1 = get_float("side 1 ");
	side2 = get_float("side 2 ");
	side3 = get_float("side 3 ");
	if(side1 > side2 && side1 > side3){
		if(side1*side1 == side2*side2 + side3*side3)
			printf("Yes\n");
		else
			printf("No\n");
	}
	else if(side2 > side3 && side2 > side1){
		if(side2*side2 == side1*side1 + side3*side3)
			printf("Yes\n");
		else
			printf("No\n");
	}
	else{
		if(side3*side3 == side1*side1 + side2*side2)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}