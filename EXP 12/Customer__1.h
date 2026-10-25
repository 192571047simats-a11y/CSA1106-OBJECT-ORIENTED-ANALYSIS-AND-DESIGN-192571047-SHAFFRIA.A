
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


#ifndef CUSTOMER_H
#define CUSTOMER_H


/// 
/// class Customer

class Customer
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  Customer();

  /// 
  /// Empty Destructor
  virtual ~Customer();


};

#endif // CUSTOMER_H
