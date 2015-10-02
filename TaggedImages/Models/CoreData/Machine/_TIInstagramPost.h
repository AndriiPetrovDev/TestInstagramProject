// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to TIInstagramPost.h instead.

#import <CoreData/CoreData.h>

extern const struct TIInstagramPostAttributes {
	__unsafe_unretained NSString *captionText;
	__unsafe_unretained NSString *createdTime;
	__unsafe_unretained NSString *id;
	__unsafe_unretained NSString *pictureURL;
} TIInstagramPostAttributes;

@interface TIInstagramPostID : NSManagedObjectID {}
@end

@interface _TIInstagramPost : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) TIInstagramPostID* objectID;

@property (nonatomic, strong) NSString* captionText;

//- (BOOL)validateCaptionText:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) NSString* createdTime;

//- (BOOL)validateCreatedTime:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) NSString* id;

//- (BOOL)validateId:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) NSString* pictureURL;

//- (BOOL)validatePictureURL:(id*)value_ error:(NSError**)error_;

@end

@interface _TIInstagramPost (CoreDataGeneratedPrimitiveAccessors)

- (NSString*)primitiveCaptionText;
- (void)setPrimitiveCaptionText:(NSString*)value;

- (NSString*)primitiveCreatedTime;
- (void)setPrimitiveCreatedTime:(NSString*)value;

- (NSString*)primitiveId;
- (void)setPrimitiveId:(NSString*)value;

- (NSString*)primitivePictureURL;
- (void)setPrimitivePictureURL:(NSString*)value;

@end