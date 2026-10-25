
#ifndef REG_WEBSITE_H
#define REG_WEBSITE_H


/// 
/// class reg_website

class reg_website
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  reg_website();

  /// 
  /// Empty Destructor
  virtual ~reg_website();



  /// 
  void verification()
  {
  }


  /// 
  void processing()
  {
  }


  /// 
  void registration()
  {
  }

private:
  // Private attributes  


  void qualification;
  void login_details;
  void fee_details;
  void exam_dates;

  // Public attribute accessor methods  



  /// 
  /// Set the value of qualification
  /// @param value the new value of qualification
  void setQualification(void value)
  {
    qualification = value;
  }

  /// 
  /// Get the value of qualification
  /// @return the value of qualification
  void getQualification()
  {
    return qualification;
  }

  /// 
  /// Set the value of login_details
  /// @param value the new value of login_details
  void setLogin_details(void value)
  {
    login_details = value;
  }

  /// 
  /// Get the value of login_details
  /// @return the value of login_details
  void getLogin_details()
  {
    return login_details;
  }

  /// 
  /// Set the value of fee_details
  /// @param value the new value of fee_details
  void setFee_details(void value)
  {
    fee_details = value;
  }

  /// 
  /// Get the value of fee_details
  /// @return the value of fee_details
  void getFee_details()
  {
    return fee_details;
  }

  /// 
  /// Set the value of exam_dates
  /// @param value the new value of exam_dates
  void setExam_dates(void value)
  {
    exam_dates = value;
  }

  /// 
  /// Get the value of exam_dates
  /// @return the value of exam_dates
  void getExam_dates()
  {
    return exam_dates;
  }

  void initAttributes();

};

#endif // REG_WEBSITE_H


#ifndef UNIVERSITY_DATABASE_H
#define UNIVERSITY_DATABASE_H


/// 
/// class university_database

class university_database
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  university_database();

  /// 
  /// Empty Destructor
  virtual ~university_database();


};

#endif // UNIVERSITY_DATABASE_H
