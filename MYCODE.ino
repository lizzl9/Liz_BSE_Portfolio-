#include <SoftwareSerial.h>
#include <Servo.h>
//2 3 10 11
//2 3 4  5
//---------
//4 5 6 7
//6 7 8 9
Servo servo01;
Servo servo02;
Servo servo03;
Servo servo04;


SoftwareSerial Bluetooth(0, 1);  // Arduino(RX, TX) - HC-05 Bluetooth (TX, RX)

int servo1Pos, servo2Pos, servo3Pos, servo4Pos;                  // current position
int servo1PPos, servo2PPos, servo3PPos, servo4PPos;              // previous position
int servo01SP[50], servo02SP[50], servo03SP[50], servo04SP[50];  // for storing positions/steps
int speedDelay = 20;
int index = 0;
String dataIn = "";


void setup() {
  servo01.attach(6);
  servo02.attach(7);
  servo03.attach(10);
  servo04.attach(11);

  pinMode(2, OUTPUT);     //left motors  forward
  pinMode(3, OUTPUT);     //left motors reverse
  pinMode(4, OUTPUT);     //right  motors reverse
  pinMode(5, OUTPUT);     //right motors forward
  Bluetooth.begin(9600);  // Default baud rate of the Bluetooth module
  Bluetooth.setTimeout(1000);
  Serial.begin(38400);
  delay(20);
  servo01.write(90);
  servo1PPos = 90;
  servo02.write(90);
  servo2PPos = 90;
  servo03.write(90);
  servo3PPos = 90;
  servo04.write(90);
  servo4PPos = 90;
}

void moveTo(Servo servo, int currentPos, int newPos) {
  int i;



  if (currentPos == newPos) {
    return;
  }

  if (currentPos > newPos) {
    for (i = currentPos; i > newPos; i--) {
      servo.write(i);
      delay(30);
    }
  }

  if (currentPos < newPos) {
    for (i = currentPos; i < newPos; i++) {
      servo.write(i);
      delay(30);
    }
  }
}

void loop() {
  // Check for incoming data
  if (Bluetooth.available() > 0) {


    dataIn = Bluetooth.readString();  // Read the data as string
    Serial.println(dataIn);
    if (dataIn.startsWith("FORWARD")) {
      digitalWrite(2, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
    }
    if (dataIn.startsWith("BACKWARD")) {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(5, LOW);
    }
    if (dataIn.startsWith("LEFT")) {
      digitalWrite(5, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(2, LOW);
    }
    if (dataIn.startsWith("RIGHT")) {
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
    }
    if (dataIn.startsWith("STOP")) {
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
    }

    // If "Waist" slider has changed value - Move Servo 1 to position
    if (dataIn.startsWith("s1")) {
      String dataInS = dataIn.substring(2);  // Extract only the number. E.g. a "s1120" to "120"
      servo1Pos = dataInS.toInt();           // Convert the string into integer


      // We use for loops so we can control the speed of the servo


      moveTo(servo01, servo1PPos, servo1Pos);
      servo1PPos = servo1Pos;  // set current position as previous position
    }

    // Move Servo 2
    if (dataIn.startsWith("s2")) {
      String dataInS = dataIn.substring(2);
      servo2Pos = dataInS.toInt();


      servo2PPos = servo02.read();
      moveTo(servo02, servo2PPos, servo2Pos);
      servo2PPos = servo2Pos;
    }  // Move Servo 3
    if (dataIn.startsWith("s3")) {
      String dataInS = dataIn.substring(2);
      servo3Pos = dataInS.toInt();



      servo3PPos = servo03.read();
      moveTo(servo03, servo3PPos, servo3Pos);
      servo3PPos = servo3Pos;
    }
    // Move Servo 4
    if (dataIn.startsWith("s4")) {
      String dataInS = dataIn.substring(2);
      Serial.println(dataInS);
      servo4Pos = dataInS.toInt();



      servo4PPos = servo04.read();
      moveTo(servo04, servo4PPos, servo4Pos);
      servo4PPos = servo4Pos;
    }


    if (dataIn.startsWith("test")) {

      servo1PPos = servo01.read();
      moveTo(servo01, servo1PPos, 0);
      moveTo(servo01, 0, 180);
      moveTo(servo01, 180, 90);
      servo1PPos = 90;

      servo2PPos = servo02.read();
      moveTo(servo02, servo2PPos, 0);
      moveTo(servo02, 0, 180);
      moveTo(servo02, 180, 90);
      servo2PPos = 90;

      servo3PPos = servo03.read();
      moveTo(servo03, servo3PPos, 0);
      moveTo(servo03, 0, 180);
      moveTo(servo03, 180, 90);
      servo3PPos = 90;

      servo4PPos = servo02.read();
      moveTo(servo04, servo4PPos, 0);
      moveTo(servo04, 0, 180);
      moveTo(servo04, 180, 90);
      servo4PPos = 90;
    }

    // If button "SAVE" is pressed
    if (dataIn.startsWith("SAVE")) {
      servo01SP[index] = servo1PPos;  // save position into the array
      servo02SP[index] = servo2PPos;
      servo03SP[index] = servo3PPos;
      servo04SP[index] = servo4PPos;

      index++;  // Increase the array index
    }
    // If button "RUN" is pressed
    if (dataIn.startsWith("RUN")) {
      Servo runservo();  // Automatic mode - run the saved steps
    }
    // If button "RESET" is pressed
    if (dataIn == "RESET") {
      memset(servo01SP, 0, sizeof(servo01SP));  // Clear the array data to 0
      memset(servo02SP, 0, sizeof(servo02SP));
      memset(servo03SP, 0, sizeof(servo03SP));
      memset(servo04SP, 0, sizeof(servo04SP));

      index = 0;  // Index to 0
    }
  }
}



// Automatic mode custom function - run the saved steps
void runservo() {
  while (dataIn != "RESET") {               // Run the steps over and over again until "RESET" button is pressed
    for (int i = 0; i <= index - 2; i++) {  // Run through all steps(index)
      if (Bluetooth.available() > 0) {      // Check for incomding data
        dataIn = Bluetooth.readString();
        if (dataIn == "PAUSE") {     // If button "PAUSE" is pressed
          while (dataIn != "RUN") {  // Wait until "RUN" is pressed again
            if (Bluetooth.available() > 0) {
              dataIn = Bluetooth.readString();
              if (dataIn == "RESET") {
                break;
              }
            }
          }
        }
        // If speed slider is changed
        if (dataIn.startsWith("ss")) {
          String dataInS = dataIn.substring(2, dataIn.length());
          speedDelay = dataInS.toInt();  // Change servo speed (delay time)
        }
      }
      // Servo 1
      if (servo01SP[i] == servo01SP[i + 1]) {
      }
      if (servo01SP[i] > servo01SP[i + 1]) {
        for (int j = servo01SP[i]; j >= servo01SP[i + 1]; j--) {
          servo01.write(j);
          delay(speedDelay);
        }
      }
      if (servo01SP[i] < servo01SP[i + 1]) {
        for (int j = servo01SP[i]; j <= servo01SP[i + 1]; j++) {
          servo01.write(j);
          delay(speedDelay);
        }
      }

      // Servo 2
      if (servo02SP[i] == servo02SP[i + 1]) {
      }
      if (servo02SP[i] > servo02SP[i + 1]) {
        for (int j = servo02SP[i]; j >= servo02SP[i + 1]; j--) {
          servo02.write(j);
          delay(speedDelay);
        }
      }
      if (servo02SP[i] < servo02SP[i + 1]) {
        for (int j = servo02SP[i]; j <= servo02SP[i + 1]; j++) {
          servo02.write(j);
          delay(speedDelay);
        }
      }

      // Servo 3
      if (servo03SP[i] == servo03SP[i + 1]) {
      }
      if (servo03SP[i] > servo03SP[i + 1]) {
        for (int j = servo03SP[i]; j >= servo03SP[i + 1]; j--) {
          servo03.write(j);
          delay(speedDelay);
        }
      }
      if (servo03SP[i] < servo03SP[i + 1]) {
        for (int j = servo03SP[i]; j <= servo03SP[i + 1]; j++) {
          servo03.write(j);
          delay(speedDelay);
        }
      }

      // Servo 4
      if (servo04SP[i] == servo04SP[i + 1]) {
      }
      if (servo04SP[i] > servo04SP[i + 1]) {
        for (int j = servo04SP[i]; j >= servo04SP[i + 1]; j--) {
          servo04.write(j);
          delay(speedDelay);
        }
      }
      if (servo04SP[i] < servo04SP[i + 1]) {
        for (int j = servo04SP[i]; j <= servo04SP[i + 1]; j++) {
          servo04.write(j);
          delay(speedDelay);
        }
      }
    }
  }
}