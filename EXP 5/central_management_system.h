
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
