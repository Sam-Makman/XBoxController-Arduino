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

<h3> other function</h3>

<code> boolean A() </code>
returns true if A button is pressed

<code>boolean B() </code>
returns true if B button is pressed 

<code>boolean X() </code>
returns true if X button is pressed 

<code>boolean Y() </code>
returns true if Y button is pressed  


<code> short rightStickX();</code>
returns the x position for the right stick 
between −32,768 to 32,767  
  
<code>short rightStickY();</code>
returns the Y position for the right stick
between −32,768 to 32,767
	
	

<code>short leftStickX();</code>
returns the X position for the left stick
between −32,768 to 32,767
	

<code>short leftStickY();</code>
returns the Y position for the left stick
between −32,768 to 32,767
	

<code>byte rightTrigger();</code>
returns value of right trigger 
between 0 and 255
	
<code>byte leftTrigger();</code>
returns value of left trigger 
between 0 and 255 
	
	
