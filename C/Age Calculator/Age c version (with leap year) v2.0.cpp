#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include<conio.h>

int leapyear(int num);
int main()
{

	//Gen current date


	// variables to store date and time components
	int  today, tomonth, toyear, bday, bmonth, byear, month, year, day, d = 0, i;
	char name[30];

	// time_t is arithmetic time type
	time_t now;

	// Obtain current time
	// time() returns the current time of the system as a time_t value

	time(&now);


	// localtime converts a time_t value to calendar time and
	// returns a pointer to a tm structure with its members
	// filled with the corresponding values
	struct tm *local = localtime(&now);


	today = local->tm_mday;			// get day of month (1 to 31)
	tomonth = local->tm_mon + 1;   	// get month of year (0 to 11)
	toyear = local->tm_year + 1900;	// get year since 1900

	printf("                      --------AGE CALCULATOR--------                      ");
	//inpute dob
	
	printf("\n\nHey, What is your Name :: ");
	gets(name);
	printf("Give your birth Year :: ");
	scanf("%d",&byear);
	printf("Give your birth Month :: ");
	scanf("%d",&bmonth);
	printf("Give your birth day :: ");
	scanf("%d",&bday);



//Age Calcu

	year = toyear - byear;
	month = tomonth - bmonth;

	if (month <= 0)
	{
		year = year - 1;
    	month = (int(tomonth) + 12) - bmonth;
	}

	day = today - bday;
	
//Month error 
	if (day <= 0)
    {
		month = month - 1;
    	switch (tomonth)
					{
					case 1:
					case 3:
					case 5:
					case 7:
					case 8:
					case 12:
    						day = ((int(today) + 31) - bday);
    						break;
    				case 2:
        					day = ((int(today) + 28) - bday);
        					break;
    				case 4:
					case 6:
					case 9:
					case 11:
        					day = ((int(today) + 30) - bday);
        					break;
        			default:
        					printf("***...Error...***");
        					break;
					}
	}
	
//leapyear

for (i=byear;i<toyear+1;i++)
{

  if (leapyear(i)==1)
  d = d+1;
  
  else
  d=d+0;
}	

day = day+d;

//over flow
if (day > 30)
{
	month += day/30;
    day = day%30;
}
if (month >= 12)
{

    year += month/12;
    month = month%12;
}
	
	
	
	

printf("\n\n\nThanks %s, your age is %d years %d months %d days..\n\n",name, year, month, day);


getche();
	return 0;
}


int leapyear(int num)

{
	
	return ((num % 4 == 0) && (num % 100 != 0) || (num % 400 == 0));
	
}
