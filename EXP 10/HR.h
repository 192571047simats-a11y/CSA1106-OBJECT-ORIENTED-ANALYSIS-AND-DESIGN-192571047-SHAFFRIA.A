
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


#ifndef HR_H
#define HR_H


/// 
/// class HR

class HR
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  HR();

  /// 
  /// Empty Destructor
  virtual ~HR();

private:
  // Private attributes  


  void verification;
  void resume;

  // Public attribute accessor methods  



  /// 
  /// Set the value of verification
  /// @param value the new value of verification
  void setVerification(void value)
  {
    verification = value;
  }

  /// 
  /// Get the value of verification
  /// @return the value of verification
  void getVerification()
  {
    return verification;
  }

  /// 
  /// Set the value of resume
  /// @param value the new value of resume
  void setResume(void value)
  {
    resume = value;
  }

  /// 
  /// Get the value of resume
  /// @return the value of resume
  void getResume()
  {
    return resume;
  }

  void initAttributes();

};

#endif // HR_H
