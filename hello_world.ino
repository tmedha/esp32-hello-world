void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello World, Medha here.");
  pinMode(LED_BUILTIN, OUTPUT);
 

}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(LED_BUILTIN, HIGH);
   delay(500);
   digitalWrite(LED_BUILTIN, LOW);
   delay(500);

}

