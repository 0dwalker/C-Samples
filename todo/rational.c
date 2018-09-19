/*create the strucuture for a rational number
*  value: type float: the quotient of two ints
*  numerator: type int: the top
*  denominator: type int: the bottom
*/

struct RationalNum {
    int num;
    int dom;
    double value;
    //fill this in
}


//function for adding rational numbers
struct RationalNum add(struct RationalNum a, struct RationalNum b){   
    int num = a.num*b.dom+b.num*a.dom;
    int dom = a.dom*b.dom;
    int value = num/dom;
    struct RationalNum c={num,dom,value }
}
  //store values in temporary variables
    //do math
    //create a new struct
    //return the new struct

//function for subtracting rational numbers
struct RationalNum subtract(struct RationalNum a, struct RationalNum b){
     int num = a.num*b.dom-b.num*a.dom;
    int dom = a.dom*b.dom;
    int value = num/dom;
    struct RationalNum c={num,dom,value }
}
}

//function for multiplying rational numbers
struct RationalNum multiply(struct RationalNum a, struct RationalNum b ){
    int num = a.num*b.num;
    int dom = a.dom*b.dom;
    int value = num/dom;
    struct RationalNum c={num,dom,value }
}

//function for dividing rational numbers
//cannot divide by zero
struct RationalNum divide(struct RationalNum a, struct RationalNum b ){
    int num = a.num*b.dom;
    int dom = a.dom*b.num;
    int value = num/dom;
    struct RationalNum c={num,dom,value }

}

//function for adding rational numbers
struct RationalNum reduce(struct RationalNum a){
  if num > dom{
      
  } 
    for(int a=0;a>10;a++){

    }
}