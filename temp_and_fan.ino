#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 2

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

const int fan_control_pin1 = 5;
const int fan_control_pin2 = 6;
const int fan_control_pin3 = 7;

volatile unsigned long fanPulseCount = 0;
unsigned long currentTime;
unsigned long previousTime;

void setup() {
  Serial.begin(9600);
  sensors.begin();
  pinMode(fan_control_pin1, OUTPUT);
  pinMode(fan_control_pin2, OUTPUT);
  pinMode(fan_control_pin3, OUTPUT);
  // pinMode(fan_rpm_pin, INPUT_PULLUP);
  // attachInterrupt(digitalPinToInterrupt(fan_rpm_pin), countFanPulse, RISING);
}

void loop() {
  sensors.requestTemperatures();

  float temperatureCelsius = sensors.getTempCByIndex(0);
  if (temperatureCelsius != DEVICE_DISCONNECTED_C) {
    Serial.print("Temperature: ");
    Serial.print(temperatureCelsius);
    Serial.println(" °C");
    changeAllFanSpeed(255);
  } else {
    Serial.println("Error: Could not read temperature");
  }

  // currentTime = millis();
  // if (currentTime - previousTime >= 1000) {
  //   detachInterrupt(digitalPinToInterrupt(fan_rpm_pin));
  //   unsigned long fanRPM = calculateFanSpeed();
  //   Serial.print("Fan Speed: ");
  //   Serial.print(fanRPM);
  //   Serial.println(" RPM");
  //   fanPulseCount = 0;
  //   attachInterrupt(digitalPinToInterrupt(fan_rpm_pin), countFanPulse, RISING);
  //   previousTime = currentTime;
  // }
  delay(100); 
}

// void countFanPulse() {
//   fanPulseCount++;
// }

void changeAllFanSpeed(int speed) {
  analogWrite(fan_control_pin1, speed);
  analogWrite(fan_control_pin2, speed);
  analogWrite(fan_control_pin3, speed);

}

// unsigned long calculateFanSpeed() {
//   unsigned long fanRPM = (fanPulseCount * 60UL) / 2;
//   return fanRPM;
// }
