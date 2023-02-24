int ledPin1 = 13;
int ledPin2 = 12;
int i = 0;
int fib_count =0;
int i_max = 10;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin1,OUTPUT);
pinMode(ledPin2,OUTPUT);
}
// defining a function
int fib(int num){
  if (num==0) return 0;
  else if (num == 1) return 1;
  return fib(num-1)+fib(num-2);
}
void loop() {
  fib_count = fib(i);
  if (i % 2 == 0){
    digitalWrite(ledPin2,LOW);
    for (int n=0; n<fib_count; n++){
      digitalWrite(ledPin1, HIGH);
      delay(100);
      digitalWrite(ledPin1,LOW);
      delay(100);
    }
  }
  else{
    digitalWrite(ledPin1,LOW);
    for (int n=0; n<fib_count; n++){
      digitalWrite(ledPin2,HIGH);
      delay(100);
      digitalWrite(ledPin2,LOW);
      delay(100);
    }
  }
  i++;
  if (i>i_max) i=0;
}
