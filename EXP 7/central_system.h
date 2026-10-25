
#ifndef CARD_HOLDER_H
#define CARD_HOLDER_H


/// 
/// class card_holder

class card_holder
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  card_holder();

  /// 
  /// Empty Destructor
  virtual ~card_holder();



  /// 
  void sign_bill()
  {
  }


  /// 
  void give_card()
  {
  }

private:
  // Private attributes  


  void items_purchased;
  void credit_card;

  // Public attribute accessor methods  



  /// 
  /// Set the value of items_purchased
  /// @param value the new value of items_purchased
  void setItems_purchased(void value)
  {
    items_purchased = value;
  }

  /// 
  /// Get the value of items_purchased
  /// @return the value of items_purchased
  void getItems_purchased()
  {
    return items_purchased;
  }

  /// 
  /// Set the value of credit_card
  /// @param value the new value of credit_card
  void setCredit_card(void value)
  {
    credit_card = value;
  }

  /// 
  /// Get the value of credit_card
  /// @return the value of credit_card
  void getCredit_card()
  {
    return credit_card;
  }

  void initAttributes();

};

#endif // CARD_HOLDER_H


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



  /// 
  void print_bill()
  {
  }


  /// 
  void validate_card()
  {
  }

private:
  // Private attributes  


  void product_name;
  void product_details;

  // Public attribute accessor methods  



  /// 
  /// Set the value of product_name
  /// @param value the new value of product_name
  void setProduct_name(void value)
  {
    product_name = value;
  }

  /// 
  /// Get the value of product_name
  /// @return the value of product_name
  void getProduct_name()
  {
    return product_name;
  }

  /// 
  /// Set the value of product_details
  /// @param value the new value of product_details
  void setProduct_details(void value)
  {
    product_details = value;
  }

  /// 
  /// Get the value of product_details
  /// @return the value of product_details
  void getProduct_details()
  {
    return product_details;
  }

  void initAttributes();

};

#endif // CENTRAL_SYSTEM_H
