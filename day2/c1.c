//1.Write a C Program to find the largest of three numbers using nested if statements

#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2) 
    {
        if (num1 >= num3) 
        {
            printf("%d is the largest number.\n", num1);
        } else 
        {
            printf("%d is the largest number.\n", num3);
        }
    } 
    else 
    {
        if (num2 >= num3) {
            printf("%d is the largest number.\n", num2);
        } else {
            printf("%d is the largest number.\n", num3);
        }
    }

return 0;
}

//2.Write a C Program to check if a year is a leap year or not using conditional statements.

#include<stdio.h>
int main()
{
    int a;
    printf("enter the three numbers:");
    scanf("%d",&a);
     if(a==366)
     {
       printf("it is a leap year");
     }
     else
     {
         printf("the year is not a leap year");
     }
     return 0;
}


//3.Write a C Program to check whether a character is a digit, alphabet, or special character using nested if.
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9') {
        printf("The character '%c' is a digit.\n", ch);
    } else {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            printf("The character '%c' is an alphabet.\n", ch);
        } else {
            printf("The character '%c' is a special character.\n", ch);
        }
    }

    return 0;
}

//4.Write a C Program to calculate the grade of a student based on marks using conditional statements (if-else if).
#include <stdio.h>

int main() 
{
    int sub1,sub2,sub3,sub4,total;
    float avg;
    printf("Enter marks of the subjects (out of 100): ");
    scanf("%d%d%d%d", &sub1,&sub2,&sub3,&sub4);
    total=sub1+sub2+sub3+sub4;
    avg=total/4;
    printf("%f",avg);
    if(avg<100)
    {if (sub1>35,sub2>35,sub3>35,sub4>35){
    if(avg>90) 
    {
        printf("Grade:A");
    } 
    else if(avg>80)
    {
        printf("Grade:B");
    }
    else if(avg>70)
    {
        printf("Grade:C");
    }
    else if(avg>60)
    {
        printf("Grade:D");
    }
    else if(avg>50)
    {
        printf("Grade:E");
    }
    else if(avg>30)
    {
        printf("passs better luck next time");
    }
    else
    {
        printf("Fail");
    }
    }
    }
return 0;
}

//5.Write a C Program to check whether the given three sides of a triangle form a valid right-angled triangle using conditional statements.

#include <stdio.h>
#include <math.h>

int main() 
{
    int opp, adj, hyp;
    float phyth;
    printf("Enter the length of the adjacent side: ");
    scanf("%d", &adj);
    printf("Enter the length of the opposite side: ");
    scanf("%d", &opp);
    printf("Enter the length of the hypotenuse: ");
    scanf("%d", &hyp);

  
    phyth = sqrt((adj * adj) + (opp * opp));


    if (hyp == (int)phyth) {
        printf("The triangle is a right triangle.\n");
    } else {
        printf("The triangle is not a right triangle.\n");
    }

    return 0;
}

//6.write a c program to determine the smallest of four numbers using nested if statements

  #include <stdio.h>
int main()
{
int n1,n2,n3,n4; 
printf("enter the numbers"); 
scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
if(n1<n2 && n1<n3 && n1<n4)
	{
		printf("%d is the smallest number.",n1);
	}
	else if(n2<n3 && n2<n4)
	{
		printf("%d is the smallest number.",n2);
	}
	else if(n3<n4)
	{
		printf("%d is the smallest number.",n3);
	}	
	else
	{
	  printf("%d is the smallest number.",n4);
	}
	return 0;
}

//7.Write a C Program to calculate the electricity bill based on units consumed:
First 100 units: Rs. 5 per unit
Next 200 units: Rs. 7 per unit
Above 300 units: Rs. 10 per unit

  #include <stdio.h>

int main() {
    int units;
    float bill = 0;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;  
    }
    else if (units <= 300) {
        bill = (100 * 5) + ((units - 100) * 7);  
    }
    else {
        bill = (100 * 5) + (200 * 7) + ((units - 300) * 10); 
    }
    printf("Total electricity bill: Rs. %.2f\n", bill);

    return 0;
}

//8.Write a c program to check weather a number the roots of a quadratic equation are real,imaginary,or equal using nested if.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;
    printf("Enter the coefficients a, b, and c :\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else {
        if (discriminant == 0) {
            root1 = -b / (2 * a);
            printf("The roots are real and equal:\n");
            printf("Root 1 = Root 2 = %.2f\n", root1);
        } else {
            printf("The roots are imaginary.\n");
        }
    }

    return 0;
}

//9.Write a c program to check whether a number is divisible by 2,3 or both using nested if.
#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        if (number % 3 == 0) {
            printf("The number is divisible by both 2 and 3.\n");
        } else {
            printf("The number is divisible by 2 but not by 3.\n");
        }
    } else {
        if (number % 3 == 0) {
            printf("The number is divisible by 3 but not by 2.\n");
        } else {
            printf("The number is divisible by neither 2 nor 3.\n");
        }
    }

    return 0;
}
              
//10.Write a C Program to check if an inputted number is divisible by both 4 and 6, either one of them, or neither using nested if.
#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 4 == 0) {
        if (number % 6 == 0) {
            printf("%d is divisible by both 4 and 6.\n", number);
        } else {
            printf("%d is divisible by 4 but not by 6.\n", number);
        }
    } else {
        if (number % 6 == 0) {
            printf("%d is divisible by 6 but not by 4.\n", number);
        } else {
            printf("%d is not divisible by either 4 or 6.\n", number);
        }
    }

    return 0;
}