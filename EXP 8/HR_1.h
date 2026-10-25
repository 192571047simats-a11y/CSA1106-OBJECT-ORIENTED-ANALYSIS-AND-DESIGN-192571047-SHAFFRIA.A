
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


#ifndef HR_1_H
#define HR_1_H


/// 
/// class HR_1

class HR_1
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  HR_1();

  /// 
  /// Empty Destructor
  virtual ~HR_1();



  /// 
  void loss_of_pay()
  {
  }


  /// 
  void tax()
  {
  }


  /// 
  void HR1()
  {
  }

private:
  // Private attributes  


  void check_details;

  // Public attribute accessor methods  



  /// 
  /// Set the value of check_details
  /// @param value the new value of check_details
  void setCheck_details(void value)
  {
    check_details = value;
  }

  /// 
  /// Get the value of check_details
  /// @return the value of check_details
  void getCheck_details()
  {
    return check_details;
  }

  void initAttributes();

};

#endif // HR_1_H
