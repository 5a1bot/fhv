#include<stdio.h>

int main(){
    int day;
    int days;
    int month;
    int year;
    int i =0;
    int isleap=0;
    int daymonth[12][2] = {{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};

    printf("Enter a Year (only an Integer): ");
    scanf("%d",&year);
    if(year % 4 == 0 ){
	isleap = 1;
	printf("Is a Leapyear.\n");
    }

    printf("Enter a Month (only an Integer): ");
    scanf("%d",&month);
    
    /*
    if (scanf("%d", &month) != 1)
    {
	printf("error");
    */


    while( month > 12 || month < 1 ){
	printf("Enter a Month (try again): ");
	scanf("%d",&month);
    }
   
    printf("Enter a Day (only an Integer): ");
    scanf("%d",&day);

    while( day > daymonth[month - 1][isleap] || day < 1){
	printf("Enter a Day (try again): ");
	scanf("%d",&day);
    }

    i = 0;
    days = 0;
    while (i < month-1){
	days = days + daymonth[i][isleap];	
	i = i +1;
    }
    days = days + day;
    printf("It's the %d Day of the Year. :D \n", days);
   
    return 0;
}
