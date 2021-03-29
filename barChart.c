#include <stdio.h>

int main(void)
{
    printf("Enter two numbers: ");
    int one, two;
    scanf("%d %d", &one, &two);


    //find the largets of the two
    int largest = one > two ? one : two;
    //fint the smallest
    int smallest = one > two ? two : one;
    //find the difference
    int difference = largest - smallest;
    //initialize highest divisible
    int highestDivisible;
    //find highest divisible by iterating through
    //the size of the difference for like divisibility
    //between smallest and largest
    for (int i = 1; i <= difference; ++i){

        printf("checking %d \n", i);

        if (largest % i == 0 && smallest % i == 0){
            highestDivisible = i;
        }
    }


    printf("%d is smaller than %d \n", smallest, largest);

    printf("the largest divisible between them is %d \n", highestDivisible);
    printf("\n\n\n");
    //iterate through the largest value
    //if number is less than smallest then print
    //only the largest
    //else print both largest and smallest lines
    //
    //to use scale all we would have to do is change
    //++b to something like b + 5 etc etc, matching
    //the highest divisible we want to use between the two numbers
    for (int b = 0; b < largest; ++b){
        int largestMinusCurrent = largest - b;
        if (b <= smallest){
            printf("%02d |  ############\n", largestMinusCurrent);
        } else {
            printf("%02d |  ############    $$$$$$$$$$$$\n", largestMinusCurrent);
        }
    }
    return 0;

}