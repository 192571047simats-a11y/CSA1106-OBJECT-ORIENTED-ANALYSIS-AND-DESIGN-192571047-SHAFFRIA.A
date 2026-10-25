
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
  void leave_taken()
  {
  }


  /// 
  void tax()
  {
  }


  /// 
  void loan()
  {
  }


  /// 
  void salary()
  {
  }

private:
  // Private attributes  


  void employee_name;
  void emp_number;
  void details;

  // Public attribute accessor methods  



  /// 
  /// Set the value of employee_name
  /// @param value the new value of employee_name
  void setEmployee_name(void value)
  {
    employee_name = value;
  }

  /// 
  /// Get the value of employee_name
  /// @return the value of employee_name
  void getEmployee_name()
  {
    return employee_name;
  }

  /// 
  /// Set the value of emp_number
  /// @param value the new value of emp_number
  void setEmp_number(void value)
  {
    emp_number = value;
  }

  /// 
  /// Get the value of emp_number
  /// @return the value of emp_number
  void getEmp_number()
  {
    return emp_number;
  }

  /// 
  /// Set the value of details
  /// @param value the new value of details
  void setDetails(void value)
  {
    details = value;
  }

  /// 
  /// Get the value of details
  /// @return the value of details
  void getDetails()
  {
    return details;
  }

  void initAttributes();

};

#endif // CENTRAL_MANAGEMENT_SYSTEM_H


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


};

#endif // HR_H
