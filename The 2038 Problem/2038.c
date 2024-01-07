#include <stdio.h>
#include <time.h>

int main(void) {
    struct tm date1 = {0};
    date1.tm_year = 1947;  
    date1.tm_mon = 8;       
    date1.tm_mday = 15;        

    time_t time1 = mktime(&date1);
    long offset = (60 * 60 * 24 * 365);
    time_t time2;
    for(int i = 0; i < 10; i++) {
        time2 = time1 + offset;
        struct tm* date2 = localtime(&time2);
        printf("%d/%d/%d\n", date2->tm_mday, date2->tm_mon,date2->tm_year);
        time1 = time2;
    }
    return 0;
}