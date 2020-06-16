#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long number;

    // Receiving the credit card number
    do
    {
        number = get_long("Number: ");

        if (number < 1000000000000)
        {
            printf("INVALID\n");
            break;
        }

    }
    while (number < 1000000000000 || number > 9999999999999999);

    // Declaration of using variables
    int dig1_13, dig2_13, dig3_13, dig4_13, dig5_13, dig6_13, dig7_13, dig8_13, dig9_13, dig10_13, dig11_13, dig12_13, dig13_13;

    // Identifying VISA 13 digit numbers
    if (number > 999999999999 & number < 10000000000000)
    {
        // Sorting out the digits of credit card number
        dig1_13 = number % 10;
        dig2_13 = ((number % 100) - (number % 10)) / 10;
        dig3_13 = ((number % 1000) - (number % 100)) / 100;
        dig4_13 = ((number % 10000) - (number % 1000)) / 1000;
        dig5_13 = ((number % 100000) - (number % 10000)) / 10000;
        dig6_13 = ((number % 1000000) - (number % 100000)) / 100000;
        dig7_13 = ((number % 10000000) - (number % 1000000)) / 1000000;
        dig8_13 = ((number % 100000000) - (number % 10000000)) / 10000000;
        dig9_13 = ((number % 1000000000) - (number % 100000000)) / 100000000;
        dig10_13 = ((number % 10000000000) - (number % 1000000000)) / 1000000000;
        dig11_13 = ((number % 100000000000) - (number % 10000000000)) / 10000000000;
        dig12_13 = ((number % 1000000000000) - (number % 100000000000)) / 100000000000;
        dig13_13 = ((number % 10000000000000) - (number % 1000000000000)) / 1000000000000;

        // Declaration of using variables
        int ddig2_13, ddig4_13, ddig6_13, ddig8_13, ddig10_13, ddig12_13;
        int newddig2_13, newddig4_13, newddig6_13, newddig8_13, newddig10_13, newddig12_13;
        int sum1_13, sum2_13;

        ddig2_13 = 2 * dig2_13;
        
        // Checking if each digit has one or two numbers

        if (ddig2_13 > 9)
        {
            newddig2_13 = (ddig2_13 % 10) + ((ddig2_13 - ddig2_13 % 10)) / 10;
        }
        else
        {
            newddig2_13 = ddig2_13;
        }

        ddig4_13 = 2 * dig4_13;

        if (ddig4_13 > 9)
        {
            newddig4_13 = (ddig4_13 % 10) + ((ddig4_13 - ddig4_13 % 10)) / 10;
        }
        else
        {
            newddig4_13 = ddig4_13;
        }

        ddig6_13 = 2 * dig6_13;

        if (ddig6_13 > 9)
        {
            newddig6_13 = (ddig6_13 % 10) + ((ddig6_13 - ddig6_13 % 10)) / 10;
        }
        else
        {
            newddig6_13 = ddig6_13;
        }

        ddig8_13 = 2 * dig8_13;

        if (ddig8_13 > 9)
        {
            newddig8_13 = (ddig8_13 % 10) + ((ddig8_13 - ddig8_13 % 10)) / 10;
        }
        else
        {
            newddig8_13 = ddig8_13;
        }

        ddig10_13 = 2 * dig10_13;

        if (ddig10_13 > 9)
        {
            newddig10_13 = (ddig10_13 % 10) + ((ddig10_13 - ddig10_13 % 10)) / 10;
        }
        else
        {
            newddig10_13 = ddig10_13;
        }

        ddig12_13 = 2 * dig12_13;

        if (ddig12_13 > 9)
        {
            newddig12_13 = (ddig12_13 % 10) + ((ddig12_13 - ddig12_13 % 10)) / 10;
        }
        else
        {
            newddig12_13 = ddig12_13;
        }

        // Checking Luhn's Algorithm
        sum1_13 = newddig2_13 + newddig4_13 + newddig6_13 + newddig8_13 + newddig10_13 + newddig12_13;
        sum2_13 = sum1_13 + dig1_13 + dig3_13 + dig5_13 + dig7_13 + dig9_13 + dig11_13 + dig13_13;

        if (sum2_13 % 10 == 0 & dig13_13 == 4)
        {
            printf("Visa\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }

    // Declaration of using variables
    int dig1_15, dig2_15, dig3_15, dig4_15, dig5_15, dig6_15, dig7_15, dig8_15, dig9_15, dig10_15, dig11_15, dig12_15, dig13_15, 
        dig14_15, dig15_15;

    // Identifying AMEX numbers
    if (number > 99999999999999 & number < 1000000000000000)
    {
        // Sorting out the digits of credit card number
        dig1_15 = number % 10;
        dig2_15 = ((number % 100) - (number % 10)) / 10;
        dig3_15 = ((number % 1000) - (number % 100)) / 100;
        dig4_15 = ((number % 10000) - (number % 1000)) / 1000;
        dig5_15 = ((number % 100000) - (number % 10000)) / 10000;
        dig6_15 = ((number % 1000000) - (number % 100000)) / 100000;
        dig7_15 = ((number % 10000000) - (number % 1000000)) / 1000000;
        dig8_15 = ((number % 100000000) - (number % 10000000)) / 10000000;
        dig9_15 = ((number % 1000000000) - (number % 100000000)) / 100000000;
        dig10_15 = ((number % 10000000000) - (number % 1000000000)) / 1000000000;
        dig11_15 = ((number % 100000000000) - (number % 10000000000)) / 10000000000;
        dig12_15 = ((number % 1000000000000) - (number % 100000000000)) / 100000000000;
        dig13_15 = ((number % 10000000000000) - (number % 1000000000000)) / 1000000000000;
        dig14_15 = ((number % 100000000000000) - (number % 10000000000000)) / 10000000000000;
        dig15_15 = ((number % 1000000000000000) - (number % 100000000000000)) / 100000000000000;

        // Declaration of using variables
        int ddig2_15, ddig4_15, ddig6_15, ddig8_15, ddig10_15, ddig12_15, ddig14_15;
        int newddig2_15, newddig4_15, newddig6_15, newddig8_15, newddig10_15, newddig12_15, newddig14_15;
        int sum1_15, sum2_15;

        // Checking if each digit has one or two numbers

        ddig2_15 = 2 * dig2_15;

        if (ddig2_15 > 9)
        {
            newddig2_15 = (ddig2_15 % 10) + ((ddig2_15 - ddig2_15 % 10)) / 10;
        }
        else
        {
            newddig2_15 = ddig2_15;
        }

        ddig4_15 = 2 * dig4_15;

        if (ddig4_15 > 9)
        {
            newddig4_15 = (ddig4_15 % 10) + ((ddig4_15 - ddig4_15 % 10)) / 10;
        }
        else
        {
            newddig4_15 = ddig4_15;
        }

        ddig6_15 = 2 * dig6_15;

        if (ddig6_15 > 9)
        {
            newddig6_15 = (ddig6_15 % 10) + ((ddig6_15 - ddig6_15 % 10)) / 10;
        }
        else
        {
            newddig6_15 = ddig6_15;
        }

        ddig8_15 = 2 * dig8_15;

        if (ddig8_15 > 9)
        {
            newddig8_15 = (ddig8_15 % 10) + ((ddig8_15 - ddig8_15 % 10)) / 10;
        }
        else
        {
            newddig8_15 = ddig8_15;
        }

        ddig10_15 = 2 * dig10_15;

        if (ddig10_15 > 9)
        {
            newddig10_15 = (ddig10_15 % 10) + ((ddig10_15 - ddig10_15 % 10)) / 10;
        }
        else
        {
            newddig10_15 = ddig10_15;
        }

        ddig12_15 = 2 * dig12_15;

        if (ddig12_15 > 9)
        {
            newddig12_15 = (ddig12_15 % 10) + ((ddig12_15 - ddig12_15 % 10)) / 10;
        }
        else
        {
            newddig12_15 = ddig12_15;
        }

        ddig14_15 = 2 * dig14_15;

        if (ddig14_15 > 9)
        {
            newddig14_15 = (ddig14_15 % 10) + ((ddig14_15 - ddig14_15 % 10)) / 10;
        }
        else
        {
            newddig14_15 = ddig14_15;
        }

        // Checking Luhn's Algorithm
        sum1_15 = newddig2_15 + newddig4_15 + newddig6_15 + newddig8_15 + newddig10_15 + newddig12_15 + newddig14_15;
        sum2_15 = sum1_15 + dig1_15 + dig3_15 + dig5_15 + dig7_15 + dig9_15 + dig11_15 + dig13_15 + dig15_15;

        if (sum2_15 % 10 == 0)
        {
            if (10 * dig15_15 + dig14_15 == 34 || 10 * dig15_15 + dig14_15 == 37)
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }

    // Declaration of using variables
    int dig1_16, dig2_16, dig3_16, dig4_16, dig5_16, dig6_16, dig7_16, dig8_16, dig9_16, dig10_16, dig11_16, dig12_16, dig13_16,
        dig14_16, dig15_16, dig16_16;

    // Identifying VISA 16 digit and MASTERCARD numbers
    if (number > 999999999999999 & number < 10000000000000000)
    {
        // Sorting out the digits of credit card number
        dig1_16 = number % 10;
        dig2_16 = ((number % 100) - (number % 10)) / 10;
        dig3_16 = ((number % 1000) - (number % 100)) / 100;
        dig4_16 = ((number % 10000) - (number % 1000)) / 1000;
        dig5_16 = ((number % 100000) - (number % 10000)) / 10000;
        dig6_16 = ((number % 1000000) - (number % 100000)) / 100000;
        dig7_16 = ((number % 10000000) - (number % 1000000)) / 1000000;
        dig8_16 = ((number % 100000000) - (number % 10000000)) / 10000000;
        dig9_16 = ((number % 1000000000) - (number % 100000000)) / 100000000;
        dig10_16 = ((number % 10000000000) - (number % 1000000000)) / 1000000000;
        dig11_16 = ((number % 100000000000) - (number % 10000000000)) / 10000000000;
        dig12_16 = ((number % 1000000000000) - (number % 100000000000)) / 100000000000;
        dig13_16 = ((number % 10000000000000) - (number % 1000000000000)) / 1000000000000;
        dig14_16 = ((number % 100000000000000) - (number % 10000000000000)) / 10000000000000;
        dig15_16 = ((number % 1000000000000000) - (number % 100000000000000)) / 100000000000000;
        dig16_16 = ((number % 10000000000000000) - (number % 1000000000000000)) / 1000000000000000;

        // Declaration of using variables
        int ddig2_16, ddig4_16, ddig6_16, ddig8_16, ddig10_16, ddig12_16, ddig14_16, ddig16_16;
        int newddig2_16, newddig4_16, newddig6_16, newddig8_16, newddig10_16, newddig12_16, newddig14_16, newddig16_16;
        int sum1_16, sum2_16;

        // Checking if each digit has one or two numbers

        ddig2_16 = 2 * dig2_16;

        if (ddig2_16 > 9)
        {
            newddig2_16 = (ddig2_16 % 10) + ((ddig2_16 - ddig2_16 % 10)) / 10;
        }
        else
        {
            newddig2_16 = ddig2_16;
        }

        ddig4_16 = 2 * dig4_16;

        if (ddig4_16 > 9)
        {
            newddig4_16 = (ddig4_16 % 10) + ((ddig4_16 - ddig4_16 % 10)) / 10;
        }
        else
        {
            newddig4_16 = ddig4_16;
        }

        ddig6_16 = 2 * dig6_16;

        if (ddig6_16 > 9)
        {
            newddig6_16 = (ddig6_16 % 10) + ((ddig6_16 - ddig6_16 % 10)) / 10;
        }
        else
        {
            newddig6_16 = ddig6_16;
        }

        ddig8_16 = 2 * dig8_16;

        if (ddig8_16 > 9)
        {
            newddig8_16 = (ddig8_16 % 10) + ((ddig8_16 - ddig8_16 % 10)) / 10;
        }
        else
        {
            newddig8_16 = ddig8_16;
        }

        ddig10_16 = 2 * dig10_16;

        if (ddig10_16 > 9)
        {
            newddig10_16 = (ddig10_16 % 10) + ((ddig10_16 - ddig10_16 % 10)) / 10;
        }
        else
        {
            newddig10_16 = ddig10_16;
        }

        ddig12_16 = 2 * dig12_16;

        if (ddig12_16 > 9)
        {
            newddig12_16 = (ddig12_16 % 10) + ((ddig12_16 - ddig12_16 % 10)) / 10;
        }
        else
        {
            newddig12_16 = ddig12_16;
        }

        ddig14_16 = 2 * dig14_16;

        if (ddig14_16 > 9)
        {
            newddig14_16 = (ddig14_16 % 10) + ((ddig14_16 - ddig14_16 % 10)) / 10;
        }
        else
        {
            newddig14_16 = ddig14_16;
        }

        ddig16_16 = 2 * dig16_16;

        if (ddig16_16 > 9)
        {
            newddig16_16 = (ddig16_16 % 10) + ((ddig16_16 - ddig16_16 % 10)) / 10;
        }
        else
        {
            newddig16_16 = ddig16_16;
        }

        // Checking Luhn's Algorithm
        sum1_16 = newddig2_16 + newddig4_16 + newddig6_16 + newddig8_16 + newddig10_16 + newddig12_16 + newddig14_16 + newddig16_16;
        sum2_16 = sum1_16 + dig1_16 + dig3_16 + dig5_16 + dig7_16 + dig9_16 + dig11_16 + dig13_16 + dig15_16;

        if (sum2_16 % 10 == 0)
        {
            if (10 * dig16_16 + dig15_16 == 51 || 10 * dig16_16 + dig15_16 == 52 || 10 * dig16_16 + dig15_16 == 53
                || 10 * dig16_16 + dig15_16 == 54 || 10 * dig16_16 + dig15_16 == 55)
            {
                printf("MASTERCARD\n");
            }
            else if (dig16_16 == 4)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
}