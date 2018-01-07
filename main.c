#include <stdio.h>
int main (int argc,char *argv[])
{
    int counter;
    printf("The program name is '%s'\n",argv[0]);
    if (argc==1)
    {
        printf("No command line arguments passed to main function except program name\n");
    }
    if (argc>=2)
    {
        printf("The number of command line arguments is %d\n",argc);
        printf("The following arguments are passed to main function: \n");
        for (counter = 0;counter < argc;counter++)
        {
            printf("%d: %s\n",counter,argv[counter]);
        }
    }




    return 0;
}
