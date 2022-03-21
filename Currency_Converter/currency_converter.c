#include<stdio.h>
#include<stdlib.h>
float currency_from,currency_to;
int choice;
int br_point;
char country_from,country_to;
void bdtToUsd()
{
    system("cls");
    projectName();
    system("color e4");
    printf("\t\t\t##\tYou are most welcome\t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tBDT to USD\t \t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEnter BDT value\t ");
    scanf("%f",&currency_from );
    printf("\t\t\t##                                           ##\n");
    currency_to = currency_from/85.61;
    printf("\t\t\t##   USD dollar = %f  \t             ##\n",currency_to);
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}
void usdToBdt()
{
    system("cls");
    projectName();
    system("color e4");
    printf("\t\t\t##\tYou are most welcome\t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tUSD to BDT\t                     ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEnter USD value\t ");
    scanf("%f",&currency_from);
    currency_to = currency_from*85.61;
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##   BDT Taka = %f  \t             ##\n",currency_to);
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}

void usdToInd()
{
    system("cls");
    projectName();
    system("color b0");
    printf("\t\t\t##\tYou are most welcome\t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tUSD to Indian\t                     ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEnter USD value\t  ");
    scanf("%f",&currency_from);
    currency_to = currency_from*74.19;
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tIndian Rupee = %f            ##\n",currency_to);
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}
void IndTousd()
{
    system("cls");
    projectName();
    system("color b0");
    printf("\t\t\t##\tYou are most welcome\t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tIndian to USD\t                     ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEnter Indian value    ");
    scanf("%f",&currency_from);
    currency_to = currency_from/74.19;
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tUSD dollar = %f                ##\n",currency_to);
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}
void BdtToAud()
{
    system("cls");
    projectName();
    system("color f9");
    printf("\t\t\t##\tYou are most welcome\t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tBDT to AUD\t                     ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEnter BDT value    ");
    scanf("%f",&currency_from);
    currency_to = currency_from/62.01;
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tAUD dollar = %f                ##\n",currency_to);
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}
void AudToBdt()
{
    system("cls");
    projectName();
    system("color f9");
    printf("\t\t\t##\tYou are most welcome\t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tBDT to AUD\t                     ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEnter AUD value    ");
    scanf("%f",&currency_from);
    currency_to = currency_from*62.01;
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tBDT Taka = %f                  ##\n",currency_to);
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}
void BdtToInd()
{
    system("cls");
    projectName();
    system("color f3");
    printf("\t\t\t##\tYou are most welcome\t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tBDT to Indian\t                     ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEnter BDT value\t  ");
    scanf("%f",&currency_from);
    currency_to = currency_from/1.15;
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tIndian Rupee = %f              ##\n",currency_to);
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}
void IndToBdt()
{
    system("cls");
    projectName();
    system("color f3");
    printf("\t\t\t##\tYou are most welcome\t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tIndian to BDT\t                     ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEnter Indian value  ");
    scanf("%f",&currency_from);
    currency_to = currency_from*1.15;
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tBDT Taka = %f                 ##\n",currency_to);
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}
void bdtTomr()
{
    system("cls");
    projectName();
    system("color 0d");
    printf("\t\t\t##\tYou are most welcome\t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tBDT to MR\t \t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEnter BDT value\t ");
    scanf("%f",&currency_from );
    printf("\t\t\t##                                           ##\n");
    currency_to = currency_from/20.56;
    printf("\t\t\t##   M Ringgit = %f  \t             ##\n",currency_to);
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}
void mrToBdt()
{
    system("cls");
    projectName();
    system("color 0d");
    printf("\t\t\t##\tYou are most welcome\t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tMR to BDT\t                     ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEnter MR value\t ");
    scanf("%f",&currency_from);
    currency_to = currency_from*20.56;
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##   BDT Taka = %f  \t             ##\n",currency_to);
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}
void bdtTocny()
{
    system("cls");
    projectName();
    system("color e4");
    printf("\t\t\t##\tYou are most welcome\t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tBDT to CNY\t \t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEnter BDT value\t ");
    scanf("%f",&currency_from );
    printf("\t\t\t##                                           ##\n");
    currency_to = currency_from/13.55;
    printf("\t\t\t##   CN yuan = %f  \t             ##\n",currency_to);
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}
void cnyToBdt()
{
    system("cls");
    projectName();
    system("color e4");
    printf("\t\t\t##\tYou are most welcome\t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tCNY to BDT\t                     ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEnter CNY value\t ");
    scanf("%f",&currency_from);
    currency_to = currency_from*13.55;
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##   BDT Taka = %f  \t             ##\n",currency_to);
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}
void bdtTonpr()
{
    system("cls");
    projectName();
    system("color b0");
    printf("\t\t\t##\tYou are most welcome\t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tBDT to NPR\t \t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEnter BDT value\t ");
    scanf("%f",&currency_from );
    printf("\t\t\t##                                           ##\n");
    currency_to = currency_from/0.7081;
    printf("\t\t\t##   NP rupee = %f  \t             ##\n",currency_to);
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}
void nprToBdt()
{
    system("cls");
    projectName();
    system("color b0");
    printf("\t\t\t##\tYou are most welcome\t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tNPR to BDT\t                     ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEnter NPR value\t ");
    scanf("%f",&currency_from);
    currency_to = currency_from*0.7081;
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##   BDT Taka = %f  \t             ##\n",currency_to);
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}
void bdtTosar()
{
    system("cls");
    projectName();
    system("color f9");
    printf("\t\t\t##\tYou are most welcome\t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tBDT to SAR\t \t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEnter BDT value\t ");
    scanf("%f",&currency_from );
    printf("\t\t\t##                                           ##\n");
    currency_to = currency_from/22.98;
    printf("\t\t\t##   SA riyal = %f  \t             ##\n",currency_to);
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}
void sarToBdt()
{
    system("cls");
    projectName();
    system("color f9");
    printf("\t\t\t##\tYou are most welcome\t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tSAR to BDT\t                     ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEnter SAR value\t ");
    scanf("%f",&currency_from);
    currency_to = currency_from*22.98;
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##   BDT Taka = %f  \t             ##\n",currency_to);
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}
void bdtTosgd()
{
    system("cls");
    projectName();
    system("color 0e");
    printf("\t\t\t##\tYou are most welcome\t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tBDT to SGD\t \t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEnter BDT value\t ");
    scanf("%f",&currency_from );
    printf("\t\t\t##                                           ##\n");
    currency_to = currency_from/0.71;
    printf("\t\t\t##   SG dollar = %f  \t             ##\n",currency_to);
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}
void sgdToBdt()
{
    system("cls");
    projectName();
    system("color 0e");
    printf("\t\t\t##\tYou are most welcome\t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tSGD to BDT\t                     ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEnter SGD value\t ");
    scanf("%f",&currency_from);
    currency_to = currency_from*0.71;
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##   BDT Taka = %f  \t             ##\n",currency_to);
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}
void bdtToegp()
{
    system("cls");
    projectName();
    system("color e0");
    printf("\t\t\t##\tYou are most welcome\t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tBDT to EGP\t \t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEnter BDT value\t ");
    scanf("%f",&currency_from );
    printf("\t\t\t##                                           ##\n");
    currency_to = currency_from/5.49;
    printf("\t\t\t##   EG pound = %f  \t             ##\n",currency_to);
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}
void egpToBdt()
{
    system("cls");
    projectName();
    system("color e0");
    printf("\t\t\t##\tYou are most welcome\t             ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEGP to BDT\t                     ##\n");
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##\tEnter EGP value\t ");
    scanf("%f",&currency_from);
    currency_to = currency_from*5.49;
    printf("\t\t\t##                                           ##\n");
    printf("\t\t\t##   BDT Taka = %f  \t             ##\n",currency_to);
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
    printf("\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}
void projectName()
{
    system("cls");
    printf("\n");
    printf("\n\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#");
    printf("\n\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#");
    printf("\n\t\t\t##           Currency Converter              ##");
    printf("\n\t\t\t##                                           ##");
    printf("\n\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#");
    printf("\n\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
}
void main()
{
    system("cls");
    system("color e0");
    while(1)
    {
        projectName();
        printf("\t\t\t##\t.....Select your option.....         ##\n");
        printf("\t\t\t##                               \t     ##\n");
        printf("\t\t\t##\t\t 1. BDT to USD               ##\n");
        printf("\t\t\t##\t\t 2. USD to BDT               ##\n");
        printf("\t\t\t##\t\t 3. USD to Rupee             ##\n");
        printf("\t\t\t##\t\t 4. Rupee to USD             ##\n");
        printf("\t\t\t##\t\t 5. BDT to AUD               ##\n");
        printf("\t\t\t##\t\t 6. AUD to BDT               ##\n");
        printf("\t\t\t##\t\t 7. BDT to Rupee             ##\n");
        printf("\t\t\t##\t\t 8. Rupee to BDT             ##\n");
        printf("\t\t\t##\t\t 9. BDT to Ringgit           ##\n");
        printf("\t\t\t##\t\t10. Ringgit to BDT           ##\n");
        printf("\t\t\t##\t\t11. BDT to CNY               ##\n");
        printf("\t\t\t##\t\t12. CNY to BDT               ##\n");
        printf("\t\t\t##\t\t13. BDT to NPR               ##\n");
        printf("\t\t\t##\t\t14. NPR to BDT               ##\n");
        printf("\t\t\t##\t\t15. BDT to SAR               ##\n");
        printf("\t\t\t##\t\t16. SAR to BDT               ##\n");
        printf("\t\t\t##\t\t17. BDT to SGD               ##\n");
        printf("\t\t\t##\t\t18. SGD to BDT               ##\n");
        printf("\t\t\t##\t\t19. BDT to EGP               ##\n");
        printf("\t\t\t##\t\t20. EGP to BDT               ##\n");
        printf("\t\t\t##                               \t     ##");
        printf("\n\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#");
        printf("\n\t\t\t#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            bdtToUsd();
        }
        else if(choice==2)
        {
            usdToBdt();
        }
        else if(choice==3)
        {
            usdToInd();
        }
        else if(choice==4)
        {
            IndTousd();
        }
        else if(choice==5)
        {
            BdtToAud();
        }
        else if(choice==6)
        {
            AudToBdt();
        }
        else if(choice==7)
        {
            BdtToInd();
        }
        else if(choice==8)
        {
            IndToBdt();
        }
        else if(choice==9)
        {
            bdtTomr();
        }
        else if(choice==10)
        {
            mrToBdt();
        }
        else if(choice==11)
        {
            bdtTocny();
        }
        else if(choice==12)
        {
            cnyToBdt();
        }
        else if(choice==13)
        {
            bdtTonpr();
        }
        else if(choice==14)
        {
            nprToBdt();
        }
         else if(choice==15)
        {
            bdtTosar();
        }
         else if(choice==16)
        {
            sarToBdt();
        }
         else if(choice==17)
        {
            bdtTosgd();
        }
         else if(choice==18)
        {
            sgdToBdt();
        }
        else if(choice==19)
        {
            bdtToegp();
        }
        else if(choice==20)
        {
            egpToBdt();
        }
        printf(".............................\n");
        printf(".............................\n");
        printf("..\t1. continue        ..\n");
        printf("..\t0. exit            ..\n");
        printf(".............................\n");
        printf(".............................\n");
        scanf("%d",&br_point);
        if(br_point==0)
        {
            break;
        }
        system("cls");
    }
}


