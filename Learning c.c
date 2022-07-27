/* #include<stdio.h>

int main()
{

    int age;
    char name;

    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age>=18)
    {

        printf("Yes, %s your age is %d eligible for vote", name, age);

    }
    else{
        printf("No, %s your age is %d not eligible for vote", name , age);
    }
    return 0;
}

#include<stdio.h>

int main()
{
	int a ;

	//input age
	printf("Enter the age of the person: ");
	scanf("%d",&a);

	//check voting eligibility
	if (a>=18)
	{
		printf("Eigibal for voting");
	}
	else
	{
		printf("Not eligibal for voting\n");
	}

	return 0;
}

#include<stdio.h>
#include<conio.h>
void main()
{
int age;
char name[50]; // or *name


 printf("\n Type the Name of the candidate: ");
 gets(name);

 printf("\n Enter The Age : ");
 scanf("%d",&age);

 if(age>=18)
  {
    printf("\n %s is Eligible for Vote",name);
  }
 else
  {
printf("\n %s is Not Eligible for Vote",name);
  }

 getch();
}


/*For Loop*
#include<stdio.h>
int main()
{
    int i, n;

    printf("\nEnter the Limit:");
    scanf("%d", &n);

    for (i=0; i<=n; i++)
    {
        printf("\n %d", i);

    }
    return 0;
}

*
**
***
****
*****
*//*Nested for loop
#include<stdio.h>

int main()
{
    int i, j, n, m;

    printf("\nEnter the Columns: ");
    scanf("%d", &n);
    printf("\nEnter the Rows: ");
    scanf("%d", &m);

    for(i=0; i<=n; i++)
    {
        for (j=0; j<=m; j++)
        {
            if(i==8)
                break;
            printf(" * ");


        }
        printf("\n ");
    }

    return 0;
}
*/

//ASCII American standard code for Information Interchange

#include<stdio.h>
int main()
{
    int i, n;

    printf("\n Enter the limit:");
    scanf("%d", &n);

    for(i=0; i<=n; i++)
    {
      printf("\n %d is %c", i, i);
    }
    return 0;
}
