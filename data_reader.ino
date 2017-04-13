//Serial printer for the EMG sensor
//This code is for printing the EMG value on the
//serial monitor.
//
//© Au Robots 8.4.2017


void setup() {
Serial.begin(9600);
}

void loop() {
Serial.println(analogRead(x));
}

