//
//  Task.h
//  
//
//  Created by Jilian Scott on 6/4/15.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class List;

@interface Task : NSManagedObject

@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSDate *createdDate;
@property (nonatomic, retain) NSNumber *completed;
@property (nonatomic, retain) List *list;

@end
