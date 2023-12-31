#pragma once

#include<cassert>
#include<stdint.h>
#include<string>
#include<sstream>
#include<iostream>
#include<vector>

#define assertm(msg,cond) assert(((msg),(cond)))

inline static constexpr uint8_t GroupNumber = 17;

using id_t = uint64_t;
using entryName_t = std::string;
using shoolName_t = std::string;
using category_t = std::string;
using competitor_t = std::string;
using advisor_t = std::string;

struct BasicInformation
{
    entryName_t entryName;
    shoolName_t school;
    category_t category;
    competitor_t competitor;
    advisor_t advisor;
};



struct BuildingInformation final
{
    std::string name;
    
};



struct CException final
{
    std::string message;
};



struct TeamInfor final
{
    id_t id;
    int time;
};

struct GroupInfor final
{
    std::vector<TeamInfor> teams;
    int currentTeam;
};