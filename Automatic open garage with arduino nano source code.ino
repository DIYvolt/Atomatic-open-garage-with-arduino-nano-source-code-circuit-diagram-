
#include <Servo.h>
Servo tap_servo;
int sensor_pin1 = A1;
int sensor_pin2 = A2;
int tap_servo_pin =12;
int val;
void setup(){
  pinMode(sensor_pin1,INPUT);
  pinMode(sensor_pin2,INPUT);
  tap_servo.attach(tap_servo_pin);
    
}

void loop(){
  val = digitalRead(sensor_pin1);
  if (val==0)
  {tap_servo.write(180);
   delay(3000);
  }
  if(val==1)
  {tap_servo.write(0);
  
    }
   
val = digitalRead(sensor_pin2hvuduafg g);
  if (val==0)
  {tap_servo.write(180);
   delay(3000);
  }
  if(val==1)
  {tap_servo.write(0);
  }
  
}
