#include <kipr/wombat.h>

int main()
{ 
  camera_open(); // opens and establishes communication with camera
  while(a_button() == 0) // loops until the a button is pressed
 { 
   camera_update(); // retrieves current camera image
   if (get_object_count(0) > 0) // does the camera see at least 1 green object
   {
    
    printf("I see green.\n");
   }
     else
   {
     printf("where is the  green?/n");
     }
    }
        
    camera_close(); // disconnects form camera
    return 0;
   }
