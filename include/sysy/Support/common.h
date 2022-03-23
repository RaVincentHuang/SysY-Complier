#ifndef SYSY_COMMON_H
#define SYSY_COMMON_H

#include <iostream>
// TODO
#define TODO() \
    std::cout << "\033[30;43mFeatures yet to be added:\033[m" << std::endl;    \
    std::cout << "\033[30;43mFrontend->\033[m" << std::endl;                   \
    std::cout << "\t\033[30;43mASTgen\033[m" << std::endl;                     \
    std::cout << "\t\033[30;43mSyntax check\033[m" << std::endl;               \
    std::cout << "\t\033[30;43mSemantic check\033[m" << std::endl;             \
    std::cout << "\t\033[30;43mMlirgen\033[m" << std::endl;                    \
    std::cout << "\033[30;43mBackend\033[m" << std::endl;


#endif