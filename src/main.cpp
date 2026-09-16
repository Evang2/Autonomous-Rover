#include <Arduino.h>

const int MOTOR_B_PIN_1 = 5;
const int MOTOR_B_PIN_2 = 6;

void motorForward(int speed)
{
    analogWrite(MOTOR_B_PIN_1, speed);
    analogWrite(MOTOR_B_PIN_2, 0);
}

void motorStop()
{
    analogWrite(MOTOR_B_PIN_1, 0);
    analogWrite(MOTOR_B_PIN_2, 0);
}

void motorBackward(int speed)
{
    analogWrite(MOTOR_B_PIN_1, 0);
    analogWrite(MOTOR_B_PIN_2, speed);
}

void setup()
{
    Serial.begin(115200);

    pinMode(MOTOR_B_PIN_1, OUTPUT);
    pinMode(MOTOR_B_PIN_2, OUTPUT);

    motorStop();
}

void loop()
{
    Serial.println("25%");
    motorForward(100);
    delay(2000);

    Serial.println("50%");
    motorForward(150);
    delay(2000);

    Serial.println("75%");
    motorForward(200);
    delay(2000);

    Serial.println("100%");
    motorForward(255);
    delay(2000);

    Serial.println("Stop");
    motorStop();
    delay(2000);
}