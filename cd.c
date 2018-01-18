  #include<stdio.h>
  #include<conio.h>
  int main(){
             int numberin,remain;
             clrscr();
             printf(" Give a whole number: ");
             scanf("%d",&numberin);
             remain = abs(numberin) % 2;
             switch(remain){
                          case 0 : printf("\n %d is an even number.",numberin);
                                       break;
                          case 1 : printf("\n %d is an odd number.",numberin);
                                       break;
                                         }
  getch();
  return 0;
  }

