    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>

void set_option(char**,int);
int home_option(void);   
/*

*/

char *polynomial[]={"Generate Quadratic Equation Using (Alpha,Beeta)"};
int num_polynomial=1;

char *linear_equation_in_two_variable[]={"Linear Equation In Two Variable"};
int num_linear_equation_in_two_variable=1;

char *quadratic_equation[]={"Quadratic Equation","Discriminant"};
int num_quadratic_equation=2;

char *arithmatic_progression[]={"Nth Term","Sum Of Term","Number Of Term In Sum Of Term","Number Of Term In AP:"};//4
int num_arithmatic_progression=4;

char *co_ordinate_geometry[]={"Distance Between two Co-Ordinate","Co-Ordinate Of Internal Division","Co-Ordinate Of External Division","Proof Of Being A Line","Area Of Triangle with Co-Ordinate"};
int num_co_ordinate_geometry=5;

char *area_related_to_circle[]={"Area Circle","Area Sector","Area Segment","Area Triangle In Circle With Any Angle"};
int num_area_related_to_circle=4;

char *surface_area[]={"Totale Surface Area Of Sphere","Area Semi Sphere","Area Cylinder"};
int num_surface_area=3;

char *volume[]={"Volume Of Cube","Volume Of Cuboid","Volume Of Sphere","Volume Of Semi Sphere","Volume Of Cone"};
int num_volume=5;


int home_option(){
          set_option(polynomial,1);
          set_option(linear_equation_in_two_variable,num_linear_equation_in_two_variable);
          set_option(quadratic_equation,num_quadratic_equation);
          set_option(arithmatic_progression,num_arithmatic_progression);
          set_option(co_ordinate_geometry,num_co_ordinate_geometry);
          set_option(area_related_to_circle,num_area_related_to_circle);
          set_option(surface_area,num_surface_area);
          set_option(volume,num_volume);
          return 0; 	
	
	
return 0; 	
}



int main(){
          home_option();

          return 0; 
    }
    
void set_option(char *list[],int number_of_list){
   	for (int i=0;i<number_of_list;i++){
   	printf("   :::[%d] %s\n",(i+1),list[i]);
   	   	
   }	
   }
