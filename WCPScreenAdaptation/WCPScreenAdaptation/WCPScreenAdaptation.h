//
//  WCPScreenAdaptation.h
//  WCPScreenAdaptation
//
//  Created by 王程鹏 on 16/7/7.
//  Copyright © 2016年 baling. All rights reserved.
//

#ifndef WCPScreenAdaptation_h
#define WCPScreenAdaptation_h


#define AdaptaionFlag
#ifdef  AdaptaionFlag
         #define CGRectMake CGRectMakeEx
         #define CGSizeMake CGSizeMakeEx
         #define widthEx widthEx
         #define heightEx heightEx
#else
         #define CGRectMake CGRectMake
         #define CGSizeMake CGSizeMake
         #define widthEx
         #define heightEx
#endif



#endif /* WCPScreenAdaptation_h */
