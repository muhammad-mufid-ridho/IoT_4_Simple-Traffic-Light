// C++ code
//

//create variabel
int redLight = 8;
int greenLight = 9;
int blueLight = 10;

void setup()
{
  //Initialize pin to be Output
  pinMode(redLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
  pinMode(blueLight, OUTPUT);
}

void loop()
{
  digitalWrite(redLight, HIGH);
  delay(3000); 
  digitalWrite(redLight, LOW);
  digitalWrite(redLight, 255);
  digitalWrite(greenLight, 255);
  digitalWrite(blueLight, 0);
  delay(1000); 
  digitalWrite(redLight, 0);
  digitalWrite(greenLight, 0);
  digitalWrite(blueLight, 0);
  digitalWrite(greenLight, HIGH);
  delay(2000); 
  digitalWrite(greenLight, LOW);
}