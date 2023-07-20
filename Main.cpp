//ITE001 Final Project Sample
#include<iostream>
using namespace std;
main()
{ int peripheral;
char price;
char brand, Monitor, Mouse, Keyboard;
int totKeyboard=0, totMouse=0, totMonitor=0, totbill=0;
int pay, change = 0;
int qtyVP249QGR, qtyVG258QR, qtyVG278QR; //Monitor 1
int qtyCRG5, qtyodG7, qtyodG9; //Monitor 2
int qtyXC24S, qtyGT24, qtyGT27; //Monitor 3
int qtyG102, qtyg305, qtyGpro; //Mouse 1
int qtyviper, qtydeath, qtyviperult; //Mouse 2
int qtyrace, qtysen, qtyrival; //Mouse 3
int qty64k, qty102k, qty104k; //Keyboard 1
int qtyapex, qtytkl, qtyapexp; //Keyboard 2
int qtycherry, qtycherryb, qtygat; //Keyboard 3

do{// for peripherals
cout<<" "<<endl;
cout<<"\n";
cout<<"***********************";
cout<<"\n* T.I.Peripherals store *";
cout<<"\n* *";
cout<<"\n* 1. Monitor *";
cout<<"\n* 2. Mouse *";
cout<<"\n* 3. Keyboard *";
cout<<"\n* Press 4 to cancel *"<<endl;
cout<<"***********************";
cout<<"\nChoose a peripheral from [1-3]: ";
cin>> peripheral;
cout<<"\n";
switch(peripheral)//monitor
{
case 1:
switch (brand);
cout<<"\n";
cout<<"************ "<<endl;
cout<<"* 1. Asus * "<<endl;
cout<<"* 2. Samsung * "<<endl;
cout<<"* 3. Nvision * "<<endl;
cout<<"************";
cout<<"\n Choose a Brand from [1-3]: ";
cin>> Monitor;
if (Monitor == '1')
{ cout<<"\n";
cout<<"****************************************************"
<<endl;
cout<<"* 1. VP249QGR 23.8-Inches Gaming Monitor
144Hz (10,500)* " <<endl;
cout<<"* * "<<endl;
cout<<"* 2. VG258QR 24.5-Inches Gaming
Monitor 165Hz (14,140) *" <<endl;
cout<<"* *
"<<endl;
cout<<"* 3. VG278QR 27-Inches Gaming
Monitor 165Hz (15,300) *"<<endl;
cout<<"**************************************************** ";
cout<<" \n Choose a Monitor from
[1-3]: "; cin>> price;
switch(price);
{ if (price == '1' )
{cout<<"\n
How many VP249QGR: ";
cin>>qtyVP249QGR;
totMonitor = totMonitor+qtyVP249QGR*10500;
cout<<"\n your price is " <<
totMonitor;
}
else if (price == '2' )
{cout<<"\n
How many VG258QR: ";
cin>>qtyVG258QR;
totMonitor = totMonitor+qtyVG258QR*14140;
cout<<"\n
your price is " << totMonitor;
}
else if (price == '3' )
{cout<<"\n
How many VG278QR: ";
cin>>qtyVG278QR;
totMonitor = totMonitor+qtyVG278QR*15300;
cout<<"\n your price is: " <<totMonitor;
}
}//end of Switch Price
}//end of Monitor 1cout<<"\n Choose a Brand from [1-3]: ";
cin>> Monitor;
if (Monitor == '1')
{ cout<<"\n";
cout<<"****************************************************"
<<endl;
cout<<"* 1. VP249QGR 23.8-Inches Gaming Monitor
144Hz (10,500)* " <<endl;
cout<<"* * "<<endl;
cout<<"* 2. VG258QR 24.5-Inches Gaming
Monitor 165Hz (14,140) *" <<endl;
cout<<"* *
"<<endl;
cout<<"* 3. VG278QR 27-Inches Gaming
Monitor 165Hz (15,300) *"<<endl;
cout<<"**************************************************** ";
cout<<" \n Choose a Monitor from
[1-3]: "; cin>> price;
switch(price);
{ if (price == '1' )
{cout<<"\n
How many VP249QGR: ";
cin>>qtyVP249QGR;
totMonitor = totMonitor+qtyVP249QGR*10500;
cout<<"\n your price is " <<
totMonitor;
}
else if (price == '2' )
{cout<<"\n
How many VG258QR: ";
cin>>qtyVG258QR;
totMonitor = totMonitor+qtyVG258QR*14140;
cout<<"\n
your price is " << totMonitor;
}
else if (price == '3' )
{cout<<"\n
How many VG278QR: ";
cin>>qtyVG278QR;
totMonitor = totMonitor+qtyVG278QR*15300;
cout<<"\n your price is: " <<totMonitor;
}
}//end of Switch Price
}//end of Monitor 1
if (Monitor == '2' )
{ cout<<"*************************************************"
<<endl;
cout<<"* 1. 24in CRG5 144Hz Curved Gaming Monitor
(11,641) *" <<endl;
cout<<"* * "<<endl;
cout<<"* 2. 32in Odyssey G7 Gaming Monitor
240Hz (33,569) *" <<endl;
cout<<"* * "<<endl;
cout<<"* 3. 49in Odyssey G9 Gaming Monitor
240Hz (67,319) *"<<endl;
cout<<"************************************************* ";
cout<<" \n Choose a Monitor from
[1-3]: "; cin>> price;
switch(price);
{ if (price ==
'1' )
{cout<<"\n
How many CRG5: ";
cin>>qtyCRG5;
totMonitor = totMonitor+qtyCRG5*11641;
cout<<"\n your price is: " << totMonitor;
}
else if (price == '2' )
{cout<<"\n
How many Odyssey G7: ";
cin>>qtyodG7;
totMonitor = totMonitor+qtyodG7*33569;
cout<<"\n your price is: " << totMonitor;
}
else if (price == '3' )
{cout<<"\n
How many Odyssey G9: ";
cin>>qtyodG9;
totMonitor = totMonitor+qtyodG9*67319;
cout<<"\n
your price is: " << totMonitor+totMonitor;
}
}//end of Switch Price
} //end of monitor 2
if (Monitor == '3' )
{
cout<<"**********************************************************" <<endl;
cout<<"* 1. XC24S 24in 75Hz Curve V2 Wall Mountable
Monitor (4,599) * " <<endl;if (Monitor == '2' )
{ cout<<"*************************************************"
<<endl;
cout<<"* 1. 24in CRG5 144Hz Curved Gaming Monitor
(11,641) *" <<endl;
cout<<"* * "<<endl;
cout<<"* 2. 32in Odyssey G7 Gaming Monitor
240Hz (33,569) *" <<endl;
cout<<"* * "<<endl;
cout<<"* 3. 49in Odyssey G9 Gaming Monitor
240Hz (67,319) *"<<endl;
cout<<"************************************************* ";
cout<<" \n Choose a Monitor from
[1-3]: "; cin>> price;
switch(price);
{ if (price ==
'1' )
{cout<<"\n
How many CRG5: ";
cin>>qtyCRG5;
totMonitor = totMonitor+qtyCRG5*11641;
cout<<"\n your price is: " << totMonitor;
}
else if (price == '2' )
{cout<<"\n
How many Odyssey G7: ";
cin>>qtyodG7;
totMonitor = totMonitor+qtyodG7*33569;
cout<<"\n your price is: " << totMonitor;
}
else if (price == '3' )
{cout<<"\n
How many Odyssey G9: ";
cin>>qtyodG9;
totMonitor = totMonitor+qtyodG9*67319;
cout<<"\n
your price is: " << totMonitor+totMonitor;
}
}//end of Switch Price
} //end of monitor 2
if (Monitor == '3' )
{
cout<<"**********************************************************" <<endl;
cout<<"* 1. XC24S 24in 75Hz Curve V2 Wall Mountable
Monitor (4,599) * " <<endl;
cout<<"* * "<<endl;
cout<<"* 2. GT24R18V3 24in 144Hz Curved
Gaming Monitor (7,699) *" <<endl;
cout<<"* * "<<endl;
cout<<"* 3. GT27R18V3 27in 165Hz Curved
Gaming Monitor (10,095) * "<<endl;
cout<<"**********************************************************" ;
cout<<" \n Choose a Monitor from [1-3]: "; cin>>
price;
switch(price);
{ if (price == '1' )
{cout<<"\n How many
XC24S: ";
cin>>qtyXC24S;
totMonitor = totMonitor+qtyXC24S*4599;
cout<<"\n your price is: " << totMonitor;
}
else if (price == '2' )
{cout<<"\n
How many GT24R18V3: ";
cin>>qtyGT24;
totMonitor = totMonitor+qtyGT24*7699;
cout<<"\n your price is: " << totMonitor;
}
else if(price == '3' )
{cout<<"\n
How many GT27R18V3: ";
cin>>qtyGT27;
totMonitor = totMonitor+qtyGT27*10095;
cout<<"\n
your price is: " << totMonitor;
}
}//end of Switch Price
} //end of Monitor 3
} //end of Switch Monitor
switch(peripheral)//mouse
{
case 2:
switch (brand);
cout<<"**************"<<endl;
cout<<"* 1. Logitech *" <<endl;
cout<<"* 2. Razer *" <<endl;
cout<<"* 3. Steelseries *" <<endl;
cout<<"**************" ;
cout<<"\n Choose a Brand from [1-3]: ";
cin>> Mouse;
if (Mouse == '1' )
{ cout<<"************************************************" <<endl;cout<<"* * "<<endl;
cout<<"* 2. GT24R18V3 24in 144Hz Curved
Gaming Monitor (7,699) *" <<endl;
cout<<"* * "<<endl;
cout<<"* 3. GT27R18V3 27in 165Hz Curved
Gaming Monitor (10,095) * "<<endl;
cout<<"**********************************************************" ;
cout<<" \n Choose a Monitor from [1-3]: "; cin>>
price;
switch(price);
{ if (price == '1' )
{cout<<"\n How many
XC24S: ";
cin>>qtyXC24S;
totMonitor = totMonitor+qtyXC24S*4599;
cout<<"\n your price is: " << totMonitor;
}
else if (price == '2' )
{cout<<"\n
How many GT24R18V3: ";
cin>>qtyGT24;
totMonitor = totMonitor+qtyGT24*7699;
cout<<"\n your price is: " << totMonitor;
}
else if(price == '3' )
{cout<<"\n
How many GT27R18V3: ";
cin>>qtyGT27;
totMonitor = totMonitor+qtyGT27*10095;
cout<<"\n
your price is: " << totMonitor;
}
}//end of Switch Price
} //end of Monitor 3
} //end of Switch Monitor
switch(peripheral)//mouse
{
case 2:
switch (brand);
cout<<"**************"<<endl;
cout<<"* 1. Logitech *" <<endl;
cout<<"* 2. Razer *" <<endl;
cout<<"* 3. Steelseries *" <<endl;
cout<<"**************" ;
cout<<"\n Choose a Brand from [1-3]: ";
cin>> Mouse;
if (Mouse == '1' )
{ cout<<"************************************************" <<endl;
cout<<"* 1. G102 Prodigy Gaming Mouse (1,500) *
" <<endl;
cout<<"* * "
<<endl;
cout<<"* 2. G305 Lightspeed Wireless Gaming
Mouse (2,777) * " <<endl;
cout<<"* *
"<<endl;
cout<<"* 3. G Pro Wireless Gaming Mouse
(5,088) * "<<endl;
cout<<"************************************************ " ;
cout<<" \n Choose a Mouse from [1-
3]: "; cin>> price;
switch(price);
{ if (price == '1' )
{cout<<"\n How many
G102: " ;
cin>>qtyG102;
totMouse = totMouse+qtyG102*1500;
cout<<"\n
your price is: "<<totMouse;
}
else if (price == '2' )
{cout<<"\n
How many g305: ";
cin>>qtyg305;
totMouse = totMouse+qtyg305*2777;
cout<<"\n
your price is: "<<totMouse;
}
else if (price == '3' )
{cout<<"\n How many
G pro wireless: ";
cin>>qtyGpro;
totMouse = totMouse+qtyGpro*5088;
cout<<"\n
your price is: "<<totMouse;
}
} //end of Switch Price
} //end of Mouse 1
if (Mouse == '2' )
{ cout<<"********************************************************"
<<endl;
cout<<"* 1. Viper Ultimate Mouse Lightweight Gaming
Mouse (1,779) * " <<endl;
cout<<"* * " <<endl;
cout<<"* 2. Deathadder Essential Gaming Mouse
(3,281) * " <<endl;
cout<<"* * "
<<endl;
cout<<"* 3. Viper Ultimate Wireless Gaming
Mouse (7,495) * "<<endl;
cout<<"******************************************************** ";
cout<<" \n Choose a Mouse from [1-3]: "; cin>>
price;
switch(price);
{ if (price == '1' )
{cout<<"\n
How many Viper Ultimate: ";
cin>>qtyviper;
totMouse = totMouse+qtyviper*1779;
cout<<"your
price is: "<<totMouse;
}
else if (price == '2' )
{cout<<"\n
How many Deathadder: ";
cin>>qtydeath;
totMouse = totMouse+qtydeath*3281;
cout<<"your
price is: "<<totMouse;
}
else if (price == '3' )
{cout<<"\n
How many Viper Ultimate Wireless: ";
cin>>qtyviperult;
totMouse = totMouse+qtyviperult*7495;
cout<<"\n
your price is: "<<totMouse;
}
} // //end of
Switch Price
} // end of Mouse 2
if (Mouse == '3' )
{ cout<<"****************************************************"
<<endl;
cout<<"* 1. Race Kana V2 Gaming Mouse (1,704)
*" <<endl;
cout<<"* * " <<endl;
cout<<"* 2. Sensei Ten Gaming Mouse (3,187)
*" <<endl;
cout<<"* * "
<<endl;
cout<<"* 3. Rival 650 - Quantum Wireless
Gaming Mouse (5,399) *" <<endl;
cout<<"****************************************************" ;
cout<<" \n Choose a Mouse from [1-3]: "; cin>>
price;
switch(price);
{ if (price == '1' )
{cout<<"\n
How many Race Kana: ";
cin>>qtyrace;
totMouse = totMouse+qtyrace*1704;
cout<<"\n
your price is: "<<totMouse;
}
else if (price == '2' )
{cout<<"\n
How many Sensei Ten: ";
cin>>qtysen;
totMouse = totMouse+qtysen*3187;
cout<<"\n
your price is: "<<totMouse;
}
else if (price == '3' )
{cout<<"\n
How many Rival 650: ";
cin>>qtyrival;
totMouse = totMouse+qtyrival*5399;
cout<<"\n
your price is: "<<totMouse;
}
}//end of Switch Price
}// end of Mouse 3
}// end of Switch Mouse
switch (peripheral)
{
case 3:
switch (brand);
cout<<"*************" <<endl;
cout<<" 1. Rapoo *" <<endl;
cout<<" 2. SteelSeries *" <<endl;
cout<<" 3. Asus *" <<endl;
cout<<"*************" ;
cout<<"\n Choose a Brand from [1-3]: ";
cin>> Keyboard;
if (Keyboard == '1' )
{ cout<<"*************************************************"
<<endl;
cout<<"* 1. VPRO V500S 64 Keys Gaming Keyboard
(1,200 00) * " <<endl;
cout<<"* * " <<endl;
cout<<"* 2. VPRO V500S 102 Keys Gaming
Keyboard (1,650.00) * " <<endl;
cout<<"* * "
<<endl;
cout<<"* 3. VPRO V500S 104 Keys Gaming
Keyboard (1,900.00) * "<<endl;
cout<<"************************************************" <<endl;
cout<<" \n Choose a Keyboard from [1-3]: ";
cin>> price;
switch(price);
{ if (price == '1' )
{cout<<"\n How many VPRO V500S 64 Keys: ";
cin>>qty64k;
totKeyboard = totKeyboard+qty64k*1200;
cout<<"\n your price is: "<<totKeyboard;
}
else if (price == '2' )
{cout<<"\n How many VPRO V500S 102 keys: ";
cin>>qty102k;
totKeyboard = totKeyboard+qty102k*1650;
cout<<"\n
your price is: "<<totKeyboard;
}
else if (price == '3' )
{cout<<"\n How many VPRO V500S 104 keys: ";
cin>>qty104k;
totKeyboard = totKeyboard+qty104k*1900;
cout<<"\n your price is"<<totKeyboard;
}
}//end of Switch Price
}//end of Keyboard 1
if (Keyboard == '2' )
{ cout<<"****************************************************"
<<endl;
cout<<"* 1. APEX RGB Gaming Keyboard 7 RED SWITCH
RGB (8,500) *" <<endl;
cout<<"* * " <<endl;
cout<<"* 2. TKL RGB Gaming Keyboard
(9,500.00) *" <<endl;
cout<<"* * "
<<endl;cout<<"* 2. VPRO V500S 102 Keys Gaming
Keyboard (1,650.00) * " <<endl;
cout<<"* * "
<<endl;
cout<<"* 3. VPRO V500S 104 Keys Gaming
Keyboard (1,900.00) * "<<endl;
cout<<"************************************************" <<endl;
cout<<" \n Choose a Keyboard from [1-3]: ";
cin>> price;
switch(price);
{ if (price == '1' )
{cout<<"\n How many VPRO V500S 64 Keys: ";
cin>>qty64k;
totKeyboard = totKeyboard+qty64k*1200;
cout<<"\n your price is: "<<totKeyboard;
}
else if (price == '2' )
{cout<<"\n How many VPRO V500S 102 keys: ";
cin>>qty102k;
totKeyboard = totKeyboard+qty102k*1650;
cout<<"\n
your price is: "<<totKeyboard;
}
else if (price == '3' )
{cout<<"\n How many VPRO V500S 104 keys: ";
cin>>qty104k;
totKeyboard = totKeyboard+qty104k*1900;
cout<<"\n your price is"<<totKeyboard;
}
}//end of Switch Price
}//end of Keyboard 1
if (Keyboard == '2' )
{ cout<<"****************************************************"
<<endl;
cout<<"* 1. APEX RGB Gaming Keyboard 7 RED SWITCH
RGB (8,500) *" <<endl;
cout<<"* * " <<endl;
cout<<"* 2. TKL RGB Gaming Keyboard
(9,500.00) *" <<endl;
cout<<"* * "
<<endl;
cout<<"* 3. APEX PRO RGB Gaming Keyboard
(10,500.00) *" <<endl;
cout<<"****************************************************" ;
cout<<" \n Choose a Keyboard from [1-3]: ";
cin>> price;
switch(price);
{ if (price ==
'1' )
{cout<<"\n How many APEX RGB: ";
cin>>qtyapex;
totKeyboard = totKeyboard+qtyapex*8500;
cout<<"\n your price is: "<<totKeyboard;
}
else if (price == '2' )
{cout<<"\n How many TKL RGB: ";
cin>>qtytkl;
totKeyboard = totKeyboard+qtytkl*9500;
cout<<"\n your price is: "<<totKeyboard;
}
else if (price == '3' )
{cout<<"\n How many APEX PRO RGB: ";
cin>>qtyapexp;
totKeyboard = totKeyboard+qtyapexp*10500;
cout<<"\n your price is: "<<totKeyboard;
}
}//end of Switch Price
}//end of Keyboard 2
if (Keyboard == '3' )
{
cout<<"**************************************************************************" <<endl;
cout<<"* 1. Mechanical Gaming Keyboard Cherry MX
Gaming (9,200.00) *" <<endl;
cout<<"* *"
<<endl;
cout<<"* 2. Mechanical Gaming Keyboard
Cherry MX Black Gaming Keyboard (10, 200.00) *" <<endl;
cout<<"*
*" <<endl;
cout<<"* 3. Mechanical Gaming Keyboard
Gateron Clear Gaming Keyboard (12,000.00) *" <<endl;
cout<<"**************************************************************************";
cout<<" \n Choose a Keyboard from [1-3]: ";
cin>> price;
switch(price);
{ if (price == '1' )
{
cout<<"\n How many Cherry Mechanical Keyboard: ";
cin>>qtycherry;
totKeyboard = totKeyboard+qtycherry*9200;
cout<<"\n your price is: "<<totKeyboard;
}
else if (price == '2' )
{cout<<"\n How many Cherry Mechanical Keyboard Black: ";
cin>>qtycherryb;
totKeyboard = totKeyboard+qtycherryb*10200;
cout<<"\n
your price is: "<<totKeyboard;
}
else if (price == '3' )
{cout<<"\n How many Gateron Clear: ";
cin>>qtygat;
totKeyboard = totKeyboard+qtygat*12000;
cout<<"\n your price is: "<<totKeyboard;
}
} ////end of Switch Price
} //end of Keyboard 3
}//End of Switch Keyboard
}while(peripheral <= 3); //end of do while
system("cls");
//formula of totbill
totbill = totMonitor + totKeyboard + totMouse ;
//Summary
do{
cout<<"\n**********************************************\n";
cout<<"* Summary of Purchases *\n";
cout<<"* Monitor = "<< totMonitor<<" *\n";
cout<<"* Mouse = "<< totMouse <<" *\n";
cout<<"* Keyboard = "<< totKeyboard <<"*\n";
cout<<"************************************************\n";
cout<<"* Total Bill = " << totbill <<" *\n";
cout<<"************************************************\n";
cout<<" Enter Payment = ";
cin>>pay;
//Formula for Change
if( pay >= totbill)
{change = pay-totbill;}
else
system ("cls");
}while (pay < totbill);
cout<<" Your Change = "<<change;
cout<<"\n**********************************************\n";
}//end of main
B. Screen shot of output with description
The interface shows the available products with its corresponding number.cout<<"************************************************\n";
cout<<" Enter Payment = ";
cin>>pay;