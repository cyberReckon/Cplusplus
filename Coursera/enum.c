#include<stdio.h>
int main(void)
{
    enum day {mon,tue,wed,thu,fri,sat,sun};
    enum day today = fri;
    printf("%d",today);
    return 0;
}