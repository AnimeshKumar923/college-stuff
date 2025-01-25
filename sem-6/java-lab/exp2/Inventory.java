import java.util.ArrayList;
import java.util.List;

public class Inventory {
  private List<Video> videos;

  public Inventory() {
    videos = new ArrayList<>();
  }

  // Add a new video to the inventory
  public void addVideo(String title, double rentalPrice) {
    Video video = new Video(title, rentalPrice);
    videos.add(video);
    System.out.println("Video added: " + title);
  }

  // Rent a video
  public void rentVideo(String title) {
    for (Video video : videos) {
      if (video.getTitle().equals(title)) {
        if (!video.isRented()) {
          video.setRented(true);
          System.out.println("Video rented: " + title);
        } else {
          System.out.println("Video is already rented: " + title);
        }
        return;
      }
    }
    System.out.println("Video not found: " + title);
  }

  // Return a rented video
  public void returnVideo(String title) {
    for (Video video : videos) {
      if (video.getTitle().equals(title)) {
        if (video.isRented()) {
          video.setRented(false);
          System.out.println("Video returned: " + title);
        } else {
          System.out.println("Video was not rented: " + title);
        }
        return;
      }
    }
    System.out.println("Video not found: " + title);
  }

  // Display the current inventory
  public void displayInventory() {
    if (videos.isEmpty()) {
      System.out.println("No videos in inventory.");
    } else {
      System.out.println("Current Inventory:");
      for (Video video : videos) {
        System.out.println(video);
      }
    }
  }
}