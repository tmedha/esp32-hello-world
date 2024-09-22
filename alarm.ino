#include <time.h>
#include <stdio.h>
#include <string.h>
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello World, Medha here.");
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  time_t mytime = time(NULL);
  char * time_str = ctime(&mytime);
  time_str[strlen(time_str)-1] = '\0';
  printf("Current Time : %s\n", time_str);
  if(strcmp(time_str, "Thu Jan  1 00:00:10 1970")==0)
  {
    printf("It's Time!");
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
  }
}

