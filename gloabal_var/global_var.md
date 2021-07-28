```
int g_x;  //external linkage
static int g_x;  //internal linkage
const int g_x;  //error

//forward declare
extern int g_z;  
extern const int g_z;

//acess only same file
int g_y(1)
static int g_y(1);  
const int g_y(1);

//access in another file
extern int g_w(1);
extern const int g_w(1)

```

