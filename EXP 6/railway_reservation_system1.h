
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


#ifndef RAILWAY_RESERVATION_SYSTEM1_H
#define RAILWAY_RESERVATION_SYSTEM1_H


/// 
/// class railway_reservation_system1

class railway_reservation_system1
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  railway_reservation_system1();

  /// 
  /// Empty Destructor
  virtual ~railway_reservation_system1();



  /// 
  void status()
  {
  }


  /// 
  void reservation()
  {
  }


  /// 
  void cancellation()
  {
  }

private:
  // Private attributes  


  void train_number;
  void train_name;
  void passenger_name;

  // Public attribute accessor methods  



  /// 
  /// Set the value of train_number
  /// @param value the new value of train_number
  void setTrain_number(void value)
  {
    train_number = value;
  }

  /// 
  /// Get the value of train_number
  /// @return the value of train_number
  void getTrain_number()
  {
    return train_number;
  }

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

#endif // RAILWAY_RESERVATION_SYSTEM1_H
