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
  Serial.print(" Hello");
  newLine();
  Serial.print("Arduino");
  newLine();
  Serial.print("This was a test.");
  newLine();
  Serial.print(159, BYTE);
  delay(5000);
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
