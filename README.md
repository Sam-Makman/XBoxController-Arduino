# XBoxController-Arduino

<h4> Usage</h4> 
to import the library to Arduino IDE download the zip version of the repository and add it to your project via 
Sketch->include library -> add zip library  

 create a new XBox Controller object as a global variable

 
<code> XBoxController control; </code>



in the startup function of your sketch you need to create your object and then use the init() function. 



<code> controller.init(); </code>


in the loop you will need to call Read() to update the XBoxController object. 


<code> controller.Read()</code>

other function
<code>
A() // returns true if A button is pressed
B() // returns true if B button is pressed
X() // returns true if X button is pressed
Y() // returns true if Y button is pressed

  // returns the x position for the right stick 
  //between −32,768 to 32,767
  short rightStickX();
  
  // returns the Y position for the right stick
  //between −32,768 to 32,767
	short rightStickY();
	
	// returns the X position for the left stick
  //between −32,768 to 32,767
	short leftStickX();
	
	// returns the Y position for the left stick
  //between −32,768 to 32,767
	short leftStickY();
	
	//returns value of right trigger 
	//between 0 and 255
	byte rightTrigger();
	
	//returns value of left trigger 
	//between 0 and 255 
	byte leftTrigger();
	
	
