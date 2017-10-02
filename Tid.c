#include <stdio.h>
#define MINUTES 60
#define HOURS 3600
/*one minute is 60 seconds so i just multiplikation minutes with 60*/
#define DAYS 86400
/*one hour is 3600 seconds so i just multiplikation hours with 24*/
#define WEEKS 604800
/*one day is 86400 seconds so i just multiplikation hours with 24*/

int main(void)
{
	int seconds, minutes, hours, days, weeks;

	printf("Enter seconds: ");
	scanf("%d", &seconds);
	weeks=seconds/WEEKS;
	seconds=seconds%WEEKS;
	days=seconds/DAYS;
	seconds=seconds%DAYS;
	hours=seconds/HOURS;
	seconds=seconds%HOURS;
	minutes=seconds/MINUTES;
	seconds=seconds%MINUTES;
	printf("%d weeks, %d days, %d hours, %d minutes, %d seconds \n", weeks, days, hours, minutes, seconds);



	return(0);
}
