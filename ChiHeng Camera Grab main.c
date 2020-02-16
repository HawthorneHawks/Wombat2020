#include <kipr/wombat.h>

int main()
{
    int count; // Create an variabe to represent the # of objects
    camera_open(); // opens camera
    
    camera_update(); //updates camera until succeeds
    
    count=get_object_count(1); // capture number of objects seen
    printf("There are %d obijects on the screen\n", count);
    camera_close(); // camera closed
    return 0;
}
