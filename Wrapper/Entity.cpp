#include "Entity.h"
namespace CLI
{
    Entity::Entity(String^ name, float xPos, float yPos)
        : ManagedObject(new Core::Entity(string_to_char_array(name), xPos, yPos))
    {
        Console::WriteLine("Creating a new Entity-wrapper object!");
    }
    void Entity::Move(float deltaX, float deltaY)
    {
        Console::WriteLine("The Move method from the Wrapper was called!");
        m_Instance->Move(deltaX, deltaY);
    }

    GeneralCAPI::GeneralCAPI()
        :ManagedObject(new Core::GeneralCAPI())
    {
        Console::WriteLine("Creating a new GeneralCAPI-wrapper object!");
    }
    void GeneralCAPI::CallMeYunlong()
    {
        m_Instance->CallMeYunlong();
    }
    double GeneralCAPI::CalculateSums(int count)
    {
        return m_Instance->CalculateSums(count);
    }
}