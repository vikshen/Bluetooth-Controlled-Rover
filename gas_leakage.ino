int PIN = 7;

int sensor = 0;

void setup() {

pinMode (PIN,INPUT);

Serial.begin(9600);

delay(5000); }

void loop() {

sensor = digitalRead (PIN);

if (sensor == HIGH){

Serial.println("AT”);// AT-abbreviation for attention(used for modems)

delay(1000);

Serial.println("AT+CMGF=1”);//=1 indicates sending, not expecting any message back

// CMGF means open messenger
delay(1000);

Serial.println("AT+CMGS=\\"+18607710211\””); //CHANGE TO DESTINATION NUMBER

delay(1000);

Serial.print("GAS LEAKAGE!!!!! Attention required"); // message which is sent

  //message should not contain more than 26 characters

Serial.write(26);

delay(300000); }

}
