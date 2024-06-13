#include <iostream>


struct Vector2D
{
    Vector2D(double xP = 0, double yP = 0)
    : x(xP), y(yP)
    {}
    ~Vector2D() {};

    double x;
    double y;
};
    class PlayerStats
    {
    public:
        PlayerStats(int healthP = 100, Vector2D locationP = {33.15f, 47.5f})
            : health(healthP), location(locationP.x, locationP.y)
        {}
        ~PlayerStats() {};

        int getHealth()
        {
            return health;
        }

        Vector2D getPos()
        {
            return location;
        }

    private:
        int health;
        Vector2D location;
    };



int main()
{
    PlayerStats PlayerOne{};
    std::cout << PlayerOne.getHealth() << "\n";
    std::cout << PlayerOne.getPos().x << " " << PlayerOne.getPos().y << std::endl;


    std::cout << std::endl;
    PlayerStats PlayerTwo{75, {55.50, 66.68}};
    std::cout << PlayerTwo.getHealth() << "\n";
    std::cout << PlayerTwo.getPos().x;
    std::cout << " " << PlayerTwo.getPos().y << "\n";

    std::cout << "\n--- End of Porgram ---" << std::endl;
    std::cin.get();
    return 0;
}
