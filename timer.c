#include <stdio.h>
#include <stdlib.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void clrscr()
{
  system("@cls||clear");
}




main (){

    
    
    
    
    int h = 0;
    int m = 10;
    int s = 1;
  clrscr();
  

  while(1)
    {
      clrscr();
        printf(ANSI_COLOR_GREEN   "Interval 1!\n"  ANSI_COLOR_RESET "\n");
      printf("\n%d : %d : %d ",h,m,s);
      sleep(1);      
        s--;
      if(s==0&&m!=0){
	s=59;
	m--;
      }
      if(s==0&&m==0&&h!=0){
	h--;
	m=59;
	s=59;
    }
      if(h==0&&m==0&&s==0){
	system("afplay ~/bin/DIAMOND.WAV");
          printf("\n");
	break;
      }
}
    m = 4;
    s = 1;
    while(1)
    {
        clrscr();
        printf(ANSI_COLOR_CYAN   "Break 1\n"  ANSI_COLOR_RESET "\n");
        printf("\n%d : %d : %d ",h,m,s);
        sleep(1);
        s--;
        if(s==0&&m!=0){
            s=59;
            m--;
        }
        if(s==0&&m==0&&h!=0){
            h--;
            m=59;
            s=59;
        }
        if(h==0&&m==0&&s==0){
            system("afplay ~/bin/DIAMOND.WAV");
            printf("\n");
            break;
        }
    }
    

/*********num 2*****/
    m = 10;
    s = 1;
    while(1)
    {
        clrscr();
        printf(ANSI_COLOR_GREEN   "Interval 2!\n"  ANSI_COLOR_RESET "\n");
        printf("\n%d : %d : %d ",h,m,s);
        sleep(1);
        s--;
        if(s==0&&m!=0){
            s=59;
            m--;
        }
        if(s==0&&m==0&&h!=0){
            h--;
            m=59;
            s=59;
        }
        if(h==0&&m==0&&s==0){
            system("afplay ~/bin/DIAMOND.WAV");
            printf("\n");
            break;
        }
    }
    m = 4;
    s = 1;
    while(1)
    {
        clrscr();
        printf(ANSI_COLOR_CYAN   "Break 2\n"  ANSI_COLOR_RESET "\n");
        printf("\n%d : %d : %d ",h,m,s);
        sleep(1);
        s--;
        if(s==0&&m!=0){
            s=59;
            m--;
        }
        if(s==0&&m==0&&h!=0){
            h--;
            m=59;
            s=59;
        }
        if(h==0&&m==0&&s==0){
            system("afplay ~/bin/DIAMOND.WAV");
            printf("\n");
            break;
        }
    }
    
    
    /*********num 3*****/
    m = 10;
    s = 1;
    while(1)
    {
        clrscr();
        printf(ANSI_COLOR_GREEN   "Interval 3!\n"  ANSI_COLOR_RESET "\n");
        printf("\n%d : %d : %d ",h,m,s);
        sleep(1);
        s--;
        if(s==0&&m!=0){
            s=59;
            m--;
        }
        if(s==0&&m==0&&h!=0){
            h--;
            m=59;
            s=59;
        }
        if(h==0&&m==0&&s==0){
            system("afplay ~/bin/DIAMOND.WAV");
            printf("\n");
            break;
        }
    }
    m = 4;
    s= 1;
    while(1)
    {
        clrscr();
        printf(ANSI_COLOR_CYAN   "Break 3\n"  ANSI_COLOR_RESET "\n");
        printf("\n%d : %d : %d ",h,m,s);
        sleep(1);
        s--;
        if(s==0&&m!=0){
            s=59;
            m--;
        }
        if(s==0&&m==0&&h!=0){
            h--;
            m=59;
            s=59;
        }
        if(h==0&&m==0&&s==0){
            system("afplay ~/bin/DIAMOND.WAV");
            printf("\n");
            break;
        }
    }
    
    
    /*********num 4*****/
    m = 10;
    s = 1;
    while(1)
    {
        clrscr();
        printf(ANSI_COLOR_GREEN   "Interval 4!\n"  ANSI_COLOR_RESET "\n");
        printf("\n%d : %d : %d ",h,m,s);
        sleep(1);
        s--;
        if(s==0&&m!=0){
            s=59;
            m--;
        }
        if(s==0&&m==0&&h!=0){
            h--;
            m=59;
            s=59;
        }
        if(h==0&&m==0&&s==0){
            system("afplay ~/bin/DIAMOND.WAV");
            printf("\n");
            break;
        }
    }
 
    
    
    
}



