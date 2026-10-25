
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


#ifndef USER1_H
#define USER1_H


/// 
/// class user1

class user1
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  user1();

  /// 
  /// Empty Destructor
  virtual ~user1();



  /// 
  void surf_books()
  {
  }

private:
  // Private attributes  


  void login;
  void logout;

  // Public attribute accessor methods  



  /// 
  /// Set the value of login
  /// @param value the new value of login
  void setLogin(void value)
  {
    login = value;
  }

  /// 
  /// Get the value of login
  /// @return the value of login
  void getLogin()
  {
    return login;
  }

  /// 
  /// Set the value of logout
  /// @param value the new value of logout
  void setLogout(void value)
  {
    logout = value;
  }

  /// 
  /// Get the value of logout
  /// @return the value of logout
  void getLogout()
  {
    return logout;
  }

  void initAttributes();

};

#endif // USER1_H
