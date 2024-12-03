class Vehicle{
    char brand[50];
    int speed;
    public:
    Vehicle();
    Vehicle(const char* brand,int speed);
    void setBrand(const char* brand);
    void setSpeed(int speed);
    int getSpeed();
    char* getBrand();
    void display();
    

};
