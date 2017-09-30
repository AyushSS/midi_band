#define C4 0x30
#define Cs4 0x31
#define D4 0x32
#define E4 0x34
#define F4 0x35
#define G4 0x37
#define A4a 0x39
#define B4 0x3B

#define C5 0x3C
#define D5 0x3E
#define E5 0x40
#define F5 0x41
#define G5 0x43
#define A5a 0x45
#define As5 0x46
#define B5 0x47
#define C6 0x48
#define Cs6 0x49

void midi(int cmd,int data1,int data2)
{
  Serial.write(cmd);
  Serial.write(data1);
  Serial.write(data2);
}

int l1=3;int l2=4;int l3=5;
int l4=6;int l5=7;int l6=8;
int l7=9;int l8=11;int l9=13;
int l10=12;int l11=13;int l12=14;

char f1=0,f2=0,f3=0,f4=0;
char f5=0,f6=0,f7=0,f8=0;
char f9=0,f10=0,f11=0,f12=0;

void setup()
{
  Serial.begin(9600);

  pinMode(l1, INPUT);
  pinMode(l2, INPUT);
  pinMode(l3, INPUT); 
  pinMode(l4, INPUT);
  pinMode(l5, INPUT);
  pinMode(l6, INPUT); 
  pinMode(l7, INPUT);
  pinMode(l8, INPUT);
  pinMode(l9, INPUT); 
  pinMode(l10, INPUT);
  pinMode(l11, INPUT);
  pinMode(l12, INPUT); 
}

void loop()
{
  if(digitalRead(l1)==HIGH)
  {midi(0x90,C5,0x55);f1=1;}
  else if((digitalRead(l1)==LOW)&&(f1==1))
  {midi(0x80,C5,0x55);f1=0;}
  

   if(digitalRead(l2)==HIGH)
  {midi(0x90,D5,0x55);f2=1;}
  else if((digitalRead(l2)==LOW)&&(f2==1))
  {midi(0x80,D5,0x55);f2=0;}

   if(digitalRead(l3)==HIGH)
  {midi(0x90,E5,0x55);f3=1;}
  else if((digitalRead(l3)==LOW)&&(f3==1))
  {midi(0x80,E5,0x55);f3=0;}

   if(digitalRead(l4)==HIGH)
  {midi(0x90,F5,0x55);f4=1;}
  else if((digitalRead(l4)==LOW)&&(f4==1))
  {midi(0x80,F5,0x55);f4=0;}

   if(digitalRead(l5)==HIGH)
  {midi(0x90,G5,0x55);f5=1;}
  else if((digitalRead(l5)==LOW)&&(f5==1))
  {midi(0x80,G5,0x55);f5=0;}

   if(digitalRead(l6)==HIGH)
  {midi(0x90,A5a,0x55);f6=1;}
  else if((digitalRead(l6)==LOW)&&(f6==1))
  {midi(0x80,A5a,0x55);f6=0;}

   if(digitalRead(l7)==HIGH)
  {midi(0x90,B5,0x55);f7=1;}
  else if((digitalRead(l7)==LOW)&&(f7==1))
  {midi(0x80,B5,0x55);f7=0;}

   if(digitalRead(l8)==HIGH)
  {midi(0x90,C6,0x55);f8=1;}
  else if((digitalRead(l8)==LOW)&&(f8==1))
  {midi(0x80,C6,0x55);f8=0;}

   if(digitalRead(l9)==HIGH)
  {midi(0x90,C4,0x55);f9=1;}
  else if((digitalRead(l9)==LOW)&&(f9==1))
  {midi(0x80,C4,0x55);f9=0;}

   if(digitalRead(l10)==HIGH)
  {midi(0x90,D4,0x55);f10=1;}
  else if((digitalRead(l10)==LOW)&&(f10==1))
  {midi(0x80,D4,0x55);f10=0;}

   if(digitalRead(l11)==HIGH)
  {midi(0x90,E4,0x55);f11=1;}
  else if((digitalRead(l11)==LOW)&&(f11==1))
  {midi(0x80,E4,0x55);f11=0;}

   if(digitalRead(l12)==HIGH)
  {midi(0x90,F4,0x55);f12=1;}
  else if((digitalRead(l12)==LOW)&&(f12==1))
  {midi(0x80,F4,0x55);f12=0;}
}
