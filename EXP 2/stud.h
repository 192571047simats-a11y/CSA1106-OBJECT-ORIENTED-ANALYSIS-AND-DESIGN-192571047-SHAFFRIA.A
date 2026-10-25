
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


#ifndef STUD_H
#define STUD_H


/// 
/// class stud

class stud
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  stud();

  /// 
  /// Empty Destructor
  virtual ~stud();



  /// 
  void request_previous_books()
  {
  }


  /// 
  void return_previous_books()
  {
  }


  /// 
  void register()
  {
  }

private:
  // Private attributes  


  void stud_details;

  // Public attribute accessor methods  



  /// 
  /// Set the value of stud_details
  /// @param value the new value of stud_details
  void setStud_details(void value)
  {
    stud_details = value;
  }

  /// 
  /// Get the value of stud_details
  /// @return the value of stud_details
  void getStud_details()
  {
    return stud_details;
  }

  void initAttributes();

};

#endif // STUD_H
