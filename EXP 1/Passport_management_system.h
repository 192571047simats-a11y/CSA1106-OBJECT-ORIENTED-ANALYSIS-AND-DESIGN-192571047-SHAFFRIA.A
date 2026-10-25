
#ifndef APPLICANT_H
#define APPLICANT_H


/// 
/// class applicant

class applicant
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  applicant();

  /// 
  /// Empty Destructor
  virtual ~applicant();



  /// 
  void apply_passport()
  {
  }


  /// 
  void submission_of_proof()
  {
  }

private:
  // Private attributes  


  void applicant_name;
  void applicant_details;

  // Public attribute accessor methods  



  /// 
  /// Set the value of applicant_name
  /// @param value the new value of applicant_name
  void setApplicant_name(void value)
  {
    applicant_name = value;
  }

  /// 
  /// Get the value of applicant_name
  /// @return the value of applicant_name
  void getApplicant_name()
  {
    return applicant_name;
  }

  /// 
  /// Set the value of applicant_details
  /// @param value the new value of applicant_details
  void setApplicant_details(void value)
  {
    applicant_details = value;
  }

  /// 
  /// Get the value of applicant_details
  /// @return the value of applicant_details
  void getApplicant_details()
  {
    return applicant_details;
  }

  void initAttributes();

};

#endif // APPLICANT_H


#ifndef PASSPORT_MANAGEMENT_SYSTEM_H
#define PASSPORT_MANAGEMENT_SYSTEM_H


/// 
/// class Passport_management_system

class Passport_management_system
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  Passport_management_system();

  /// 
  /// Empty Destructor
  virtual ~Passport_management_system();



  /// 
  void issue_of_passport()
  {
  }


  /// 
  void verification_of_passport()
  {
  }


  /// 
  void cancellation_of_passport()
  {
  }

private:
  // Private attributes  


  void verify_details;
  void store_proof;

  // Public attribute accessor methods  



  /// 
  /// Set the value of verify_details
  /// @param value the new value of verify_details
  void setVerify_details(void value)
  {
    verify_details = value;
  }

  /// 
  /// Get the value of verify_details
  /// @return the value of verify_details
  void getVerify_details()
  {
    return verify_details;
  }

  /// 
  /// Set the value of store_proof
  /// @param value the new value of store_proof
  void setStore_proof(void value)
  {
    store_proof = value;
  }

  /// 
  /// Get the value of store_proof
  /// @return the value of store_proof
  void getStore_proof()
  {
    return store_proof;
  }

  void initAttributes();

};

#endif // PASSPORT_MANAGEMENT_SYSTEM_H
