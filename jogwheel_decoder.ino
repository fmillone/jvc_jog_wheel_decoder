#define READ_A 2 // Jog pin 1
#define READ_B 3 // Jog pin 2
#define READ_C 4 // jog pin 3
#define READ_D 5 // jog pin 4


void setup() {
  Serial.begin(9600);
  Serial.println("\ntest");
  pinMode(READ_A, INPUT_PULLUP);
  pinMode(READ_B, INPUT_PULLUP);
  pinMode(READ_C, INPUT_PULLUP);
  pinMode(READ_D, INPUT_PULLUP);

}

void loop() {
  //char strBuf[50];
  //sprintf(strBuf, "-%d.%d.%d.%d-", ! digitalRead(READ_A), !digitalRead(READ_B), !digitalRead(READ_C), !digitalRead(READ_D));
  //Serial.println(strBuf);
  Serial.println(getCode());
  delay(100);
}
//             0 1 2 3 4 5 6 7
int codes[] = {0,3,1,2,7,4,6,5};
bool left,b,c,d;
int getCode() {
  left = !digitalRead(READ_A);
  b = !digitalRead(READ_B);
  c = !digitalRead(READ_C);
  d = !digitalRead(READ_D);
  int code = 0;

  code <<= 1;
  if(d) code |= 1;

  code <<= 1;
  if(c) code |= 1;

  code <<= 1;
  if(b) code |= 1;

  code = codes[code];
  return left ? -code : code;
}
