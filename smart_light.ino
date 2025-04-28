char x,z,i;
int pattern();
int automode();
int manual();


void setup()
 {
   Serial.begin(9600);
   pinMode(2,OUTPUT);
   digitalWrite(2,HIGH); 
    
   pattern();
   
   delay(100);

 }  
int pattern()
 {
   Serial.println("\n\nSmart light system:");
   Serial.println("a) Auto mode");
   Serial.println("b)Manual  mode");
  return 0;
 } 

void loop() 
{  
    
  if(Serial.available())
    {
      x=Serial.read();
     
     if(x=='a')
     { 
        automode();
        pattern();
      }
  else  if(x=='b')
     { 
           Serial.println("Manual Mode");
            Serial.println("a) ON");
          Serial.println("b) OFF");
          Serial.println("c) Exit");  
            manual();
            pattern();
     }  
  }
}
int automode()
{
   while(1)
           {
           if(analogRead(A0)>600)
              {
                 Serial.println("Auto  Mode");
                digitalWrite(2,LOW);
                Serial.println("ON"); 
                while(analogRead(A0)>=600)
                {
                if(Serial.available())
                        {
                   x=Serial.read();
                   
                    if(x=='c')
                    {
                      return 0;  
                    }
                  }
                  delay(20);
                }
          }
         else 
          {
          Serial.println("Auto  Mode");
          digitalWrite(2,HIGH);
          Serial.println("LED OFF"); 
          delay(100);
                   
           while(analogRead(A0)<=600)
           {
            if(Serial.available())
             {
                  x=Serial.read();
                 if(x=='c')
                {
                  return 0;
                }                        
              }
              delay(20);
            } 
             
          } 
         
      }
 }

           

int manual()
 {
  char x  ;
  while(1)
  {
     if(Serial.available())
    {
       x=Serial.read();
       if(x=='a')
            {
              Serial.println("Manual Mode");
                Serial.println("ON");
              digitalWrite(2,LOW);
                
            }
           
            else if(x=='b')
            {
                Serial.println("Manual Mode"); 
                Serial.println("OFF");
                digitalWrite(2,HIGH);
           }  
       else if(x=='c')
              {
                  return 0;
                  
              }  
         }
      }
    
 } 
  