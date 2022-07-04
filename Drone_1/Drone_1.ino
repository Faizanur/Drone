int motorA=3;
int motorB=9;
int motorC=10;
int motorD=11; // Motors of Quadcopter
int IR= A0;
long  duration , distance ,R,L;

void launchmode()  // Autonomus mode detects obstacle and changes path.
{
distance = analogRead(IR);
if (distance<5)
{
  rightrev();
}
else
{
  forward();
}
}

// Codes to control pitch of motors

void up()
{
  analogWrite(motorA,2000);
  analogWrite(motorB,2000);
  analogWrite(motorC,2000);
  analogWrite(motorD,2000);
}

void down()
{
  analogWrite(motorA,100);
  analogWrite(motorB,100);
  analogWrite(motorC,100);
  analogWrite(motorD,100);
}

void forward()
{
  analogWrite(motorA,750);
  analogWrite(motorB,750);
  analogWrite(motorC,2000);
  analogWrite(motorD,2000);
}

void reverse()
{
  analogWrite(motorA,2000);
  analogWrite(motorB,2000);
  analogWrite(motorC,750);
  analogWrite(motorD,750);
}

void rightroll()
{
  analogWrite(motorA,2000);
  analogWrite(motorB,750);
  analogWrite(motorC,750);
  analogWrite(motorD,2000);
}

void leftroll()
{
  analogWrite(motorA,750);
  analogWrite(motorB,2000);
  analogWrite(motorC,2000);
  analogWrite(motorD,750);
}

void rightfor()
{
  analogWrite(motorA,2000);
  analogWrite(motorB,750);
  analogWrite(motorC,2000);
  analogWrite(motorD,2000);
}

void rightrev()
{
  analogWrite(motorA,2000);
  analogWrite(motorB,2000);
  analogWrite(motorC,2000);
  analogWrite(motorD,750);
}

void leftfor()
{
  analogWrite(motorA,750);
  analogWrite(motorB,2000);
  analogWrite(motorC,2000);
  analogWrite(motorD,2000);
}

void leftrev()
{
  analogWrite(motorA,2000);
  analogWrite(motorB,2000);
  analogWrite(motorC,2000);
  analogWrite(motorD,750);
}

void setup()
{
pinMode(motorA,OUTPUT);
pinMode(motorB,OUTPUT);
pinMode(motorC,OUTPUT);
pinMode(motorD,OUTPUT);
pinMode(IR, INPUT);
}

void loop()
{ 
  up();
}
