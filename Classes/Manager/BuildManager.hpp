//
//  BuildManager.hpp
//  HelloWorldDemo
//
//  Created by 曾富田 on 2017/4/6.
//
//

#ifndef BuildManager_hpp
#define BuildManager_hpp

#include <stdio.h>
#include "cocos2d.h"
#include <json/document.h>
#include "Sqlite3Manager.hpp"
#include "BuildModel.hpp"

class BuildManager : public cocos2d::Ref
{
    public:
        static BuildManager* getInstance();
        void loadBuildData();
        cocos2d::Vector<BuildModel *> buildVec;
protected:
    BuildManager();
    virtual ~BuildManager();
    
private:
    
//    static bool createXMLFile();
//    static void initXMLFilePath();
    
    static BuildManager* _buildManager;
};

#endif /* BuildManager_hpp */
