#include <stdio.h>
int main()
{
    int day, month, year, day_f = 32, month_f = 13, year_f = 1000;
    scanf("%d", &month);
    scanf("%d", &day);
    scanf("%d", &year);
    while (day != 0 && month != 0 && year != 0){        
        if (year < year_f || (year == year_f && month < month_f) || (year == year_f && month == month_f && day < day_f))
        {
            month_f = month;
            day_f = day;
            year_f = year;
        }
        scanf("%d", &month);
        scanf("%d", &day);
        scanf("%d", &year);
          
    }
    printf("%d %d %d en erken tarih", month_f, day_f, year_f);  
    return 0;
}

