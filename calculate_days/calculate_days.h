#ifndef __CALCULATE_DAYS__
#define __CALCULATE_DAYS__
typedef enum month {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sept, Oct, Nov, Dec} Month;

int isLeapYear(int);

int calculateDays(Month, int, int);
#endif