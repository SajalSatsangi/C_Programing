#include <stdio.h>
// FOR INTERNAL A=7.5, A-=6.75, B=6, B-=5.25, C=4.5, C-=3.75, D=3, D-=2.25, E=1.5, E-=0.75, F=0
// FOR EXTERNAL A=2.5, A-=2.25, B=2, B-=1.75, C=1.5, C-=1.25, D=1, D-=0.75, E=0.5, E-=0.25, F=0
// FOR AGOP,SOCIAL SERVICE AND GKC A=10, A-=9, B=8, B-=7, C=6, C-=5, D=4, D-=3, E=2, E-=1, F=0

int main()
{
    float I, L;
    // find cgpa by entering the grade
    float GP1, GP2, GP3, GP4, GP5, GP6, GP7, GP8, GP9, GP10, GP11, GP12, GP13, GP14, GP15, GP16, CGPA;
    // ENTER THE VALUES ACCORDING TO GRADE POINT
    // I= MARKS OF INTERNAL
    // L= MARKS OF EXTERNAL

    printf("Basic Electronics:- \n");
    printf("I=");
    scanf("%f", &I);
    printf("L=");
    scanf("%f", &L);
    printf("eem201:- %f \n", GP1 = (I + L) * 3);

    printf("DSA:- \n");
    printf("I=");
    scanf("%f", &I);
    printf("L=");
    scanf("%f", &L);
    printf("eem202:- %f \n", GP2 = (I + L) * 3);

    printf("thermo:- \n");
    printf("I=");
    scanf("%f", &I);
    printf("L=");
    scanf("%f", &L);
    printf("PHM281:- %f \n", GP3 = (I + L) * 3);

    printf("Mechanics:- \n");
    printf("I=");
    scanf("%f", &I);
    printf("L=");
    scanf("%f", &L);
    printf("PHM282:- %f \n", GP4 = (I + L) * 3);

    printf("Manufacturing:- \n");
    printf("I=");
    scanf("%f", &I);
    printf("L=");
    scanf("%f", &L);
    printf("MEM201:- %f \n", GP5 = (I + L) * 3);

    printf("ENGINEERING Maths:- \n");
    printf("I=");
    scanf("%f", &I);
    printf("L=");
    scanf("%f", &L);
    printf("MEM203:- %f \n", GP6 = (I + L) * 3);

    printf("english:- \n");
    printf("I=");
    scanf("%f", &I);
    printf("L=");
    scanf("%f", &L);
    printf("MEM202:- %f \n", GP7 = (I + L) * 3);

    printf("Thermal Engineering Lab:- \n");
    printf("I=");
    scanf("%f", &I);
    printf("L=");
    scanf("%f", &L);
    printf("MEM204:- %f \n", GP8 = (I + L) * 1);

    printf("PMP:- \n");
    printf("I=");
    scanf("%f", &I);
    printf("L=");
    scanf("%f", &L);
    printf("MAM281:- %f \n", GP9 = (I + L) * 1.5);

    printf("egc:- \n");
    printf("I=");
    scanf("%f", &I);
    printf("L=");
    scanf("%f", &L);
    printf("RDC281:- %f \n", GP10 = (I + L) * 2);

    printf("BE lab:- \n");
    printf("I=");
    scanf("%f", &I);
    printf("L=");
    scanf("%f", &L);
    printf("RDC282:- %f \n", GP11 = (I + L) * 1);

    printf("engineering drawing:- \n");
    printf("I=");
    scanf("%f", &I);
    printf("L=");
    scanf("%f", &L);
    printf("GKC281:- %f \n", GP12 = (I + L) * 2);

    printf("C lab:- \n");
    printf("I=");
    scanf("%f", &I);
    printf("L=");
    scanf("%f", &L);
    printf("HC:- %f \n", GP13 = (I + L) * 0.5);

    printf("CGPA:-  %f", CGPA = (GP1 + GP2 + GP3 + GP4 + GP5 + GP6 + GP7 + GP8 + GP9 + GP10 + GP11 + GP12 + GP13) / 28.5);

    return 0;
}