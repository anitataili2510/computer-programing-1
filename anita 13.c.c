#include<stdio.h>
#include<conio.h>
int main() {
long bytes = 1048576;
float kb = bytes / 1024.0;
float mb = kb / 1024.0;
float gb = mb / 1024.0;
printf("bytes = %1d, kb = %.2f, mb = %.2f, gb = %.6f\n", bytes, kb, mb, gb);
getch();
return 0;
}
