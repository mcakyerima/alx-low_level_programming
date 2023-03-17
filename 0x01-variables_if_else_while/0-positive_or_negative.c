#include <stdlib.h>
#include <time.h>
/* this program check if number is + add positive , if - ads  *negative
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
const char* str = (n > 1) ? "positive" : "negative";
printf("%d is %s\n",n, str);
return (0);
}
