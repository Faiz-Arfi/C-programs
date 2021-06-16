#include <stdio.h>
void print()
{
    printf("press 1 to convert from km to miles\n ");
    printf("press 2 to convert from inch to foot\n ");
    printf("press 3 to convert from cm to inches\n ");
    printf("press 4 to convert from pond to kg\n ");
    printf("press 5 to convert from inch to m\n ");
}

int main(int argc, char const *argv[])
{
    printf("welcome to unit conversion\n");
    while (1)
    {
        int ch, input,a;
        float val;
        if (a > 0)
        {
            print();
            scanf("%d", &ch);
            switch (ch)

            {

            case 1:
                printf("Enter the value in km \n ");
                scanf("%d", &input);
                val = input * 0.6214;
                printf("%d km = %f miles\n", input, val);
                break;

            case 2:
                printf("Enter the value in inch \n");
                scanf("%d", &input);
                val = input * 0.0833;
                printf("%d inch = %f foot\n", input, val);
                break;

            case 3:
                printf("Enter the value in cm \n");
                scanf("%d", &input);
                val = input * 0.394;
                printf("%d cm = %f inches\n", input, val);
                break;

            case 4:
                printf("Enter the value in pond \n");
                scanf("%d", &input);
                val = input * 2.205;
                printf("%d pond = %f kg\n", input, val);
                break;

            case 5:
                printf("Enter the value in inch \n");
                scanf("%d", &input);
                val = input * 0.0254;
                printf("%d inch = %f m\n", input, val);
                break;
            }
        }
        else
        goto end;

        printf("press any number to continue and zero to exit\n");
        scanf("%d", &a);

    }

end:
    return 0;
}