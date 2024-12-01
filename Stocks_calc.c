#include<stdio.h>

int main()
{
    //Declaration
    int numShares;
    float buyPrice, currentPrice, yearlyFees;
    float initialCost, currentCost, profit;
    float totalProfit = 0.0;
    char stkName[12];

    //Data/input
    printf("*********************************\n");
    printf("            Stock 1              \n");
    printf("*********************************\n");
    printf("Enter stock name ");
    gets(stkName);
    printf("Enter number of shares ");
    scanf("%d", &numShares);
    printf("Enter the buy price, current price, fees ");
    scanf("%f%f%f", &buyPrice, &currentPrice, &yearlyFees);

    //Processing/calculations
    initialCost = numShares * buyPrice;
    currentCost = numShares * currentPrice;
    profit = currentCost - initialCost - yearlyFees;
    totalProfit = profit;

    //output
    printf("\nThe Stock name is    : %s\n", stkName);
    printf("The number of shares : %11d\n", numShares);
    printf("The buy price is     : $%10.2f\n", buyPrice);
    printf("The current price is : $%10.2f\n", currentPrice);
    printf("The fees is          : $%10.2f\n", yearlyFees);

    printf("\nThe initial cost is : $%10.2f", initialCost);
    printf("\nThe current cost is : $%10.2f", currentCost);
    printf("\nThe profit is       : $%10.2f", profit);


    //Data/input
    printf("\n \n*********************************\n");
    printf("            Stock 2              \n");
    printf("*********************************\n");
    getchar();
    printf("Enter stock name ");
    gets(stkName);
    printf("Enter number of shares ");
    scanf("%d", &numShares);
    printf("Enter the buy price, current price, fees ");
    scanf("%f%f%f", &buyPrice, &currentPrice, &yearlyFees);

    //Processing/calculations
    initialCost = numShares * buyPrice;
    currentCost = numShares * currentPrice;
    profit = currentCost - initialCost - yearlyFees;
    totalProfit = totalProfit + profit;

    //output
    printf("\nThe Stock name is    : %s\n", stkName);
    printf("The number of shares : %11d\n", numShares);
    printf("The buy price is     : $%10.2f\n", buyPrice);
    printf("The current price is : $%10.2f\n", currentPrice);
    printf("The fees is          : $%10.2f\n", yearlyFees);

    printf("\nThe initial cost is : $%10.2f", initialCost);
    printf("\nThe current cost is : $%10.2f", currentCost);
    printf("\nThe profit is       : $%10.2f", profit);


    //Data/input
    printf("\n \n*********************************\n");
    printf("            Stock 3              \n");
    printf("*********************************\n");
    getchar();
    printf("Enter stock name ");
    gets(stkName);
    printf("Enter number of shares ");
    scanf("%d", &numShares);
    printf("Enter the buy price, current price, fees ");
    scanf("%f%f%f", &buyPrice, &currentPrice, &yearlyFees);

    //Processing/calculations
    initialCost = numShares * buyPrice;
    currentCost = numShares * currentPrice;
    profit = currentCost - initialCost - yearlyFees;
    totalProfit = totalProfit + profit;

    //output
    printf("\nThe Stock name is    : %s\n", stkName);
    printf("The number of shares : %11d\n", numShares);
    printf("The buy price is     : $%10.2f\n", buyPrice);
    printf("The current price is : $%10.2f\n", currentPrice);
    printf("The fees is          : $%10.2f\n", yearlyFees);

    printf("\nThe initial cost is : $%10.2f", initialCost);
    printf("\nThe current cost is : $%10.2f", currentCost);
    printf("\nThe profit is       : $%10.2f", profit);


    //Data/input
    printf("\n \n*********************************\n");
    printf("            Stock 4              \n");
    printf("*********************************\n");
    getchar();
    printf("Enter stock name ");
    gets(stkName);
    printf("Enter number of shares ");
    scanf("%d", &numShares);
    printf("Enter the buy price, current price, fees ");
    scanf("%f%f%f", &buyPrice, &currentPrice, &yearlyFees);

    //Processing/calculations
    initialCost = numShares * buyPrice;
    currentCost = numShares * currentPrice;
    profit = currentCost - initialCost - yearlyFees;
    totalProfit = totalProfit + profit;

    //output
    printf("\nThe Stock name is    : %s\n", stkName);
    printf("The number of shares : %11d\n", numShares);
    printf("The buy price is     : $%10.2f\n", buyPrice);
    printf("The current price is : $%10.2f\n", currentPrice);
    printf("The fees is          : $%10.2f\n", yearlyFees);

    printf("\nThe initial cost is : $%10.2f", initialCost);
    printf("\nThe current cost is : $%10.2f", currentCost);
    printf("\nThe profit is       : $%10.2f", profit);


    //Data/input
    printf("\n \n*********************************\n");
    printf("            Stock 5              \n");
    printf("*********************************\n");
    getchar();
    printf("Enter stock name ");
    gets(stkName);
    printf("Enter number of shares ");
    scanf("%d", &numShares);
    printf("Enter the buy price, current price, fees ");
    scanf("%f%f%f", &buyPrice, &currentPrice, &yearlyFees);

    //Processing/calculations
    initialCost = numShares * buyPrice;
    currentCost = numShares * currentPrice;
    profit = currentCost - initialCost - yearlyFees;
    totalProfit = totalProfit + profit;

    //output
    printf("\nThe Stock name is    : %s\n", stkName);
    printf("The number of shares : %11d\n", numShares);
    printf("The buy price is     : $%10.2f\n", buyPrice);
    printf("The current price is : $%10.2f\n", currentPrice);
    printf("The fees is          : $%10.2f\n", yearlyFees);

    printf("\nThe initial cost is : $%10.2f", initialCost);
    printf("\nThe current cost is : $%10.2f", currentCost);
    printf("\nThe profit is       : $%10.2f", profit);

    printf("\n \nThe total profit for the 5 stocks is : $%10.2f", totalProfit);

    return 0;
}
