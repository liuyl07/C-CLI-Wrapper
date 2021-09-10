#pragma once

#ifdef CORE_EXPORTS
#define CORE_API __declspec(dllexport)
#else
#define CORE_API __declspec(dllimport)
#endif

namespace Core
{
    // Example One: C++ class with data member
    class CORE_API Entity
    {
    public:
        const char* m_Name;
    private:
        float m_XPos, m_YPos;
    public:
        Entity(const char* name, float xPos, float yPos);

        void Move(float deltaX, float deltaY);
        inline float GetXPosition() const { return m_XPos; };
        inline float GetYPosition() const { return m_YPos; };
    };

    // Example One: C++ class without data member
    // We can use this way to group all general C APIs in this class
    class CORE_API GeneralCAPI
    {
    public:
        GeneralCAPI() = default;

        void CallMeYunlong();
        double CalculateSums(int count);
    };
}