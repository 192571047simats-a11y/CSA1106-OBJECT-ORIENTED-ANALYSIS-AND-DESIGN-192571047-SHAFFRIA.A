
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
