#include <WEMOS_Matrix_LED.h>

MLED mled(5); //set intensity=5


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Led Matrix Ready");
//mled.dot(2,8); // draw dot
mled.display();
 
}
 int x;
 int y;
  bool testX = false;
 bool testY = false;
 bool askedX = false;
 bool askedY = false;
void loop() {
  // put your main code here, to run repeatedly:
 int xa=0;
 int ya=0; 

 


  
  if (!testX) {  

    if (!askedX) {
      Serial.println("enter x");
      askedX = true;
      delay(2000);

  
  }
    if(Serial.available()){
      x=Serial.read();
       testX = true;}
  }

  if (testX && !testY){ 
  if (!askedY) {
 Serial.println("enter y");
 askedY = true;
 delay(2000);

  }
    if(Serial.available()){
     y=Serial.read();
    testY= true;
  }
  }
  
 
  if (testX && testY){
    Serial.println(x); 
    Serial.println(y);
  mled.dot(x,y); // draw dot
  mled.display();
  x = 0;
  y = 0;
 testX = false;
 testY = false;
 askedX = false;
 askedY = false;
    
    }
     

    }
  






// switch (x) {
//      case '1':
//        mled.dot(1,1); // draw dot
//        mled.display();
//        break;
//      case 'b':
//        mled.dot(1,2); // draw dot
//        mled.display();
//        break;
//      case 'c':
//        mled.dot(1,3); // draw dot
//        mled.display();
//        break;
//      case 'd':
//        mled.dot(1,4); // draw dot
//        mled.display();
//        break;
//      case 'e':
//        mled.dot(1,5); // draw dot
//        mled.display();
//        break;
//      case 'f':
//        mled.dot(1,6); // draw dot
//        mled.display();
//        break; 
//      case 'g':
//        mled.dot(1,7); // draw dot
//        mled.display();
//        break;
//      case 'h':
//        mled.dot(1,8); // draw dot
//        mled.display();
//        break;
//                               
// }
     
     
  

  

