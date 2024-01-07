import java.time.LocalDate;
class Main {
  public static void main(String[] args) {
    LocalDate date1 = LocalDate.parse("1947-08-15");
    LocalDate date2 = date1.plusYears(100);
    System.out.println(date2);
  }