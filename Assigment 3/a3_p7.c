/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
void print_form(int n, int m, char c);
 
int main() {
int n,m;
char c;
getchar();
scanf("%d %d %c",&n,&m,&c);
print_form(n,m,c);
}
void print_form(int n, int m, char c){
    for (int i = 0; i <n; i++)
    {
        for (int j= 0; j<m; j++)
        {
            printf("%c",c);
        }
        m++;
        printf("\n");
    }
  return 0;  
}
