
#ifndef CENTRAL_MANAGEMENT_SYSTEM_H
#define CENTRAL_MANAGEMENT_SYSTEM_H


/// 
/// class central_management_system

class central_management_system
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  central_management_system();

  /// 
  /// Empty Destructor
  virtual ~central_management_system();



  /// 
  void storing()
  {
  }


  /// 
  void updating_details()
  {
  }

private:
  // Private attributes  


  void member_details;
  void function_details;
  void details_of_allocation;

  // Public attribute accessor methods  



  /// 
  /// Set the value of member_details
  /// @param value the new value of member_details
  void setMember_details(void value)
  {
    member_details = value;
  }

  /// 
  /// Get the value of member_details
  /// @return the value of member_details
  void getMember_details()
  {
    return member_details;
  }

  /// 
  /// Set the value of function_details
  /// @param value the new value of function_details
  void setFunction_details(void value)
  {
    function_details = value;
  }

  /// 
  /// Get the value of function_details
  /// @return the value of function_details
  void getFunction_details()
  {
    return function_details;
  }

  /// 
  /// Set the value of details_of_allocation
  /// @param value the new value of details_of_allocation
  void setDetails_of_allocation(void value)
  {
    details_of_allocation = value;
  }

  /// 
  /// Get the value of details_of_allocation
  /// @return the value of details_of_allocation
  void getDetails_of_allocation()
  {
    return details_of_allocation;
  }

  void initAttributes();

};

#endif // CENTRAL_MANAGEMENT_SYSTEM_H


#ifndef ORGANIZER_H
#define ORGANIZER_H


/// 
/// class organizer

class organizer
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  organizer();

  /// 
  /// Empty Destructor
  virtual ~organizer();



  /// 
  void allocating_the_seats()
  {
  }


  /// 
  void inviting_the_delegates()
  {
  }


  /// 
  void choosing_the_winner()
  {
  }

private:
  // Private attributes  


  void member_details;
  void function_details;

  // Public attribute accessor methods  



  /// 
  /// Set the value of member_details
  /// @param value the new value of member_details
  void setMember_details(void value)
  {
    member_details = value;
  }

  /// 
  /// Get the value of member_details
  /// @return the value of member_details
  void getMember_details()
  {
    return member_details;
  }

  /// 
  /// Set the value of function_details
  /// @param value the new value of function_details
  void setFunction_details(void value)
  {
    function_details = value;
  }

  /// 
  /// Get the value of function_details
  /// @return the value of function_details
  void getFunction_details()
  {
    return function_details;
  }

  void initAttributes();

};

#endif // ORGANIZER_H
