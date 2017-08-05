

#include <stdio.h>

int main() {
	double number;
	printf("enter the number :");
	scanf("%1f,&number");
	if(number<=0.0)
	{
	    if(number==0.0)
	    printf("you entered 0.");
	    else
	    printf("enter a positive number.");
	    else
	    printf("enter a negative number.");
	}
	return 0;
}
