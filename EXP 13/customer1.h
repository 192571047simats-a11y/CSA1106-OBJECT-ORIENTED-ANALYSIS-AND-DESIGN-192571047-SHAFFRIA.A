
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


#ifndef CUSTOMER1_H
#define CUSTOMER1_H


/// 
/// class customer1

class customer1
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  customer1();

  /// 
  /// Empty Destructor
  virtual ~customer1();



  /// 
  void payment()
  {
  }


  /// 
  void feedback()
  {
  }


  /// 
  void customer()
  {
  }

private:
  // Private attributes  


  void name;
  void purchase_product;

  // Public attribute accessor methods  



  /// 
  /// Set the value of name
  /// @param value the new value of name
  void setName(void value)
  {
    name = value;
  }

  /// 
  /// Get the value of name
  /// @return the value of name
  void getName()
  {
    return name;
  }

  /// 
  /// Set the value of purchase_product
  /// @param value the new value of purchase_product
  void setPurchase_product(void value)
  {
    purchase_product = value;
  }

  /// 
  /// Get the value of purchase_product
  /// @return the value of purchase_product
  void getPurchase_product()
  {
    return purchase_product;
  }

  void initAttributes();

};

#endif // CUSTOMER1_H
