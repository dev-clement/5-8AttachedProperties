#include "timer.hpp"

Timer::Timer(QObject *parent) : QObject(parent)
{

}

TimerAttached *Timer::qmlAttachedProperties(QObject *object)
{
    return new TimerAttached(object);
}
