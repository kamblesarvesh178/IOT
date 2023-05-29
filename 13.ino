const int buzzer = A1; // LED connected to digital pin 13
const int knockSensor = A1; // the piezo is connected to analog pin 0
const int threshold = 400; // threshold value to decide when the detected sound is a knock or not

// these variables will change:
int sensorReading = 0; // variable to store the value read from the sensor pin

void setup() {
pinMode(buzzer,INPUT);
}

void loop() {

// read the sensor and store it in the variable sensorReading:
pinMode(buzzer,INPUT);
sensorReading = analogRead(knockSensor);

// if the sensor reading is greater than the threshold:
if (sensorReading >= threshold) {
pinMode(buzzer,OUTPUT);
tone(buzzer,600);
// Waits some time to turn off
delay(5000);
//Turns the buzzer off
noTone(buzzer);
// Sounds the buzzer at the frequency relative to the note D in Hz
//tone(buzzer,600);

/*delay(200);
noTone(buzzer);
// Sounds the buzzer at the frequency relative to the note E in Hz
tone(buzzer,600);
delay(200);
noTone(buzzer);
// Sounds the buzzer at the frequency relative to the note F in Hz
tone(buzzer,600);
delay(200);
noTone(buzzer);
// Sounds the buzzer at the frequency relative to the note G in Hz
tone(buzzer,6000. );
delay(200);*/
//noTone(buzzer);

}

delay(100); // delay to avoid overloading the serial port buffer
}