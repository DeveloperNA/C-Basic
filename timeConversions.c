

#include <stdio.h>
#include <stdlib.h>

int timeToSeconds(int hh, int mm, int ss)
{
    int sec;
    sec = hh * 60 * 60 + mm * 60 + ss;
    return sec;
}

int* secondsToTime(int seconds)
{
    int *time = (int*)malloc(3*sizeof(int));
    int hh = seconds / (60 * 60);
    int mm = seconds / 60 - hh * 60;
    int ss = seconds - (hh * 60 *60 ) - (mm*60);
    
    time[0] = hh;
    time[1] = mm;
    time[2] = ss;

    return time;
}

int main()
{
    int seconds =0;
    int *time;
    short int choice;
    printf("\n1.Convert time to seconds\n2.Convert seconds to time\n");
    printf("\nEnter your choice: ");
    scanf("%hu", &choice);

    switch(choice)
    {
    case 1: {
            int hh, mm ,ss;
            printf("Enter time in hh: mm: ss  ");
            scanf("%d %d %d",&hh, &mm, &ss);
            seconds = timeToSeconds(hh, mm, ss);
            break;
        }
    case 2:{
            int seconds;
            printf("Enter seconds:");
            scanf("%d", &seconds);
            time = secondsToTime(seconds);
            break; 
     }
    }
    if(choice==1)
         printf("Time in seconds: %d", seconds);
    else 
        printf("Time in HH : MM : SS \t %d :%d :%d \n", time[0], time[1], time[2]);

    return 0;

}
