#include <stdio.h>
#include <limits.h>

int numPlaces (int x)
{
    if (x < 0) return numPlaces ((x == INT_MIN) ? INT_MAX : -x);
        if (x < 10) return 1;
            return 1 + numPlaces (x / 10);
}


int main(void)
{
    printf("Enter two numbers: ");
    int one, two;
    scanf("%d %d", &one, &two);

    int largest = one > two ? one : two;
    int smallest = one > two ? two : one;
    int difference = largest - smallest;
    int highestDivisible;
    //find highest divisible by iterating through
    //the size of the smallest for like divisibility
    //between smallest and largest
    for (int i = 1; i <= smallest; ++i){
        if (largest % i == 0 && smallest % i == 0)
            highestDivisible = i;
    }

    printf("\n\n\n");
    //iterate through the largest value
    //if number is less than smallest then print
    //only the largest
    //else print both largest and smallest lines
    //
    //to use scale all we would have to do is change
    //++b to something like b + 5 etc etc, matching
    //the highest divisible we want to use between the two numbers
    //use an argument specified precision to make graphlines have same whitespace
    
    int largestNumberSize = numPlaces(largest);
    for (int b = 0; b < largest; b += highestDivisible){
        int largestMinusCurrent = largest - b;
        if (b < largest - smallest){
            printf("%*d |  ############\n", largestNumberSize, largestMinusCurrent);
        } else {
            printf("%*d |  ############    $$$$$$$$$$$$\n", largestNumberSize, largestMinusCurrent);
        }
    }
    return 0;

}
