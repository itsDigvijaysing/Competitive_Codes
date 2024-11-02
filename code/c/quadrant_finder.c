#include<stdio.h>

int main(){
    int a,b;
    printf("Quadrant Finder\n");
    printf("Enter Coordinate Points\n");
    printf("Point A: ");
    scanf("%d",&a);
    printf("Point B: ");
    scanf("%d",&b);
    if(a==0 && b==0){
        printf("Co-ordinates are at Center.");
    }
    if(a==0 && b!=0){
        printf("Co-ordinates are at Y-axis.");
    }
    if(a!=0 && b==0){
        printf("Co-ordinates are at X-axis.");
    }
    if(a>0 && b>0){
        printf("Co-ordinates are in 1st Quadrant.");
    }
    if(a<0 && b>0){
        printf("Co-ordinates are in 2st Quadrant.");
    }
    if(a<0 && b<0)
    {
        printf("Co-ordinates are in 3rd Quadrant.");
    }
    if(a>0 && b<0){
        printf("Co-ordinates are in 4th Quadrant.");
    }
    return 0;
}