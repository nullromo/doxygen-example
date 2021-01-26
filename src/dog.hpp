#ifndef DOG_HPP
#define DOG_HPP

#define MAX_ENERGY 10

class Dog {
    public:
        Dog(const char* _name);

        void bark(void);

        void run(int minutes);

        void sleep(int minutes);

    protected:
        bool checkEnergy(int energyToExpend);

    private:
        const char* name;

        int energy;
};

#endif // DOG_HPP

