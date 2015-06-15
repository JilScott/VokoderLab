// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to Task.h instead.

@import CoreData;

extern const struct TaskAttributes {
	__unsafe_unretained NSString *completed;
	__unsafe_unretained NSString *createdDate;
	__unsafe_unretained NSString *title;
} TaskAttributes;

extern const struct TaskRelationships {
	__unsafe_unretained NSString *list;
} TaskRelationships;

@class List;

@interface TaskID : NSManagedObjectID {}
@end

@interface _Task : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) TaskID* objectID;

@property (nonatomic, strong) NSNumber* completed;

@property (atomic) BOOL completedValue;
- (BOOL)completedValue;
- (void)setCompletedValue:(BOOL)value_;

//- (BOOL)validateCompleted:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) NSDate* createdDate;

//- (BOOL)validateCreatedDate:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) NSString* title;

//- (BOOL)validateTitle:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) List *list;

//- (BOOL)validateList:(id*)value_ error:(NSError**)error_;

@end

@interface _Task (CoreDataGeneratedPrimitiveAccessors)

- (NSNumber*)primitiveCompleted;
- (void)setPrimitiveCompleted:(NSNumber*)value;

- (BOOL)primitiveCompletedValue;
- (void)setPrimitiveCompletedValue:(BOOL)value_;

- (NSDate*)primitiveCreatedDate;
- (void)setPrimitiveCreatedDate:(NSDate*)value;

- (NSString*)primitiveTitle;
- (void)setPrimitiveTitle:(NSString*)value;

- (List*)primitiveList;
- (void)setPrimitiveList:(List*)value;

@end
