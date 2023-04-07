String str ;    
String strs[20];
int StringCount = 0;
int x,y;
void setup() {

  Serial.begin(9600);

}
void loop() {
  if (Serial.available() > 0) {

    str = Serial.readStringUntil('\n');
    while (str.length() > 0)
    {
      int index = str.indexOf(' ');
      if (index == -1) // No space found
      {
        strs[StringCount++] = str;
        break;
      }
      else
      {
        strs[StringCount++] = str.substring(0, index);
        str = str.substring(index+1);
      }
    }
    x=strs[0].toInt();
    y=strs[1].toInt();

    //c = strtok(str," ")
    //y = Serial.readStringUntil('\n');
    Serial.println(x);
    Serial.println(y);
    //Serial.println(y)
  }

}
