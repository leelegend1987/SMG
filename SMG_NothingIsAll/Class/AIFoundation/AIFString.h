//
//  AIFString.h
//  SMG_NothingIsAll
//
//  Created by 贾  on 2017/5/21.
//  Copyright © 2017年 XiaoGang. All rights reserved.
//

#import "AIFObject.h"

/**
 *  MARK:--------------------字符串--------------------
 *  //存AIFChar数组;
 */
@class AIFChar;
@interface AIFString : AIFObject

@property (strong,nonatomic) NSMutableArray *content;//AIFChar.pointer数组;
- (AIFChar*)characterAtIndex:(NSUInteger)index;

@end
