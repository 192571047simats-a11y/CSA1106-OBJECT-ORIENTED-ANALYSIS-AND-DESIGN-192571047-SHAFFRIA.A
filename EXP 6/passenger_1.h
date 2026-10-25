
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


#ifndef PASSENGER_1_H
#define PASSENGER_1_H


/// 
/// class passenger_1

class passenger_1
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  passenger_1();

  /// 
  /// Empty Destructor
  virtual ~passenger_1();



  /// 
  void login()
  {
  }


  /// 
  void passenger1()
  {
  }

private:
  // Private attributes  


  void passenger_name;
  void passenger_age;
  void train_number;

  // Public attribute accessor methods  



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

  /// 
  /// Set the value of passenger_age
  /// @param value the new value of passenger_age
  void setPassenger_age(void value)
  {
    passenger_age = value;
  }

  /// 
  /// Get the value of passenger_age
  /// @return the value of passenger_age
  void getPassenger_age()
  {
    return passenger_age;
  }

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

  void initAttributes();

};

#endif // PASSENGER_1_H
