//
//  ToDoItem.h
//  ToDoList
//
//  Created by Hongji Yang on 14-4-20.
//  Copyright (c) 2014年 yhj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationData;

@end
