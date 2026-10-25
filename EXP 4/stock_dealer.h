
#ifndef CENTRAL_STOCK_SYSTEM_H
#define CENTRAL_STOCK_SYSTEM_H


/// 
/// class central_stock_system

class central_stock_system
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  central_stock_system();

  /// 
  /// Empty Destructor
  virtual ~central_stock_system();



  /// 
  void printbill()
  {
  }


  /// 
  void delivery_product()
  {
  }

private:
  // Private attributes  


  void store_stock_details;

  // Public attribute accessor methods  



  /// 
  /// Set the value of store_stock_details
  /// @param value the new value of store_stock_details
  void setStore_stock_details(void value)
  {
    store_stock_details = value;
  }

  /// 
  /// Get the value of store_stock_details
  /// @return the value of store_stock_details
  void getStore_stock_details()
  {
    return store_stock_details;
  }

  void initAttributes();

};

#endif // CENTRAL_STOCK_SYSTEM_H


#ifndef STOCK_DEALER_H
#define STOCK_DEALER_H


/// 
/// class stock_dealer

class stock_dealer
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  stock_dealer();

  /// 
  /// Empty Destructor
  virtual ~stock_dealer();



  /// 
  void deliver_item()
  {
  }

private:
  // Private attributes  


  void take_order;
  void enter_order;
  void verify_order;

  // Public attribute accessor methods  



  /// 
  /// Set the value of take_order
  /// @param value the new value of take_order
  void setTake_order(void value)
  {
    take_order = value;
  }

  /// 
  /// Get the value of take_order
  /// @return the value of take_order
  void getTake_order()
  {
    return take_order;
  }

  /// 
  /// Set the value of enter_order
  /// @param value the new value of enter_order
  void setEnter_order(void value)
  {
    enter_order = value;
  }

  /// 
  /// Get the value of enter_order
  /// @return the value of enter_order
  void getEnter_order()
  {
    return enter_order;
  }

  /// 
  /// Set the value of verify_order
  /// @param value the new value of verify_order
  void setVerify_order(void value)
  {
    verify_order = value;
  }

  /// 
  /// Get the value of verify_order
  /// @return the value of verify_order
  void getVerify_order()
  {
    return verify_order;
  }

  void initAttributes();

};

#endif // STOCK_DEALER_H
