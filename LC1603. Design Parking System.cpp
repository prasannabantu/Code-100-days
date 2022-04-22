// 1603. Design Parking System
class ParkingSystem {
int b,m,s;
public:
ParkingSystem(int big, int medium, int small) {
        b=big;
        m=medium;
        s=small;
}

bool addCar(int carType) {
        if(carType==1)
        {
                if(b>=1)
                {
                        b--;
                        return 1;
                }
                return 0;
        }
        if(carType==2)
        {
                if(m>=1)
                {
                        m--;
                        return 1;
                }
                return 0;
        }
        if(carType==3)
        {
                if(s>=1)
                {
                        s--;
                        return 1;
                }
                return 0;
        }
        return 0;
}
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
