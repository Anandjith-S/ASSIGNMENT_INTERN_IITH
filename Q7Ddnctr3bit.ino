#include"Dlogic.c"
int A,B,C,D,E,F;
void setup()
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
A=1;
B=1;
C=1;
for(int i=1;i<=8;i++)
{
D=Dlogic(A);
E=Dlogic(B);
F=Dlogic(C);
digitalWrite(5,D);
digitalWrite(6,E);
digitalWrite(7,F);
Serial.println(E);
delay(1000);
if(i%4==0)
A=!A;
if(i%2==0)
B=!B;
C=!C;
}
}
