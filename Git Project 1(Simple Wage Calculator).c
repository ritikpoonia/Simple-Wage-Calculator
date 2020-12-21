#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name;
    char sernum;
    int dob = 0;
    int basicpay = 0;
    int deall = 0;
    int hrall = 0;
    int taxrate = 0;
    int otherall = 0;
    int homl = 0;
    int hlrate = 0;
    int personl = 0;
    int plrate = 0;
    int carl = 0;
    int clrate = 0;
    int othded = 0;
    double da = 0.0;
    double hra = 0.0;
    double taxes = 0.0;
    double hloanint = 0.0;
    double personlint = 0.0;
    double carlint = 0.0;
    double grosspay = 0.0;
    double deductions = 0.0;
    double netpay = 0.0;


    printf("Last Name: \n", name);
    scanf("%s",&name);

    printf("Employee Id: \n", sernum);
    scanf("%s", &sernum);

    printf("Date of Birth(ddmmyyyy): \n", dob);
    scanf("%d", &dob);

    printf("Basic Pay: \n", basicpay);
    scanf("%d", &basicpay);

    printf("Dearness Allowance(in percent): \n", deall);
    scanf("%d", &deall);

    printf("House Rent Allowance(in percent): \n", hrall);
    scanf("%d", &hrall);

    printf("TDS Taxrate(in Percent): \n", taxrate);
    scanf("%d", &taxrate);

    printf("Any other Allowance you Get: \n", otherall);
    scanf("%d", &otherall);

    printf("Home Loan: \n", homl);
    scanf("%d", &homl);

    printf("Home Loan Interest Rate(in %p.a.): \n", hlrate);
    scanf("%d", &hlrate);

    printf("Personal Loan: \n", personl);
    scanf("%d", &personl);

    printf("Personal Loan Interest Rate(in %p.a.): \n", plrate);
    scanf("%d", &plrate);

    printf("Car Loan: \n", carl);
    scanf("%d", &carl);

    printf("Car Loan Interest Rate(in %p.a.): \n", clrate);
    scanf("%d", &clrate);

    printf("Any Other Deduction: \n", othded);
    scanf("%d", &othded);

    da = (deall * basicpay)/100;
    hra = (hrall * basicpay)/100;
    taxes = (taxrate * basicpay)/100;
    hloanint = (hlrate * homl)/1200;
    personlint = (plrate * personl)/1200;
    carlint = (clrate * carl)/1200;
    grosspay = basicpay + da + hra + otherall;
    deductions = hloanint + personlint + carlint + othded;
    netpay = grosspay - deductions;

    printf("DA: %.2f\n", da);

    printf("HRA: %.2f\n", hra);

    printf("taxes: %.2f\n", taxes);

    printf("Home Loan Interst: %.2f\n", hloanint);

    printf("Personal Loan Interest: %.2f\n", personlint);

    printf("Car Loan Interest: %.2f\n", carlint);

    printf("Gross Pay: %.2f\n", grosspay);

    printf("Deductions: %.2f\n", deductions);

    printf("Net Pay: %.2f", netpay);





    return 0;



}
