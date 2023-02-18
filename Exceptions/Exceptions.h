#pragma once
#include <iostream>
#include <exception>

using namespace std;

class bad_length : public exception
{
public:
    virtual const char* what() const noexcept override
    {
        return "Bad length exception!";
    }
};

class bad_range : public exception
{
public:
    virtual const char* what() const noexcept override
    {
        return "Bad range exception!";
    }
};

class bad_value : public exception
{
public:
    virtual const char* what() const noexcept override
    {
        return "Bad value exception!";
    }
};