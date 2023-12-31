Q.No.1. Write a c-program to print your Name, Father’s name, age and Grade.

ANS 01:
       
       #include <stdio.h>

int main() {
    char name[] = "Aryan ali";
    char fatherName[] = "suleman";
    int age = 20;
    char grade = 'B';
    
    printf("Name: %s\n", name);
    printf("Father's Name: %s\n", fatherName);
    printf("Age: %d years\n", age);
    printf("Grade: %c\n", grade);
    
    return 0;
}


Q.No.2. Write a C-program that asks the user to enter two integer numbers and print the sum
and product of two given numbers.

ANS 02:
       
       #include <stdio.h>

int main() {
    int num1, num2, sum, product;

    printf("Enter 1st number? ");
    scanf("%d", &num1);

    printf("Enter 2nd number? ");
    scanf("%d", &num2);

    sum = num1 + num2;
    product = num1 * num2;

    printf("---------------------------------------\n");
    printf("Sum of %d and %d is : %d\n", num1, num2, sum);
    printf("Product of %d and %d is : %d\n", num1, num2, product);

    return 0;
}


Q.No.3. Write a C-program that asks the user to enter Basic pay and print pay-slip of the
Employee.

ANS 03:
     
      #include <stdio.h>

int main() {
    float basicPay, houseRentAllowance, medicalAllowance, computerAllowance, totalPay;

    // Input basic pay
    printf("Enter the basic pay: ");
    scanf("%f", &basicPay);

    // Calculate allowances
    houseRentAllowance = 0.25 * basicPay;
    medicalAllowance = 0.1 * basicPay;
    computerAllowance = 0.15 * basicPay;

    // Calculate total pay
    totalPay = basicPay + houseRentAllowance + medicalAllowance + computerAllowance;

    // Print the pay-slip
    printf("\n\n**** Pay Slip ****\n");
    printf("Basic Pay: %.2f\n", basicPay);
    printf("House Rent Allowance: %.2f\n", houseRentAllowance);
    printf("Medical Allowance: %.2f\n", medicalAllowance);
    printf("Computer Allowance: %.2f\n", computerAllowance);
    printf("-------------------------------\n");
    printf("Total Pay: %.2f\n", totalPay);
    printf("***********\n");

    return 0;
}

 
Q.No.4. Write a C-program to print the square and Cube of given number. 


ANS 04:

       #include <stdio.h>

int main() {
    int num, square, cube;
    
    printf("Please enter any one integer number? ");
    scanf("%d", &num);
    
    square = num * num;
    cube = num * num * num;
    
    printf("Square of %d is : %d\n", num, square);
    printf("Cube of %d is : %d\n", num, cube);
    
    return 0;
}

Q.No.5. Write a c-program to convert a given amount in Coins?

ANS 05: #include <stdio.h>

int main() {
    int amount, denominations[8] = {500, 100, 50, 20, 10, 5, 2, 1}, coins[8] = {0};
    
    printf("Enter any amount? ");
    scanf("%d", &amount);
    
    for(int i = 0; i < 8; i++) {
        coins[i] = amount / denominations[i];
        amount = amount % denominations[i];
    }
    
    for(int i = 0; i < 8; i++) {
        printf("%d ", denominations[i]);
    }
    printf("\n");
    
    for(int i = 0; i < 8; i++) {
        printf("%d ", coins[i]);
    }
    
    return 0;
}


Q.No.6. Write a program to take input of Seat No, Name, Subjects & Marks and calculate the
total and percentage, and display the output in the following format.


ANS 06:
  
     #include <stdio.h>

#define NUM_SUBJECTS 5

int main() {
    int seatNo, marks[NUM_SUBJECTS];
    char name[50];

    // Input seat number and name
    printf("Enter seat number: ");
    scanf("%d", &seatNo);
    printf("Enter name: ");
    scanf("%s", name);

    // Input marks for each subject
    printf("Enter marks for each subject:\n");
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Calculate total marks
    int totalMarks = 0;
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        totalMarks += marks[i];
    }

    // Calculate percentage
    float percentage = (float)totalMarks / NUM_SUBJECTS;

    // Print the result
    printf("\n\n**** Result ****\n");
    printf("Seat Number: %d\n", seatNo);
    printf("Name: %s\n", name);
    printf("----------------------------\n");
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("***********\n");

    return 0;
}

Q.No.07. Write a program in c to display as follows:

ANS 07:

     #include <stdio.h>

int main() {
    int num1, num2;
    int sum, product, difference, division, remainder, total;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the last number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    product = num1 * num2;
    difference = num1 - num2;
    division = num1 / num2;
    remainder = num1 % num2;
    total = sum + product + difference + division + remainder;

    printf("Sum of %d and %d is: %02d\n", num1, num2, sum);
    printf("Product of %d and %d is: %02d\n", num1, num2, product);
    printf("Difference between %d and %d is: %02d\n", num1, num2, difference);
    printf("Division of %d and %d is: %02d\n", num1, num2, division);
    printf("Remainder of %d and %d is: %02d\n", num1, num2, remainder);
    printf("--------------------------------------------------------------\n");
    printf("Total is: %02d\n", total);

    return 0;
}

Q.No.08. Write a c-program to convert a given Seconds into Hours, Minutes and Seconds?

ANS 08:
   
       #include <stdio.h>

int main() {
    int inputSeconds, hours, minutes, seconds;

    // Get the input from the user
    printf("Input Seconds? ");
    scanf("%d", &inputSeconds);

    // Calculate the hours, minutes, and seconds
    hours = inputSeconds / 3600;
    inputSeconds %= 3600;
    minutes = inputSeconds / 60;
    seconds = inputSeconds % 60;

    // Print the result
    printf("Hours Minutes Seconds\n");
    printf("%d %d %d\n", hours, minutes, seconds);

    return 0;
}

    
Q.No.09. Write a c-program to convert a given number of Days in terms of Years, Weeks and
Days.

ANS 09:


      #include <stdio.h>

void convertDays(int days, int *years, int *weeks, int *remainingDays) {
    *years = days / 365;
    days %= 365;
    *weeks = days / 7;
    *remainingDays = days % 7;
}

int main() {
    int days, years, weeks, remainingDays;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    convertDays(days, &years, &weeks, &remainingDays);

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", remainingDays);

    return 0;
}


Q.No.10. Write a program to read two integers N1 and N2 and Swap their values. 


ANS 10:

      #include <stdio.h>

int main() {
    int N1, N2, temp;

    printf("Enter value of N1: ");
    scanf("%d", &N1);

    printf("Enter value of N2: ");
    scanf("%d", &N2);

    printf("\nBefore swapping:\n");
    printf("Value of N1 is: %d\n", N1);
    printf("Value of N2 is: %d\n", N2);

    // Swap the values
    temp = N1;
    N1 = N2;
    N2 = temp;

    printf("\nAfter swapping:\n");
    printf("Value of N1 is: %d\n", N1);
    printf("Value of N2 is: %d\n", N2);

    return 0;
}

Q.No.11. Write a program that inputs one five-digit number, separates the number into its
individual digits and prints the digits separated from one another by three spaces and also print
sum of five-digits?


ANS 11:

       #include <stdio.h>

int main() {
    int number;
    printf("Please enter a five-digit number: ");
    scanf("%d", &number);

    // Extracting individual digits
    int digit1 = number / 10000;
    int digit2 = (number / 1000) % 10;
    int digit3 = (number / 100) % 10;
    int digit4 = (number / 10) % 10;
    int digit5 = number % 10;

    // Printing digits separated by three spaces
    printf("Separated from one another by three spaces: %d   %d   %d   %d   %d\n",
           digit1, digit2, digit3, digit4, digit5);

    // Calculating and printing the sum of the digits
    int sum = digit1 + digit2 + digit3 + digit4 + digit5;
    printf("Sum of five digits: %d\n", sum);

    return 0;
}

Q.No.12. Write a c program to print ASCII value of given character.
 Enter any Character ? A


ANS 12:

      #include <stdio.h>

int main() {
    char character;

    printf("Enter any character: ");
    scanf("%c", &character);

    printf("ASCII Value of %c character is: %d\n", character, character);

    return 0;
}

Q.No.13. Write a c program to reverse any number.

ANS 13:

      #include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;
    
    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    return reversed;
}

int main() {
    int number, reversedNumber;
    
    printf("Enter any number: ");
    scanf("%d", &number);
    
    reversedNumber = reverseNumber(number);
    
    printf("Reverse of %d is: %d\n", number, reversedNumber);
    
    return 0;
}

Q.No.14. Write a c program to find out sum of digits of given number.

ANS 14:

       #include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter any number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}