#include<iostream>
using namespace std;
float volumeOfPyramid(float length,float width,float height,string unit);
main()
{
float length,width,height,result;
string unit;
cout <<"ENTER THE LENGTH= ";
cin  >>length;
cout <<"ENTER THE WIDTH= ";
cin  >>width;
cout <<"ENTER THE HEIGHT= ";
cin  >>height;
cout <<"ENTER THE UNIT(MILLIMETERS,CENTIMETERS,KILOMETERS)= ";
cin  >>unit;
result = volumeOfPyramid(length,width,height,unit);
cout <<"VOLUME OF PYRAMID IS= "<<result;
}
float volumeOfPyramid(float length,float width,float height,string unit)
{
 float volume;

 if(unit == "millimeters")
 {
    volume= ((length * width * height)/3)*(1000 * 1000  * 1000);
    return volume;
 }
 if(unit == "kilometers")
 {
     volume= ((length * width * height)/3)/(1000 * 1000  * 1000);;
    return volume;
 }
 if(unit == "centimeters")
 {
     volume=((length * width * height)/3)*(100 * 100  * 100);
     return volume;
 }
  if(unit == "meters")
 {
     volume= ((length * width * height)/3);
    return volume;
 }
  return 0;
}