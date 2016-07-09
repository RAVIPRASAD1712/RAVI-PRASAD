#include<conio.h>
void main()
{
char a[10];
int n;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",&a[i]);}
for(i=0;i<n;i++)
{
  if(a[i]!='a' || a[i]!='A' || a[i]!='e' || a[i]!='E' || a[i]!='i' || a[i]!='I' || a[i]!='o' || a[i]!='O' || a[i]!='u' || a[i]!='U')
  {
    printf("%c",a[i]);
  }
  else
  printf("no vowels");
}
getch();
}
