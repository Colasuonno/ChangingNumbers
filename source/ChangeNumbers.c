#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int n;
int toreplace;
int replace;
 
int main(int argc, char *argv[]) {
   
    printf("Scrivi il numero da modificare\n");
    scanf("%d",&n);
    printf("Scrivi la cifra da modificare\n");
    scanf("%d",&toreplace);
    printf("Scrivi a cosa vuoi modificarlo\n");
    scanf("%d",&replace);
    printf("%i", solve(n,toreplace,replace));
   
    return 0;
}
 
int solve(int num,int toreplace, int replace) {
       
        int result = 0;
        int count = 0;
       
       
        int i = num;
       
        while(i > 0) {   
		         
            int r = i%10;

            if (r == toreplace) {
                r = replace;
            }

            result = (r*pow(10, count)+result);
           
            i = (i/10);
          
            ++count;
           
        }
         
        return result;
       
    }
