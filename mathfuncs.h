/*
If you get errors with preprocessors here, Then your using an old version of c.
You shouldn't anyways.
*/

#include <stdio.h>

#ifndef uint
    typedef unsigned int uint;
#endif

#ifndef ulng
    typedef unsigned long ulng;
#endif

#ifndef ushrt
    typedef unsigned short usht;
#endif

#ifndef __GPU_CALCULATOR_MATH_FUNCS_HEADER
    #ifndef wrap
        int wrap(int val, int lower, int higher){
            if(val < lower){
                return lower;
            } else if(val > higher){
                return higher;
            } else{
                return val;
            }
        }

        double wrap(double val, double lower, double higher){
            if(val < lower){
                return lower;
            } else if(val > higher){
                return higher;
            } else{
                return val;
            }
        }

        uint wrap(uint val, uint lower, uint higher){
            if(val < lower){
                return lower;
            } else if(val > higher){
                return higher;
            } else{
                return val;
            }
        }

        long wrap(long val, long lower, long higher){
            if(val < lower){
                return lower;
            } else if(val > higher){
                return higher;
            } else{
                return val;
            }
        }

        float wrap(float val, float lower, float higher){
            if(val < lower){
                return lower;
            } else if(val > higher){
                return higher;
            } else{
                return val;
            }
        }

        short wrap(short val, short lower, short higher){
            if(val < lower){
                return lower;
            } else if(val > higher){
                return higher;
            } else{
                return val;
            }
        }

        ulng wrap(ulng val, ulng lower, ulng higher){
            if(val < lower){
                return lower;
            } else if(val > higher){
                return higher;
            } else{
                return val;
            }
        }

        usht wrap(usht val, usht lower, usht higher){
            if(val < lower){
                return lower;
            } else if(val > higher){
                return higher;
            } else{
                return val;
            }
        }

    #endif

    #ifndef clamp
        int clamp(int val, int lower, int higher){
            if(val < (lower + higher) / 2){
                return lower;
            } else if(val > (lower + higher) / 2){
                return higher;
            } else{
                return val;
            }
        }
        
        uint clamp(uint val, uint lower, uint higher){
            if(val < (lower + higher) / 2){
                return lower;
            } else if(val > (lower + higher) / 2){
                return higher;
            } else{
                return val;
            }
        }

        float clamp(float val, float lower, float higher){
            if(val < (lower + higher) / 2){
                return lower;
            } else if(val > (lower + higher) / 2){
                return higher;
            } else{
                return val;
            }
        }

        long clamp(long val, long lower, long higher){
            if(val < (lower + higher) / 2){
                return lower;
            } else if(val > (lower + higher) / 2){
                return higher;
            } else{
                return val;
            }
        }

        ulng clamp(ulng val, ulng lower, ulng higher){
            if(val < (lower + higher) / 2){
                return lower;
            } else if(val > (lower + higher) / 2){
                return higher;
            } else{
                return val;
            }
        }

        short clamp(short val, short lower, short higher){
            if(val < (lower + higher) / 2){
                return lower;
            } else if(val > (lower + higher) / 2){
                return higher;
            } else{
                return val;
            }
        }

        usht clamp(usht val, usht lower, usht higher){
            if(val < (lower + higher) / 2){
                return lower;
            } else if(val > (lower + higher) / 2){
                return higher;
            } else{
                return val;
            }
        }
    #endif
#endif

#define __GPU_CALCULATOR_MATH_FUNCS_HEADER
