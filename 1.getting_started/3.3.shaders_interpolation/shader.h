//
//  shader.h
//  gltest
//
//  Created by chdp on 2018/11/4.
//  Copyright © 2018 chdp. All rights reserved.
//

#ifndef SHADER_H
#define SHADER_H

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader
{
public:
    // program id
    unsigned int ID;
    
    Shader(const char* vertexPath, const char* fragmentPath);
    void use();
    void setBool(const std::string &name, bool value) const;
    void setInt(const std::string &name, int value) const;
    void setFloat(const std::string &name, float value) const;
};


#endif /* shader_h */
