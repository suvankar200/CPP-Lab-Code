#include <stdio.h>
 typedef struct distance {
    float feet;
    float inches;
     int ex;

}str;
int main() {

 str a;
    printf("Enter the feet");
    scanf("%f",&a.feet);
    printf("Enter the inches");
    scanf("%f", &a.inches);
    str b;
    printf("Enter the feet");
    scanf("%f",&b.feet);
    printf("Enter the inches");
    scanf("%f", &b.inches);
    str c;
  c.feet=a.feet+b.feet;
    c.inches=a.inches+b.inches;
    if(c.inches>12) {
        c.feet=c.feet+1;
        c.inches=c.inches-12;
    }

    printf("%f\n",c.feet);
    printf("%f", c.inches);
    return  0;

}
