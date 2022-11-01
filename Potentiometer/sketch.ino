#define LED 13 //LED in pin 13
#define POT A0 // Potentiometer on pin A0
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);

  Serial.begin(9600); // set up Serial monitor

}
int i = 0;
void loop() {
  // put your main code here, to run repeatedly:

  int potStatus = analogRead(POT);

  digitalWrite(LED, HIGH);
  delay(potStatus);
  digitalWrite(LED, LOW);
  delay(potStatus );

 i++;
  Serial.print("blinks:");
  Serial.println(i);
}
//https://wokwi.com/projects/346525179597292116 
