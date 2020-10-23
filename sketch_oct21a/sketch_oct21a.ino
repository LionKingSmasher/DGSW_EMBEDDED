void setup() {
  Serial.begin(9600);
  DDRD = 0xFF;
  PORTD = 0x00;
}

void loop() {
  for(int i = 2; i < 5; i++)
  {
    if(i%2 == 0)
    {
      for(int j = 0; j < 3; j++)
      {
        PORTD = 1 << (i % 3) + 2;
        delay(200);
        PORTD &= ~(1 << ( i % 3) + 2);
        delay(200);
      }
    }
    else if(i%2 == 1)
    {
      for(int j = 0; j < 3; j++)
      {
        PORTD = 1 << (i % 3) + 2;
        delay(500);
        PORTD &= ~(1 << ( i % 3) + 2);
        delay(500);
      }
    }
  }
}
