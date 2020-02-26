ChronicleLogger
===============

ChronicleLogger can be use to log anything to a given <code>OutputDevice</code> by default two implementaion of <code>OutputDevice</code> is given. one is <b>Console</b> i.e: <b>stdout</b> and another one is a <code>DiskFile</code>

By default there are 6 log levels:
 Level 0 - if log level is set to zero, nothing will be logged<br/>
 Level 1 - Fatal Error, when the appliction must be stopped due to very serious error<br/>
 Level 2 - Critical Error, but the application may continue working<br/>
 Level 3 - Warning message
 Level 4 - Any informational message<br/>
 Level 5 - Debug message for the developer
 
 Instance of <code>ChronicleLogger</code> is immutable and threadsafe</p>
 
 <b>Requirements:</b>
 <ul>
   <li>Standard ANSI C++, 32-bit compiler</li>
 </ul>
 
 Copyright &copy; 2010, Mahbub Mozadded. All rights reserved.
