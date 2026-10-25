
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


#ifndef INTERNET_H
#define INTERNET_H


/// 
/// class internet

class internet
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  internet();

  /// 
  /// Empty Destructor
  virtual ~internet();



  /// 
  void verify()
  {
  }


  /// 
  void status()
  {
  }

private:
  // Private attributes  


  void enter_id;
  void download;
  void login;
  void logout;

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
  /// Set the value of download
  /// @param value the new value of download
  void setDownload(void value)
  {
    download = value;
  }

  /// 
  /// Get the value of download
  /// @return the value of download
  void getDownload()
  {
    return download;
  }

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

#endif // INTERNET_H
