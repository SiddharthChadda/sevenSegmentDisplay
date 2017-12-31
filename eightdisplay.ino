int arr[]={0x3F,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x77};
void setup() {
  // put your setup code here, to run once:
  DDRD=0xFF;

}

void loop() {
  // put your main code here, to run repeatedly:
  PORTD=0x3F;
  delay(100);

  for(int i=0;i<10;i++)
  {
    PORTD=arr[i];
  delay(100);
  }

}
