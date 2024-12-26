// THIS IS AN UNTESTED EXAMPLE IT MAY OR MAY NOT WORK

// Define a variable for the right side display
String rightSide = "1Z99"; // This can be changed to any 4-character string

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
  displayText("GSM-R GB", rightSide); // Display both strings
  delay(5000); // Add a delay to ensure the display doesn't get refreshed unnecessarily
}

// Clear the Display
void clearLCD(){
  Serial.print(13, BYTE); // Carriage Return
  Serial.print(14, BYTE); // Clear Display
}

// Function to display text on the LCD
void displayText(String left, String right) {
  // Print the left and right strings
  Serial.print(left); // Print left side
  Serial.print(" "); // Add a space between
  Serial.print(right); // Print right side
}

// Drop to a new line and return
void newLine() { 
  Serial.print(10, BYTE); // Line Feed
  Serial.print(13, BYTE); // Carriage Return
}