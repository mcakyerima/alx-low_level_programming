#include <stdlib.h>
#include <time.h>
/* this program check if number is + add positive , if - ads  *negative
*/
int main(void)
{
int n;
srand(tie(0));
n =rand() - RAMD_MAX / 2;
const char* str = (n > 1) ? "positive" : "negative";
printf("n is %s\n", str);
return (0);
}
