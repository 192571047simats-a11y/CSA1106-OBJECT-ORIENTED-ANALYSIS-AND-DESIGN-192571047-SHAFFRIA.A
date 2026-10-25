
#ifndef CENTRAL_COMPUTER_H
#define CENTRAL_COMPUTER_H


/// 
/// class central_computer

class central_computer
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  central_computer();

  /// 
  /// Empty Destructor
  virtual ~central_computer();


};

#endif // CENTRAL_COMPUTER_H


#ifndef CENTRAL_MANAGEMENT_H
#define CENTRAL_MANAGEMENT_H


/// 
/// class central_management

class central_management
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  central_management();

  /// 
  /// Empty Destructor
  virtual ~central_management();



  /// 
  void reservation()
  {
  }


  /// 
  void cancellation()
  {
  }


  /// 
  void status()
  {
  }


  /// 
  void login()
  {
  }

private:
  // Private attributes  


  void train_name;
  void passenger_name;

  // Public attribute accessor methods  



  /// 
  /// Set the value of train_name
  /// @param value the new value of train_name
  void setTrain_name(void value)
  {
    train_name = value;
  }

  /// 
  /// Get the value of train_name
  /// @return the value of train_name
  void getTrain_name()
  {
    return train_name;
  }

  /// 
  /// Set the value of passenger_name
  /// @param value the new value of passenger_name
  void setPassenger_name(void value)
  {
    passenger_name = value;
  }

  /// 
  /// Get the value of passenger_name
  /// @return the value of passenger_name
  void getPassenger_name()
  {
    return passenger_name;
  }

  void initAttributes();

};

#endif // CENTRAL_MANAGEMENT_H
