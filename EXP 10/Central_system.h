
#ifndef APPLICANT_H
#define APPLICANT_H


/// 
/// class Applicant

class Applicant
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  Applicant();

  /// 
  /// Empty Destructor
  virtual ~Applicant();


};

#endif // APPLICANT_H


#ifndef CENTRAL_SYSTEM_H
#define CENTRAL_SYSTEM_H


/// 
/// class Central_system

class Central_system
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  Central_system();

  /// 
  /// Empty Destructor
  virtual ~Central_system();



  /// 
  void central_system()
  {
  }

private:
  // Private attributes  


  void store;
  void update;

  // Public attribute accessor methods  



  /// 
  /// Set the value of store
  /// @param value the new value of store
  void setStore(void value)
  {
    store = value;
  }

  /// 
  /// Get the value of store
  /// @return the value of store
  void getStore()
  {
    return store;
  }

  /// 
  /// Set the value of update
  /// @param value the new value of update
  void setUpdate(void value)
  {
    update = value;
  }

  /// 
  /// Get the value of update
  /// @return the value of update
  void getUpdate()
  {
    return update;
  }

  void initAttributes();

};

#endif // CENTRAL_SYSTEM_H
