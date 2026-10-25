
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


#ifndef STUDENTS_H
#define STUDENTS_H


/// 
/// class students

class students
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  students();

  /// 
  /// Empty Destructor
  virtual ~students();



  /// 
  void form_filling()
  {
  }


  /// 
  void registration()
  {
  }

private:
  // Private attributes  


  void name_;
  void address;
  void dob;
  void subjects;
  void college;

  // Public attribute accessor methods  



  /// 
  /// Set the value of name_
  /// @param value the new value of name_
  void setName_(void value)
  {
    name_ = value;
  }

  /// 
  /// Get the value of name_
  /// @return the value of name_
  void getName_()
  {
    return name_;
  }

  /// 
  /// Set the value of address
  /// @param value the new value of address
  void setAddress(void value)
  {
    address = value;
  }

  /// 
  /// Get the value of address
  /// @return the value of address
  void getAddress()
  {
    return address;
  }

  /// 
  /// Set the value of dob
  /// @param value the new value of dob
  void setDob(void value)
  {
    dob = value;
  }

  /// 
  /// Get the value of dob
  /// @return the value of dob
  void getDob()
  {
    return dob;
  }

  /// 
  /// Set the value of subjects
  /// @param value the new value of subjects
  void setSubjects(void value)
  {
    subjects = value;
  }

  /// 
  /// Get the value of subjects
  /// @return the value of subjects
  void getSubjects()
  {
    return subjects;
  }

  /// 
  /// Set the value of college
  /// @param value the new value of college
  void setCollege(void value)
  {
    college = value;
  }

  /// 
  /// Get the value of college
  /// @return the value of college
  void getCollege()
  {
    return college;
  }

  void initAttributes();

};

#endif // STUDENTS_H
