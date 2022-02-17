# Programming-Assignment-2
Medium Level Coding Questions solved using C++.

Q1 is a complex calculator that utilzes different functions based on the command codes.

Q2 creates a file and based on user input returns: 
                                                    
                                                    -Array Size
                                                    
                                                    -Doubled and Reversed Array
                                                    
                                                    -Median value in Array
                                                    
                                                    -Largest Value in Array
                                      
Q3 takes in user input and recursively prints out a rhombus given that n is between 1-9 by squaring n = n * 10 + 1 of the row. For example:

1^2   ------> 1     n=3

11^2  ------> 121   n=2

111^2 ------> 12321 n=1

Using this pattern I was able to increase the 1s depending on what row i am in. When n = 0, the recursive function would return to the base case which will print the remaining half of the rhombus. This done by using a global vairbale that stores n and subtracts it by one in order to get the next line to print out. Then using a for loop it prints the remaining bottom half.                                              
                                                    


  
  
