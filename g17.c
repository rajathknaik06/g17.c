/*Wisconsin State Fair



Wisconsin State Fair is one of the largest midsummer celebrations in the Midwest Allis, showcasing the agriculture skills and prowess of the state. 



The Event organizers hired a few part-time employees to work at the fair and the agreed salaries paid to them are as given below:

Weekdays - 80 / hour

Weekends - 50 / hour



Justin is a part-time employee working at the fair. The number of hours Justin worked on the weekdays is 10 more than the number of hours he worked during weekends. If the total salary paid to him this month is known, write a program to estimate the number of hours he worked during weekdays and the number of hours he worked during weekends.

Input format :
The input consists of an integer that corresponds to the total salary paid to Justin.

Output format :
The first line of the output prints the number of hours Justin has worked during the weekdays.

The second line prints the number of hours Justin has worked during the weekends.*/

#include<stdio.h>
int main()
{
    int sal,h;
    scanf("%d",&sal);
    h=(sal-800)/130;
    printf("Number of weekday hours is %d\nNumber of weekend hours is %d",h+10,h);     //2750
    return 0;
}
