# VHSLEDWall

![rj45 pinout](/LEDwall.png)

The LED strips is WS2812 800mhz version. (These are NOT the "B" variant, Not WS2812b)

Each panel has 8x8 LEDs (Total 768 LEDs )
There are 3 rows, 4 columns of panels, totaling 12 panels. 

Each row has its own data cable controlling 4 panels (256 LEDs).The data cable is mapped from the top left of the panel, continues downwards, one right, then up, continuing until it reaches the top right of the panel. 

- Pin 2 solid green on the ethernet cable is connected to the top data cable and is labeled Y15-B14
- Pin 4 solid blue on the ethernet cable is connected to the middle data cable and is labeled Y13-B12.
- Pin 6 solid orange on the ethernet cable is connected to the bottom data cable and is labeled Y11-B10.
- Pin 1,3,5,7 the stripped wires on the Ethernet cable are connected to each other and to ground. 
- Pin 8 solid brown wire is not connected. 

I am not sure what the labels (Y15-B14, Y13-B12, Y11-B10) on the data pins refer to. 

![rj45 pinout](/rj45_pinout.png)

For more information see this post. 
https://talk.hackspace.ca/t/vhs-led-wall-documentation/3304?u=funvill 
