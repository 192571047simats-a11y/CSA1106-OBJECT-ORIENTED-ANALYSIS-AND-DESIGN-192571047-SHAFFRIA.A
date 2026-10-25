
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
  void verify()
  {
  }


  /// 
  void enroll()
  {
  }

private:
  // Private attributes  


  void store_details;
  void verify_details;

  // Public attribute accessor methods  



  /// 
  /// Set the value of store_details
  /// @param value the new value of store_details
  void setStore_details(void value)
  {
    store_details = value;
  }

  /// 
  /// Get the value of store_details
  /// @return the value of store_details
  void getStore_details()
  {
    return store_details;
  }

  /// 
  /// Set the value of verify_details
  /// @param value the new value of verify_details
  void setVerify_details(void value)
  {
    verify_details = value;
  }

  /// 
  /// Get the value of verify_details
  /// @return the value of verify_details
  void getVerify_details()
  {
    return verify_details;
  }

  void initAttributes();

};

#endif // CENTRAL_MANAGEMENT_SYSTEM_H


#ifndef STUDENT_H
#define STUDENT_H


/// 
/// class student

class student
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  student();

  /// 
  /// Empty Destructor
  virtual ~student();



  /// 
  void browse()
  {
  }


  /// 
  void select()
  {
  }


  /// 
  void register()
  {
  }

private:
  // Private attributes  


  void name_and_address;
  void marks;

  // Public attribute accessor methods  



  /// 
  /// Set the value of name_and_address
  /// @param value the new value of name_and_address
  void setName_and_address(void value)
  {
    name_and_address = value;
  }

  /// 
  /// Get the value of name_and_address
  /// @return the value of name_and_address
  void getName_and_address()
  {
    return name_and_address;
  }

  /// 
  /// Set the value of marks
  /// @param value the new value of marks
  void setMarks(void value)
  {
    marks = value;
  }

  /// 
  /// Get the value of marks
  /// @return the value of marks
  void getMarks()
  {
    return marks;
  }

  void initAttributes();

};

#endif // STUDENT_H
