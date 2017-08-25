#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "calculate_days.h"

/***************
* calculateDays
* Given a year return 1 if it is a leap year else return 0
* @param:
*  year: int
* @return:
*  integer: 1 || 0
*/
int isLeapYear(int year){
    assert(year > 0);
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        return 1;
    }
    return 0;
}

/***************
* calculateDays
* Given a month and a day of the month return the number of days
* @param:
*  currentMonth: month
*  monthDay: day of the month
* @return:
*  integer number of days
*/
int calculateDays(Month currentMonth, int monthDay, int year){
    int daysPerMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int days = monthDay;
    Month i;
    
    if(isLeapYear(year) == 1){
        daysPerMonth[Feb] += 1;
    }
    
    assert( year > 0);
    assert(monthDay >= 1 && monthDay <= daysPerMonth[currentMonth]);

    for(i = Jan; i < currentMonth; i++){
        days += daysPerMonth[i];
    }

    return days;
}