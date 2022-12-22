#include<stdio.h>

float kmsmiles(float a){
    float c;
    c=a/1.609;
    return c;
}

float inchfoot(float a){
    float c;
    c=a/12;
    return c;
}

float cmsinch(float a){
    float c;
    c=a/2.54;
    return c;
}

float poundkgs(float a){
    float c;
    c=a/2.205;
    return c;
}

float inchmtr(float a){
    float c;
    c=a/39.37;
    return c;
}

int main(){
    for (int i=0;1;i++)
    {
    int option;
    float value;
    float ans;
    
    printf("\n\nWhat do you wanna convert?\n");
    printf("1.kms to miles\n");
    printf("2.inches to foot\n");
    printf("3.cms to inches\n");
    printf("4.pound to kgs\n");
    printf("5.inches to meters\n");
    printf("0.Exit\n");
    scanf("%d", &option);
    
    if (option==1){
        printf("Enter the value: \n");
        scanf("%f", &value);
        ans=kmsmiles(value);
        printf("The conversion in miles is %f\n", ans);
    }
    
    else if (option==2){
        printf("Enter the value: \n");
        scanf("%f", &value);
        ans=inchfoot(value);
        printf("The conversion in foot is %f\n", ans);
    }

    else if (option==3){
        printf("Enter the value: \n");
        scanf("%f", &value);
        ans=cmsinch(value);
        printf("The conversion in inch is %f\n", ans);
    }

    else if (option==4){
        printf("Enter the value: \n");
        scanf("%f", &value);
        ans=poundkgs(value);
        printf("The conversion in kg is %f\n", ans);
    }

    else if (option==5){
        printf("Enter the value: \n");
        scanf("%f", &value);
        ans=inchmtr(value);
        printf("The conversion in meters is %f\n", ans);
    }

    else if (option==0){
        break;
    }
    
    else{
        printf("Select from the given options only!!\n");
    }
    
    }

    return 0;
}