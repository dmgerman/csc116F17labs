/* part2.cpp

   CSC 116 Fall 2016 - Lab 5

*/
#include <iostream>
#include <string>
#include <stdexcept>

/* Clock class */
/* Copy in your solution from part 1 */

class Clock {
/* Public members - Accessible by all users of the class */
public:

  /* Constructors */

  /* Constructor ()
     The default constructor sets the time to 00:00 (i.e. midnight)
  */
  Clock() {
    hour = 0;
    minute = 0;
  }

  /* Constructor (h, m)
     Given an hour and minute (which are assumed to be in
     24-hour notation), set the initial time.
     If the provided hour is not in the range [0,23] (inclusive)
     or the provided minute is not in the range [0,59] (inclusive),
     throw a std::runtime_error with the message "Invalid time".
  */
  Clock(int h, int m) {
    /* Your code here */
  }

  /* Constructor (time_string)
     Given a string in 24-hour notation, like "8:30" or "23:45", set the initial time.
     If the string is not valid, either because it does not contain
     two numbers separated by a colon, or because the numbers are
     out of range (e.g. "26:92"), throw std::runtime_error
     with the message "Invalid time".

     Hint: The std::stoi function can be used to convert strings to ints.
           If the string provided to stoi cannot be converted, a std::invalid_argument
       exception is thrown. Your code should catch and handle such a case.
       The only exception that should be thrown out of this constructor
       is std::runtime_error.
  */
  Clock( std::string time_string ) {
    /* Your code here */
  }

  /* Destructors */
  ~Clock() {
    /* Nothing is needed here right now */
  }

  /* Methods */

  /* get_time_string( format24 )
     Return the current time as a string.
      - If format24 is true, return the time in 24-hour notation (e.g. "23:30")
    - If format24 is false, return the time in 12-hour notation with "am" or "pm" at the end (e.g. "11:30pm").
      Note that the time 00:00 in 24-hour notation should be written as "12:00am" in 12-hour notation,
      and the time 12:00 in 24-hour notation should be written as "12:00pm" in 12-hour notation.

     Hint: The int_to_string() function defined in the private section below may be useful here.
  */
  std::string get_time_string( bool format24 = true ) const {
    /* Your code here */
    return "";
  }

  /* get_hour24()
     Return the current hour in 24-hour notation.
  */
  int get_hour24() const {
    return hour;
  }
  /* get_hour12()
     Return the current hour in 12-hour notation.
     If the current hour is 0, return 12.
     If the current hour is between 1 and 12 (inclusive), return it directly.
     If the current hour is between 13 and 23 (inclusive), return the current hour minus 12.
  */
  int get_hour12() const {
    /* Your code here */
    return 0;
  }
  /* get_minute()
     Return the current minute.
  */
  int get_minute() const  {
    return minute;
  }
  /* is_pm()
     Returns true if the current time should be followed by "pm" in
     12-hour notation. Note that midnight is 12:00am and noon is 12:00pm.
  */
  bool is_pm() const {
    /* Your code here */
    return false;
  }

  /* advance_time( add_hour, add_minute )
     Add the provided number of hours and minutes to the current time.
     If adding the minutes results in a minute value above 60, then
     wrap around to 0 and add to the hour count.
     If adding the hours results in an hour above 24, wrap around to 0.

     add_hour must be in the range [0,23], inclusive. add_minute must
     be in the range [0,59], inclusive. If either value is out of range,
     this method must throw a std::runtime_error with the message
     "Invalid input to advance_time".

     Examples:
    - If the time is 10:30, advance_time( 1, 16 ) will make the time 11:46
    - If the time is 13:45, advance_time( 1, 16 ) will make the time 15:01
    - If the time is 22:50, advance_time( 1, 16 ) will make the time 00:06
  */

  void advance_time(int add_hour, int add_minute) {
    /* Your code here */
  }



/* Private members - Not accessible from outside the class */
private:
  int hour;
  int minute;


  /* int_to_string(x, digits)
     Given an integer x, convert x to a string and pad
     the string with zeros until it has the number of
     digits specified (not including the negative sign)
     For example:
     - int_to_string(10,2) returns "10"
     - int_to_string(10,5) returns "00010"
     - int_to_string(6, 5) returns "00006"
     - int_to_string(-6,5) returns "-00006"
  */
  std::string int_to_string(int x, int digits) const {
    //std::to_string converts x to a string, but does not allow the width
    //of the resulting string to be specified.
    std::string s = std::to_string(x);
    return std::string(digits-s.length(),'0') + s;
  }
};


/* End of Clock class */


int main() {
  std::string s;
  try{
    std::cout << "Enter a time: ";
    std::cin >> s;
    std::cout << std::endl;
    std::cout << "You entered \"" << s << "\"" << std::endl;
    Clock c1(s);
    std::cout << "c1.get_time_string(true) returns " << c1.get_time_string(true) << std::endl;
    std::cout << "c1.get_time_string(false) returns " << c1.get_time_string(false) << std::endl;

    std::cout << "Enter another time: ";
    std::cin >> s;
    std::cout << std::endl;
    std::cout << "You entered \"" << s << "\"" << std::endl;
    Clock c2(s);
    std::cout << "Advancing c1 by " << c2.get_hour24() << " hours and " << c2.get_minute() << " minutes." << std::endl;
    c1.advance_time(c2.get_hour24(), c2.get_minute());
    std::cout << "After advancing, the time is " << c1.get_time_string() << std::endl;
  } catch (std::runtime_error e){
    std::cout << "Runtime error: " << e.what() << std::endl;
  }
    return 0;
}
