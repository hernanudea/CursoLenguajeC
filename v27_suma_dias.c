#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc, const char *argv[]) {
   time_t oneDay=24 * 60 *60;
   time_t today = time(NULL);
   time_t nextDate;

   nextDate = today + oneDay * atoi(argv[1]);

   printf("%s\n", ctime(&nextDate));

    return 0;
}
