#include<AFMotor.h>
AF_DCMotor motor1(1, Motor12_1KHz);
AF_DCMotor motor2(2, Motor12_1KHz);
AF_DCMotor motor3(3, Motor34_1KHz);
AF_DCMotor motor4(4, Motor34_1KHz);
void setup() {
  Serial.begin(9600); 
}
void loop() {
 if(Serial.available() > 0)
{
  command = Serial.read();
  stop();
  switch(command)
  {case 'F';
  forward();
  break;
  case 'B';
  backward();
  break;
  case 'L';
  left();
  break;
  case 'R';
  right();
  break;
  }
}
}
