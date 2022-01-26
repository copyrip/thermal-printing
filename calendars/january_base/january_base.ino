#include "Adafruit_Thermal.h"
#include "esoWeek.h"

#include "SoftwareSerial.h"
#define TX_PIN 6 // Arduino transmit  YELLOW WIRE  labeled RX on printer
#define RX_PIN 5 // Arduino receive   GREEN WIRE   labeled TX on printer

SoftwareSerial mySerial(RX_PIN, TX_PIN); // Declare SoftwareSerial obj first
Adafruit_Thermal printer(&mySerial);     // Pass addr to printer constructor

void setup() {
  pinMode(7, OUTPUT); digitalWrite(7, LOW);

  mySerial.begin(19200);  // Initialize SoftwareSerial

  printer.begin();        // Init printer (same regardless of serial type)
    printer.setFont('A');
    printer.setSize('S');
    printer.println("[1] january");
     printer.setFont('B');
    printer.setSize('S');
    printer.println("");
  printer.printBitmap(esoWeek_width, esoWeek_height, esoWeek_data);
  
  printer.setLineHeight(1);
  
printer.println("\xDA\xC4\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xBF");
printer.println("\xB3     \xB3     \xB3     \xB3     \xB3     \xB3  1  \xB3  2 \xB3");
printer.println("\xC3\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xB4");
printer.println("\xB3  3  \xB3  4  \xB3  5  \xB3  6  \xB3  7  \xB3  8  \xB3  9 \xB3");
printer.println("\xC3\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xB4");
printer.println("\xB3 10  \xB3 11  \xB3 12  \xB3 13  \xB3 14  \xB3 15  \xB3 16 \xB3");
printer.println("\xC3\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xB4");
printer.println("\xB3 17  \xB3 18  \xB3 19  \xB3 20  \xB3 21  \xB3 22  \xB3 23 \xB3");
printer.println("\xC3\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xB4");
printer.println("\xB3 24  \xB3 25  \xB3 26  \xB3 27  \xB3 28  \xB3 29  \xB3 30 \xB3");
printer.println("\xC3\xC4\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xD9");
printer.println("\xB3 31  \xB3");
printer.println("\xC0\xC4\xC4\xC4\xC4\xC4\xD9");
printer.println(" ");
printer.setLineHeight(30);
printer.println("sat.  1  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
printer.println("sun.  2  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
printer.println("mon.  3 ..................................");
printer.println("tue.  4 ..................................");
printer.println("wen.  5 ..................................");
printer.println("thu.  6 ..................................");
printer.println("fri.  7 ..................................");
printer.println("sat.  8  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
printer.println("sun.  9  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
printer.println("mon. 10 ..................................");
printer.println("tue. 11 ..................................");
printer.println("wen. 12 ..................................");
printer.println("thu. 13 ..................................");
printer.println("fri. 14 ..................................");
printer.println("sat. 15  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
printer.println("sun. 16  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
printer.println("mon. 17 ..................................");
printer.println("tue. 18 ..................................");
printer.println("wen. 19 ..................................");
printer.println("thu. 20 ..................................");
printer.println("fri. 21 ..................................");
printer.println("sat. 22  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
printer.println("sun. 23  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
printer.println("mon. 24 ..................................");
printer.println("tue. 25 ..................................");
printer.println("wen. 26 ..................................");
printer.println("thu. 27 ..................................");
printer.println("fri. 28 ..................................");
printer.println("sat. 29  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
printer.println("sun. 30  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
printer.println("mon. 31 ..................................");
printer.println(" ");
printer.println("notes: ...................................");
printer.println("..........................................");
printer.println("..........................................");
printer.println("..........................................");
printer.println("..........................................");
printer.println("..........................................");
printer.println("..........................................");



  printer.sleep();      // Tell printer to sleep
  delay(3000L);         // Sleep for 3 seconds
  printer.wake();       // MUST wake() before printing again, even if reset
  printer.setDefault(); // Restore printer to defaults
}

void loop() {
}
