
#ifndef E_BOOK_MANAGEMENT_H
#define E_BOOK_MANAGEMENT_H


/// 
/// class e_book_management

class e_book_management
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  e_book_management();

  /// 
  /// Empty Destructor
  virtual ~e_book_management();


};

#endif // E_BOOK_MANAGEMENT_H


#ifndef E_BOOK_MANAGEMENT_CLASS3_H
#define E_BOOK_MANAGEMENT_CLASS3_H


/// 
/// class e_book_management_class3

class e_book_management_class3
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  e_book_management_class3();

  /// 
  /// Empty Destructor
  virtual ~e_book_management_class3();



  /// 
  void check_availability()
  {
  }

private:
  // Private attributes  


  void enter_id;
  void verify_user;

  // Public attribute accessor methods  



  /// 
  /// Set the value of enter_id
  /// @param value the new value of enter_id
  void setEnter_id(void value)
  {
    enter_id = value;
  }

  /// 
  /// Get the value of enter_id
  /// @return the value of enter_id
  void getEnter_id()
  {
    return enter_id;
  }

  /// 
  /// Set the value of verify_user
  /// @param value the new value of verify_user
  void setVerify_user(void value)
  {
    verify_user = value;
  }

  /// 
  /// Get the value of verify_user
  /// @return the value of verify_user
  void getVerify_user()
  {
    return verify_user;
  }

  void initAttributes();

};

#endif // E_BOOK_MANAGEMENT_CLASS3_H
