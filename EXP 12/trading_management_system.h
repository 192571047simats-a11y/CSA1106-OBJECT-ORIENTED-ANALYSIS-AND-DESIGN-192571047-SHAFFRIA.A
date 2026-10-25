
#ifndef CUSTOMER_H
#define CUSTOMER_H


/// 
/// class customer

class customer
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  customer();

  /// 
  /// Empty Destructor
  virtual ~customer();



  /// 
  void payment()
  {
  }


  /// 
  void deliver()
  {
  }


  /// 
  void transport()
  {
  }

private:
  // Private attributes  


  void order_product;
  void quality;

  // Public attribute accessor methods  



  /// 
  /// Set the value of order_product
  /// @param value the new value of order_product
  void setOrder_product(void value)
  {
    order_product = value;
  }

  /// 
  /// Get the value of order_product
  /// @return the value of order_product
  void getOrder_product()
  {
    return order_product;
  }

  /// 
  /// Set the value of quality
  /// @param value the new value of quality
  void setQuality(void value)
  {
    quality = value;
  }

  /// 
  /// Get the value of quality
  /// @return the value of quality
  void getQuality()
  {
    return quality;
  }

  void initAttributes();

};

#endif // CUSTOMER_H


#ifndef TRADING_MANAGEMENT_SYSTEM_H
#define TRADING_MANAGEMENT_SYSTEM_H


/// 
/// class trading_management_system

class trading_management_system
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  trading_management_system();

  /// 
  /// Empty Destructor
  virtual ~trading_management_system();



  /// 
  void transport()
  {
  }


  /// 
  void delivery_product()
  {
  }


  /// 
  void money_transfer()
  {
  }

private:
  // Private attributes  


  void verify_product;
  void amount;

  // Public attribute accessor methods  



  /// 
  /// Set the value of verify_product
  /// @param value the new value of verify_product
  void setVerify_product(void value)
  {
    verify_product = value;
  }

  /// 
  /// Get the value of verify_product
  /// @return the value of verify_product
  void getVerify_product()
  {
    return verify_product;
  }

  /// 
  /// Set the value of amount
  /// @param value the new value of amount
  void setAmount(void value)
  {
    amount = value;
  }

  /// 
  /// Get the value of amount
  /// @return the value of amount
  void getAmount()
  {
    return amount;
  }

  void initAttributes();

};

#endif // TRADING_MANAGEMENT_SYSTEM_H
