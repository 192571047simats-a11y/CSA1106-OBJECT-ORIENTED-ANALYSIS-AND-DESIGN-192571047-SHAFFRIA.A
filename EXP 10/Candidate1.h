
#ifndef APPLICANT_H
#define APPLICANT_H


/// 
/// class Applicant

class Applicant
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  Applicant();

  /// 
  /// Empty Destructor
  virtual ~Applicant();


};

#endif // APPLICANT_H


#ifndef CANDIDATE1_H
#define CANDIDATE1_H


/// 
/// class Candidate1

class Candidate1
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  Candidate1();

  /// 
  /// Empty Destructor
  virtual ~Candidate1();



  /// 
  void verify()
  {
  }


  /// 
  void candidate()
  {
  }

private:
  // Private attributes  


  void name;
  void operation;
  void qualification;

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
  /// Set the value of operation
  /// @param value the new value of operation
  void setOperation(void value)
  {
    operation = value;
  }

  /// 
  /// Get the value of operation
  /// @return the value of operation
  void getOperation()
  {
    return operation;
  }

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

  void initAttributes();

};

#endif // CANDIDATE1_H
