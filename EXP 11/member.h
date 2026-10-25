
#ifndef CENTRAL_MANAGEMENT_SYSTEM_H
#define CENTRAL_MANAGEMENT_SYSTEM_H


/// 
/// class central_management_system

class central_management_system
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  central_management_system();

  /// 
  /// Empty Destructor
  virtual ~central_management_system();



  /// 
  void storing()
  {
  }


  /// 
  void updating_details()
  {
  }

private:
  // Private attributes  


  void member_details;
  void function_details;
  void details_of_allocation;

  // Public attribute accessor methods  



  /// 
  /// Set the value of member_details
  /// @param value the new value of member_details
  void setMember_details(void value)
  {
    member_details = value;
  }

  /// 
  /// Get the value of member_details
  /// @return the value of member_details
  void getMember_details()
  {
    return member_details;
  }

  /// 
  /// Set the value of function_details
  /// @param value the new value of function_details
  void setFunction_details(void value)
  {
    function_details = value;
  }

  /// 
  /// Get the value of function_details
  /// @return the value of function_details
  void getFunction_details()
  {
    return function_details;
  }

  /// 
  /// Set the value of details_of_allocation
  /// @param value the new value of details_of_allocation
  void setDetails_of_allocation(void value)
  {
    details_of_allocation = value;
  }

  /// 
  /// Get the value of details_of_allocation
  /// @return the value of details_of_allocation
  void getDetails_of_allocation()
  {
    return details_of_allocation;
  }

  void initAttributes();

};

#endif // CENTRAL_MANAGEMENT_SYSTEM_H


#ifndef MEMBER_H
#define MEMBER_H


/// 
/// class member

class member
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  member();

  /// 
  /// Empty Destructor
  virtual ~member();



  /// 
  void presenting_the_proof()
  {
  }


  /// 
  void winning_the_prize()
  {
  }

private:
  // Private attributes  


  void name;
  void id;
  void proof;

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
  /// Set the value of id
  /// @param value the new value of id
  void setId(void value)
  {
    id = value;
  }

  /// 
  /// Get the value of id
  /// @return the value of id
  void getId()
  {
    return id;
  }

  /// 
  /// Set the value of proof
  /// @param value the new value of proof
  void setProof(void value)
  {
    proof = value;
  }

  /// 
  /// Get the value of proof
  /// @return the value of proof
  void getProof()
  {
    return proof;
  }

  void initAttributes();

};

#endif // MEMBER_H
