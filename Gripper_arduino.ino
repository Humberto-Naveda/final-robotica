//sketch created by Akshay Joseph follow me on Instagra: five_volt_player

#include<Servo.h>

Servo Myservo;
int pos=0;
void setup()
{
  pinMode (7,INPUT);
  Myservo.attach(3);
  Myservo.write(0);
}

void loop()
{
  /*Abrir gripper*/
  if (digitalRead(7)==HIGH){
     Myservo.write(60);
  }
  /*Cerrar gripper*/
  else if( digitalRead(7)==LOW){
    Myservo.write(10);
  }
}
