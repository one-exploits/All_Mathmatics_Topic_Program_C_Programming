#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void set_option(char**,int);
int home_option(void); 
int main_setup_and_input();  
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



void set_option(char *list[],int number_of_element_in_list){
	
   	for (int i=0;i<number_of_element_in_list;i++){
   	printf("   :::[%d] %s\n",(i+1),list[i]);
   	   	
   }	
   }




int home_option(){
	      printf("\nPOLYNOMIAL ENUMERATION :\n");	
          set_option(polynomial,1);
          
          printf("\nlINEAR EQUATION IN TWO VARIABLE ENUMERATION :\n");
          set_option(linear_equation_in_two_variable,num_linear_equation_in_two_variable);
          
          printf("\nQUADRATIC EQUATION ENUMERATION :\n");
          set_option(quadratic_equation,num_quadratic_equation);
          
          printf("\nARITHMATIC PROGRESSION ENUMERATION :\n");
          set_option(arithmatic_progression,num_arithmatic_progression);
          
          printf("\nCO-ORDINATE GEOMETRY ENUMERATION :\n");
          set_option(co_ordinate_geometry,num_co_ordinate_geometry);
          
          printf("\nAREA RELATED TO CIRCLE ENUMERATION :\n");
          set_option(area_related_to_circle,num_area_related_to_circle);
          
          
          printf("\nSURFACE AREA EQUATION ENUMERATION :\n");
          set_option(surface_area,num_surface_area);
          
          printf("\nVOLUME ENUMERATION :\n");
          set_option(volume,num_volume);
    
    printf("\n\n\n\t\t\tS e l e c t\n\n");
    printf("\tO p t i o n s   t o    E n u m e r a t e :)\n");
    printf("\n\n[1] POLYNOMIAL ENUMERATION \n");	
    printf("[2] lINEAR EQUATION IN TWO VARIABLE ENUMERATION \n");
    printf("[3] QUADRATIC EQUATION ENUMERATION \n");
    printf("[4] ARITHMATIC PROGRESSION ENUMERATION \n");
    printf("[5] CO-ORDINATE GEOMETRY ENUMERATION \n");
    printf("[6] AREA RELATED TO CIRCLE ENUMERATION \n");
    printf("[7] SURFACE AREA EQUATION ENUMERATION \n");
    printf("[8] VOLUME ENUMERATION \n");
   
             
                   
        	
	
	
return 0; 	
}

int main_setup_and_input(){
	while(1){
	home_option();
	int option_input=0;
	scanf("%d",&option_input);	
    }
     		
return 0; 	
}








int main(){
          main_setup_and_input();
          return 0; 
    }
    

