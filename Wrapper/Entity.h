#pragma once
#include "ManagedObject.h"
#include "../Core/Core.h"
using namespace System;

using namespace System::Runtime::InteropServices;
static const char* string_to_char_array(String^ string)
{
    const char* str = (const char*)(Marshal::StringToHGlobalAnsi(string)).ToPointer();
    return str;
}

namespace CLI
{
    public ref class Entity : public ManagedObject<Core::Entity>
    {
    public:
        Entity(String^ name, float xPos, float yPos);
        void Move(float deltaX, float deltaY);
        property float XPosition
        {
        public:
            float get()
            {
                return m_Instance->GetXPosition();
            }
        private:
            void set(float value)
            {
            }
        }
        property float YPosition
        {
        public:
            float get()
            {
                return m_Instance->GetYPosition();
            }
        private:
            void set(float value)
            {
            }
        }
    };

    public ref class GeneralCAPI : public ManagedObject<Core::GeneralCAPI>
    {
    public:
        GeneralCAPI();

        void CallMeYunlong();
        double CalculateSums(int count);
    };

}