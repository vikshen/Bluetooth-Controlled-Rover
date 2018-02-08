int input='0'; //input to be used



void setup() {
  
  pinMode(13,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
 }

void loop() {
  
if(Serial.available()>0)
 {
  input = Serial.read();
 }
 
// forward
if(input == '1')
  {
  digitalWrite(13,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(8,LOW);
   digitalWrite(10,HIGH);
   }

 //back  
 else if(input == '2')
  {
   digitalWrite(13,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(10,LOW);
}

//right
else if(input == '3')
  {
   digitalWrite(13,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(8,HIGH);
   digitalWrite(10,LOW);
   }

  //left 
 else if(input == '4')
  {
digitalWrite(13,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(8,LOW);
   digitalWrite(10,HIGH);
   }

   //default state
    else if(input == '0')
  {
digitalWrite(13,LOW);
   digitalWrite(9,LOW);
   digitalWrite(8,LOW);
   digitalWrite(10,LOW);
   
}


  }


