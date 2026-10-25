
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


#ifndef CARD_HOLDER_H
#define CARD_HOLDER_H


/// 
/// class Card_holder

class Card_holder
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  Card_holder();

  /// 
  /// Empty Destructor
  virtual ~Card_holder();


};

#endif // CARD_HOLDER_H
