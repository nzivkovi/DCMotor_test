#include "Motor.h"

int lower_pwm_left = 43;
int lower_pwm_right = 47;
int max_rpm = 130;

Motor* motor_left = new Motor(10, 11, lower_pwm_left, max_rpm);
Motor* motor_right = new Motor(9, 8, lower_pwm_right, max_rpm);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  motor_left->set_speed_forward(0);
  motor_right->set_speed_forward(0);
}
