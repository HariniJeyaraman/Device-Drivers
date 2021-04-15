##  Question 2 :
### Part (a) : 
Write a module that can take an integer parameter when it is loaded with insmod command.

Used module_param API for command line parameters. If we do not pass command line arguments, the variable will use its default initialization.
We have initialized the variable num with the value of 10.

If we do not pass any command line arguments, 10 is printed, else it prints the command line argument that is loaded

#### Steps to Run :
1) make
2) a) Without command line parameters : sudo insmod Q2_a.ko

   b) With command line parameters : sudo insmod Q2_a.ko num=666
3) sudo dmesg | tail -20
4)  sudo rmmod Q2_a
