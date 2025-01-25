public class Video {
  private String title;
  private boolean isRented;
  private double rentalPrice;

  public Video(String title, double rentalPrice) {
    this.title = title;
    this.isRented = false;
    this.rentalPrice = rentalPrice;
  }

  public String getTitle() {
    return title;
  }

  public boolean isRented() {
    return isRented;
  }

  public void setRented(boolean rented) {
    isRented = rented;
  }

  public double getRentalPrice() {
    return rentalPrice;
  }

  @Override
  public String toString() {
    return "Video: " + title + " | Rental Price: Rs. " + rentalPrice + " | Status: " + (isRented ? "Rented" : "Available");
  }
}