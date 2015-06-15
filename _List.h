// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to List.h instead.

@import CoreData;

extern const struct ListAttributes {
	__unsafe_unretained NSString *title;
} ListAttributes;

extern const struct ListRelationships {
	__unsafe_unretained NSString *task;
} ListRelationships;

@class Task;

@interface ListID : NSManagedObjectID {}
@end

@interface _List : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) ListID* objectID;

@property (nonatomic, strong) NSString* title;

//- (BOOL)validateTitle:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) Task *task;

//- (BOOL)validateTask:(id*)value_ error:(NSError**)error_;

@end

@interface _List (CoreDataGeneratedPrimitiveAccessors)

- (NSString*)primitiveTitle;
- (void)setPrimitiveTitle:(NSString*)value;

- (Task*)primitiveTask;
- (void)setPrimitiveTask:(Task*)value;

@end
