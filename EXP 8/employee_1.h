
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


#ifndef EMPLOYEE_1_H
#define EMPLOYEE_1_H


/// 
/// class employee_1

class employee_1
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  employee_1();

  /// 
  /// Empty Destructor
  virtual ~employee_1();



  /// 
  void leave_taken()
  {
  }


  /// 
  void employee1()
  {
  }

private:
  // Private attributes  


  void emp_details;
  void salary;

  // Public attribute accessor methods  



  /// 
  /// Set the value of emp_details
  /// @param value the new value of emp_details
  void setEmp_details(void value)
  {
    emp_details = value;
  }

  /// 
  /// Get the value of emp_details
  /// @return the value of emp_details
  void getEmp_details()
  {
    return emp_details;
  }

  /// 
  /// Set the value of salary
  /// @param value the new value of salary
  void setSalary(void value)
  {
    salary = value;
  }

  /// 
  /// Get the value of salary
  /// @return the value of salary
  void getSalary()
  {
    return salary;
  }

  void initAttributes();

};

#endif // EMPLOYEE_1_H
