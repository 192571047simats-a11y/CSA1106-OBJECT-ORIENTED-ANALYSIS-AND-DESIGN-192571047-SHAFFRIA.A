
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


#ifndef CENTRAL_SYSTEM1_H
#define CENTRAL_SYSTEM1_H


/// 
/// class central_system1

class central_system1
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  central_system1();

  /// 
  /// Empty Destructor
  virtual ~central_system1();



  /// 
  void storing()
  {
  }


  /// 
  void updating()
  {
  }


  /// 
  void processing()
  {
  }

private:
  // Private attributes  


  void store_;
  void update;

  // Public attribute accessor methods  



  /// 
  /// Set the value of store_
  /// @param value the new value of store_
  void setStore_(void value)
  {
    store_ = value;
  }

  /// 
  /// Get the value of store_
  /// @return the value of store_
  void getStore_()
  {
    return store_;
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

#endif // CENTRAL_SYSTEM1_H
