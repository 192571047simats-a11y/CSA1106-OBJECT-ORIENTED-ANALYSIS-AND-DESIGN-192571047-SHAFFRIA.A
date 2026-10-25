
#ifndef CENTRAL_SYSTEM_H
#define CENTRAL_SYSTEM_H


/// 
/// class central_system

class central_system
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  central_system();

  /// 
  /// Empty Destructor
  virtual ~central_system();


};

#endif // CENTRAL_SYSTEM_H


#ifndef DEALER_H
#define DEALER_H


/// 
/// class dealer

class dealer
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  dealer();

  /// 
  /// Empty Destructor
  virtual ~dealer();



  /// 
  void payment()
  {
  }


  /// 
  void delivery()
  {
  }

private:
  // Private attributes  


  void name;
  void availability;

  // Public attribute accessor methods  



  /// 
  /// Set the value of name
  /// @param value the new value of name
  void setName(void value)
  {
    name = value;
  }

  /// 
  /// Get the value of name
  /// @return the value of name
  void getName()
  {
    return name;
  }

  /// 
  /// Set the value of availability
  /// @param value the new value of availability
  void setAvailability(void value)
  {
    availability = value;
  }

  /// 
  /// Get the value of availability
  /// @return the value of availability
  void getAvailability()
  {
    return availability;
  }

  void initAttributes();

};

#endif // DEALER_H
