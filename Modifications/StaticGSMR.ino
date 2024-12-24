// THIS IS AN UNTESTED EXAMPLE IT MAY OR MAY NOT WORK

void setup()
{
  Serial.begin(19200);
    Serial.print(22, BYTE); // Cursor Off
    Serial.print(14, BYTE); // Clear Display              
    Serial.print(24, BYTE); // International Font              
}

void loop()
{ 
  clearLCD();
  Serial.print("GSM-R GB"); // Display "GSM-R GB" on the first line
  delay(5000); // Add a delay to ensure the display doesn't get refreshed unnecessarily
}

// Clear the Display
void clearLCD(){
  Serial.print(13, BYTE); // Carriage Return
  Serial.print(14, BYTE); // Clear Display
}

// Drop to a new line and return
void newLine() { 
  Serial.print(10, BYTE); // Line Feed
  Serial.print(13, BYTE); // Carriage Return
}
