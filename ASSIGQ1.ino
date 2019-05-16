#include"jklogic.c"
int A,B,C,D,E,F;
void setup()
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

}

void loop()
{
A=0;
B=0;
C=0;
for(int i=1;i<=8;i++)
{
D=jklogic(A,!A);
E=jklogic(B,!B);
F=jklogic(C,!C);
digitalWrite(5,D);
digitalWrite(6,E);
digitalWrite(7,F);
delay(1000);
if(i%4==0)
A=!A;
if(i%2==0)
B=!B;
C=!C;
}
}
