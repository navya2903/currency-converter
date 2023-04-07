#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    converter();
	do{
		int c;
		printf("\nDo you want to continue:\n1.YES\n0.NO:\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:converter();
			  break;
			case 0:printf("                            **THANK YOU**             ");
		    	exit(0);
		}
	}while(!0);
}

int converter()
{
    char currency1[100],currency2[100];
    float amount1,amount2;
    printf("\n :::::::::::::::::::::::::::::::::::::::::::::::::::::   WELCOME   ::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("\n                                           ENTER THE CURRENCY YOU WANT:                      ");
    printf("\n                             ****************************************************************");
    printf("\n                             *                       1.dollar                               *");
    printf("\n                             *                       2.rupee                                *");
    printf("\n                             *                       3.united_arab_emirates                 *");
    printf("\n                             *                       4.chinese_yuan                         *");
    printf("\n                             *                       5.autralian_dollar                     *");
    printf("\n                             *                       6.euro                                 *");
    printf("\n                             *                       7.singapore_dollar                     *");
    printf("\n                             *                       8.pound                                *");
    printf("\n                             *                       9.canadian_dollar                      *");
    printf("\n                             *                       10.exit                                *");
    printf("\n                             ****************************************************************\n");
    scanf("%s",currency1);
    printf("\n                             *****************************************************************");
    printf("\n                                            ENTER THE AMOUNT YOU WISH TO CHANGE:             ");
    printf("\n                             *****************************************************************\n");
    scanf("%f",&amount1);
    printf("\n                                           ENTER THE CURRENCY YOU TO CONVERT TO:             ");
    printf("\n                             *****************************************************************");
    printf("\n                             *                       1.dollar                                *");
    printf("\n                             *                       2.rupee                                 *");
    printf("\n                             *                       3.united_arab_emirates                  *");
    printf("\n                             *                       4.chinese_yuan                          *");
    printf("\n                             *                       5.autralian_dollar                      *");
    printf("\n                             *                       6.euro                                  *");
    printf("\n                             *                       7.singapore_dollar                      *");
    printf("\n                             *                       8.pound                                 *");
    printf("\n                             *                       9.canadian_dollar                       *");
    printf("\n                             *****************************************************************\n");
    scanf("%s",currency2);
    printf("\n");

    if(!strcmpi(currency1,"dollar"))
    {
        if(!strcmpi(currency2,"rupee"))
        {
            amount2 = (74.87) * (amount1);
            printf("the required amount in rupees is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"dollar"))
        {
            amount2 = (1) * (amount1);
            printf("the required amount in dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"united_arab_emirates"))
        {
            amount2 = (3.67) * (amount1);
            printf("the required amount in united_arab_emirates is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"chinese_yuan"))
        {
            amount2 = (6.38) * (amount1);
            printf("the required amount in chinese_yuan is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"australian_dollar"))
        {
            amount2 = (1.40) *(amount1);
            printf("the required amount in australian_dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"euro"))
        {
            amount2 = (0.88) * (amount1);
            printf("the required amount in euro is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"singapore_dollar"))
        {
            amount2 = (1.37) * (amount1);
            printf("the required amount in singapore_dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"pound"))
        {
            amount2 = (0.74) * (amount1);
            printf("the required amount in pounds is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"canadian_dollar"))
        {
            amount2 = (1.28) * (amount1);
            printf("the required amount in canadian_dollar is %.2f",amount2);
        }
        else{
            printf("thank you");
        }
    }
     else if(!strcmpi(currency1,"rupee"))
    {
        if(!strcmpi(currency2,"rupee"))
        {
            amount2 = (1) * (amount1);
            printf("the required amount in rupees is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"dollar"))
        {
            amount2 = (0.013) * (amount1);
            printf("the required amount in dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"united_arab_emirates"))
        {
            amount2 = (0.049) * (amount1);
            printf("the required amount in united_arab_emirates is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"chinese_yuan"))
        {
            amount2 = (0.085) * (amount1);
            printf("the required amount in chinese_yuan is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"australian_dollar"))
        {
            amount2 = (0.019) *(amount1);
            printf("the required amount in australian_dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"euro"))
        {
            amount2 = (0.012) * (amount1);
            printf("the required amount in euro is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"singapore_dollar"))
        {
            amount2 = (0.018) * (amount1);
            printf("the required amount in singapore_dollar is %.2f",amount2);
        }
         else if(!strcmpi(currency2,"pound"))
        {
            amount2 = (0.0100) * (amount1);
            printf("the required amount in pounds is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"canadian_dollar"))
        {
            amount2 = (0.017) * (amount1);
            printf("the required amount in canadian_dollar is %.2f",amount2);
        }
        else{
            printf("thank you");
        }
    }
    else if(!strcmpi(currency1,"united_arab_emirates"))
    {
        if(!strcmpi(currency2,"united_arab_emirates"))
        {
            amount2 = (1) * (amount1);
            printf("the required amount in united_arab_emirates is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"dollar"))
        {
            amount2 = (0.27) * (amount1);
            printf("the required amount in dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"rupee"))
        {
            amount2 = (20.48) * (amount1);
            printf("the required amount in rupee is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"chinese_yuan"))
        {
            amount2 = (1.74) * (amount1);
            printf("the required amount in chinese_yuan is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"australian_dollar"))
        {
            amount2 = (0.39) *(amount1);
            printf("the required amount in australian_dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"euro"))
        {
            amount2 = (0.24) * (amount1);
            printf("the required amount in euro is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"singapore_dollar"))
        {
            amount2 = (0.37) * (amount1);
            printf("the required amount in singapore_dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"pound"))
        {
            amount2 = (0.20) * (amount1);
            printf("the required amount in pounds is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"canadian"))
        {
            amount2 = (0.35) * (amount1);
            printf("the required amount in canadian_dollar is %.2f",amount2);
        }
        else{
            printf("thank you");
        }
    }
    else if(!strcmpi(currency1,"chinese_yuan"))
    {
        if(!strcmpi(currency2,"chinese_yuan"))
        {
            amount2 = (1) * (amount1);
            printf("the required amount in chinese_yuan is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"dollar"))
        {
            amount2 = (0.16) * (amount1);
            printf("the required amount in dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"united_arab_emirates"))
        {
            amount2 = (0.58) * (amount1);
            printf("the required amount in united_arab_emirates is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"rupee"))
        {
            amount2 = (11.80) * (amount1);
            printf("the required amount in rupee is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"australian_dollar"))
        {
            amount2 = (0.22) *(amount1);
            printf("the required amount in australian_dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"euro"))
        {
            amount2 = (0.14) * (amount1);
            printf("the required amount in euro is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"singapore_dollar"))
        {
            amount2 = (0.22) * (amount1);
            printf("the required amount in singapore_dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"pound"))
        {
            amount2 = (0.12) * (amount1);
            printf("the required amount in pounds is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"canadian_dollar"))
        {
            amount2 = (0.20) * (amount1);
            printf("the required amount in canadian_dollar is %.2f",amount2);
        }
        else{
            printf("thank you");
        }
    }
    else if(!strcmpi(currency1,"australian_dollar"))
    {
        if(!strcmpi(currency2,"rupee"))
        {
            amount2 = (53.72) * (amount1);
            printf("the required amount in rupees is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"dollar"))
        {
            amount2 = (0.70) * (amount1);
            printf("the required amount in dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"united_arab_emirates"))
        {
            amount2 = (2.57) * (amount1);
            printf("the required amount in united_arab_emirates is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"chinese_yuan"))
        {
            amount2 = (4.47) * (amount1);
            printf("the required amount in chinese_yuan is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"australian_dollar"))
        {
            amount2 = (1) *(amount1);
            printf("the required amount in australian_dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"euro"))
        {
            amount2 = (0.012) * (amount1);
            printf("the required amount in euro is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"singapore_dollar"))
        {
            amount2 = (0.96) * (amount1);
            printf("the required amount in singapore_dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"pound"))
        {
            amount2 = (0.54) * (amount1);
            printf("the required amount in pounds is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"canadian_dollar"))
        {
            amount2 = (0.90) * (amount1);
            printf("the required amount in canadian_dollar is %.2f",amount2);
        }
        else{
            printf("thank you");
        }
    }
    else if(!strcmpi(currency1,"euro"))
    {
        if(!strcmpi(currency2,"rupee"))
        {
            amount2 = (85.13) * (amount1);
            printf("the required amount in rupees is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"dollar"))
        {
            amount2 = (1.13) * (amount1);
            printf("the required amount in dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"united_arab_emirates"))
        {
            amount2 = (4.16) * (amount1);
            printf("the required amount in united_arab_emirates is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"chinese_yuan"))
        {
            amount2 = (7.22) * (amount1);
            printf("the required amount in chinese_yuan is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"australian_dollar"))
        {
            amount2 = (1.62) *(amount1);
            printf("the required amount in australian_dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"euro"))
        {
            amount2 = (1) * (amount1);
            printf("the required amount in euro is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"singapore_dollar"))
        {
            amount2 = (1.55) * (amount1);
            printf("the required amount in singapore_dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"pound"))
        {
            amount2 = (0.84) * (amount1);
            printf("the required amount in pounds is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"canadian_dollar"))
        {
            amount2 = (1.46) * (amount1);
            printf("the required amount in canadian_dollar is %.2f",amount2);
        }
        else{
            printf("thank you");
        }
    }
    else if(!strcmpi(currency1,"singapore_dollar"))
    {
        if(!strcmpi(currency2,"rupee"))
        {
            amount2 = (54.82) * (amount1);
            printf("the required amount in rupees is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"dollar"))
        {
            amount2 = (0.73) * (amount1);
            printf("the required amount in dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"united_arab_emirates"))
        {
            amount2 = (2.68) * (amount1);
            printf("the required amount in united_arab_emirates is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"chinese_yuan"))
        {
            amount2 = (4.65) * (amount1);
            printf("the required amount in chinese_yuan is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"australian_dollar"))
        {
            amount2 = (1.04) *(amount1);
            printf("the required amount in australian_dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"euro"))
        {
            amount2 = (0.64) * (amount1);
            printf("the required amount in euro is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"singapore_dollar"))
        {
            amount2 = (1) * (amount1);
            printf("the required amount in singapore_dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"pound"))
        {
            amount2 = (0.55) * (amount1);
            printf("the required amount in pounds is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"canadian_dollar"))
        {
            amount2 = (0.94) * (amount1);
            printf("the required amount in canadian_dollar is %.2f",amount2);
        }
        else{
            printf("thank you");
        }
    }
    else if(!strcmpi(currency1,"canadian_dollar"))
    {
        if(!strcmpi(currency2,"rupee"))
        {
            amount2 = (58.56) * (amount1);
            printf("the required amount in rupees is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"dollar"))
        {
            amount2 = (0.78) * (amount1);
            printf("the required amount in dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"united_arab_emirates"))
        {
            amount2 = (2.86) * (amount1);
            printf("the required amount in united_arab_emirates is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"chinese_yuan"))
        {
            amount2 = (4.96) * (amount1);
            printf("the required amount in chinese_yuan is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"australian_dollar"))
        {
            amount2 = (1.11) *(amount1);
            printf("the required amount in australian_dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"euro"))
        {
            amount2 = (0.69) * (amount1);
            printf("the required amount in euro is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"singapore_dollar"))
        {
            amount2 = (1.07) * (amount1);
            printf("the required amount in singapore_dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"pound"))
        {
            amount2 = (0.58) * (amount1);
            printf("the required amount in pounds is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"canadian_dollar"))
        {
            amount2 = (1) * (amount1);
            printf("the required amount in canadian_dollar is %.2f",amount2);
        }
        else{
            printf("thank you");
        }
    }
    else if(!strcmpi(currency1,"pound"))
    {
        if(!strcmpi(currency2,"rupee"))
        {
            amount2 = (100.48) * (amount1);
            printf("the required amount in rupees is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"dollar"))
        {
            amount2 = (1.35) * (amount1);
            printf("the required amount in dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"united_arab_emirates"))
        {
            amount2 = (4.96) * (amount1);
            printf("the required amount in united_arab_emirates is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"chinese_yuan"))
        {
            amount2 = (8.58) * (amount1);
            printf("the required amount in chinese_yuan is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"australian_dollar"))
        {
            amount2 = (1.86) *(amount1);
            printf("the required amount in australian_dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"euro"))
        {
            amount2 = (1.19) * (amount1);
            printf("the required amount in euro is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"singapore_dollar"))
        {
            amount2 = (1.82) * (amount1);
            printf("the required amount in singapore_dollar is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"pound"))
        {
            amount2 = (1) * (amount1);
            printf("the required amount in pounds is %.2f",amount2);
        }
        else if(!strcmpi(currency2,"canadian_dollar"))
        {
            amount2 = (1.71) * (amount1);
            printf("the required amount in canadian_dollar is %.2f",amount2);
        }
        else{
            printf("thank you");
        }
    }
    else{
    printf("thank you");
    }
}
