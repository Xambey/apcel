#pragma once
#include <iostream>
#include "https.h"
class vkapi
{
    typedef std::string vk;
public:
    vkapi();
    vkapi(https *);
    ~vkapi();

    void groupsGetById(vk);
    void groupsGetById(vk, vk);








    void save();
    void save(std::string);
private:
    void setup(https *);
    void request(vk, vk);
    void readTokenFromFile();
    https * httpsObject;
    std::string token;


};