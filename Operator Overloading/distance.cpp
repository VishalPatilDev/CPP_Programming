    #include<stdio.h>
    struct Distance{
        int feet;
        int inch;
        Distance(){
            this->feet=0;
            this->inch=0;
        }
        Distance(int f,int i){
            this->feet=f;
            this->inch=i;
        }
        void setFeet(int f){
            this->feet=f;
        }
        void setInch(int i){
            this->inch=i;
        }
        int getFeet(){
            return this->feet;
        }
        int getInch(){
            return this->inch;
        }
        void display(){
            printf("Distance : %d Feet %d Inches\n",this->feet,this->inch);
        }
        //Addition
        Distance operator+(Distance d2){
            Distance temp;
            temp.feet=this->feet+d2.feet;
            temp.inch=this->inch+d2.inch;
            temp = conversion(temp);
            return temp;
        }
        Distance operator+(int num){
            Distance temp;
            temp.feet=this->feet+num;
            temp.inch=this->inch+num;
            return temp;
            
        }
        
        //Subtraction
        Distance operator-(Distance d){
            Distance temp;
            temp.feet=this->feet-d.feet;
            temp.inch=this->inch-d.inch;
            return temp;
        }
        Distance operator-(int num){
            Distance temp;
            temp.feet = this->feet-num;
            temp.inch=this->inch-num;
            return temp;
        }

        //Multiplication
        Distance operator*(Distance d){
            Distance temp;
            temp.feet=this->feet*d.feet;
            temp.inch=this->inch*d.inch;
            return temp;
        }
        Distance operator*(int num){
            Distance temp;
            temp.feet = this->feet*num;
            temp.inch=this->inch*num;
            return temp;
        }

        //Division
        Distance operator/(Distance d){
            Distance temp;
            temp.feet=this->feet/d.feet;
            temp.inch=this->inch/d.inch;
            return temp;
        }
        Distance operator/(int num){
            Distance temp;
            temp.feet=this->feet/num;
            temp.inch=this->inch/num;
            return temp;
        }
        Distance conversion(Distance temp){
            temp.feet = this->feet + this->inch/12;
            temp.inch= this->inch % 12;
            return temp;
        }

    };
    Distance operator+(int num,Distance d){
        Distance temp;
        temp.feet = num+d.feet;
        temp.inch=num+d.inch;
        return temp;
    }
    Distance operator-(int num,Distance d){
        Distance temp;
        temp.feet=d.feet-num;
        temp.inch=d.inch-num;
        return temp;
    }
    Distance operator*(int num,Distance d){
        Distance temp;
        temp.feet=d.feet*num;
        temp.inch=d.inch*num;
        return temp;
    }
    Distance operator/(int num,Distance d){
        Distance temp;
        temp.feet=d.feet/num;
        temp.inch=d.inch/num;
        return temp;
    }
    int main(){
        Distance d1(10,30);
        d1.display();

        Distance d2(4,5);
        d2.display();
        printf("-----------Addition----------\n");

        Distance d3;
        d3=d1+d2;    //d1.operator+(d2)
        // if(d3.inch>=12){
        //     d3.conversion();
        // }
        d3.display();

        Distance d4;
        d4=d1+10;    //d1.operator+(10)
        d4.display();

        Distance d5;
        d5=10+d2;     //operator+(10,d2)
        d5.display();

        printf("------------Subtraction------------\n");
        Distance d6;
        d6=d1-d2;    //d1.operator-(d2)
        d6.display();

        Distance d7;
        d7=d1-5;    //d1.operator-(5)
        d7.display();

        Distance d8;
        d8=5-d1;    //operator-(5,d1)
        d8.display();

        printf("------------Multiplication------------\n");
        Distance d9;
        d9=d1*d2;    //d1.operator(d2)
        d9.display();

        Distance d10;
        d10=d1*5;   //d1.operator*(5)
        d10.display();

        Distance d11;
        d11=5*d1;   //operaotr*(5,d1)
        d11.display();

        printf("------------Division-----------\n");
        Distance d12;
        d12=d1/d2;  //d1.operator/(d2)
        d12.display();

        Distance d13;
        d13=d1/2;  //d1.operator/(2)
        d13.display();

        Distance d14;
        d14=2/d2;   //operator/(5,d1)
        d14.display();
    }