//
//  List.h
//  
//
//  Created by Jilian Scott on 6/4/15.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class NSManagedObject;

@interface List : NSManagedObject

@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSManagedObject *task;

@end
