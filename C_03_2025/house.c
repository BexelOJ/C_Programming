// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Write C code here
    int i,j;
    int distance, total_distance = 0;
    int house_no,people;
    int start_pt[100], end_pt[100], width[100], position[100];
    printf("Enter no. of houses: ");
    scanf("%d",&house_no);
    printf("\nEnter no. of people: ");
    scanf("%d",&people);
    printf("\nEnter start points of houses: ");
    for(i=0;i<house_no;i++)
        scanf("%d",&start_pt[i]);
    printf("\nEnter width of houses: ");
    for(i=0;i<house_no;i++)
        {
        scanf("%d",&width[i]);
        end_pt[i] = start_pt[i]+width[i];
        }
    printf("\nEnter position of people: ");
    for(i=0;i<people;i++)
        scanf("%d",&position[i]);
        
    for(i=0;i<people;i++)
        {
         distance = abs(position[i] - start_pt[0]) > abs(position[i]-end_pt[0]) ? abs(position[i]-end_pt[0]) : abs(position[i]-start_pt[0]);
         for(j=1;j<house_no;j++)
            {
            if(abs(position[i] - start_pt[j]) < distance)
                distance = abs(position[i] - start_pt[j]);
            if(abs(position[i]-end_pt[j]) < distance)
                distance = abs(position[i] - end_pt[j]);
            }
        total_distance = total_distance + distance;
        }
    
    printf("\nFinal Sum = %d",total_distance);

    return 0;
}
