
#ifndef ADMIN_H
#define ADMIN_H


/// 
/// class admin

class admin
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  admin();

  /// 
  /// Empty Destructor
  virtual ~admin();



  /// 
  void verify_student_id()
  {
  }


  /// 
  void check_for_book_availability()
  {
  }


  /// 
  void issue_books()
  {
  }


  /// 
  void order_for_new_author()
  {
  }


  /// 
  void maintain_student_detail()
  {
  }

private:
  // Private attributes  


  void student_details;
  void booklist;

  // Public attribute accessor methods  



  /// 
  /// Set the value of student_details
  /// @param value the new value of student_details
  void setStudent_details(void value)
  {
    student_details = value;
  }

  /// 
  /// Get the value of student_details
  /// @return the value of student_details
  void getStudent_details()
  {
    return student_details;
  }

  /// 
  /// Set the value of booklist
  /// @param value the new value of booklist
  void setBooklist(void value)
  {
    booklist = value;
  }

  /// 
  /// Get the value of booklist
  /// @return the value of booklist
  void getBooklist()
  {
    return booklist;
  }

  void initAttributes();

};

#endif // ADMIN_H


#ifndef COMPUTER_H
#define COMPUTER_H


/// 
/// class computer

class computer
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  computer();

  /// 
  /// Empty Destructor
  virtual ~computer();



  /// 
  void maintainsstudrecord()
  {
  }


  /// 
  void enter_issue()
  {
  }


  /// 
  void order_new_author()
  {
  }


  /// 
  void check_availability()
  {
  }

private:
  // Private attributes  


  void student_record;
  void booklist;

  // Public attribute accessor methods  



  /// 
  /// Set the value of student_record
  /// @param value the new value of student_record
  void setStudent_record(void value)
  {
    student_record = value;
  }

  /// 
  /// Get the value of student_record
  /// @return the value of student_record
  void getStudent_record()
  {
    return student_record;
  }

  /// 
  /// Set the value of booklist
  /// @param value the new value of booklist
  void setBooklist(void value)
  {
    booklist = value;
  }

  /// 
  /// Get the value of booklist
  /// @return the value of booklist
  void getBooklist()
  {
    return booklist;
  }

  void initAttributes();

};

#endif // COMPUTER_H
