/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSCoding.h"
#import "EventKit-Structs.h"


@interface EKObjectID : NSObject <NSCopying, NSCoding> {
	BOOL _temporary;	// 4 = 0x4
	int _entityType;	// 8 = 0x8
	int _rowID;	// 12 = 0xc
}
@property(readonly, assign) int entityType;	// G=0x34b872fd; converted property
@property(readonly, assign) int rowID;	// G=0x34b3b38d; converted property
@property(readonly, assign, getter=isTemporary) BOOL temporary;	// G=0x34b22c71; converted property
+ (id)objectIDWithCADObjectID:(XXStruct_K5nmsA)cadobjectID;	// 0x34b21b81
+ (id)objectIDWithEntityType:(int)entityType rowID:(int)anId;	// 0x34b274f1
+ (id)objectIDWithURL:(id)url;	// 0x34b86e21
+ (id)temporaryObjectIDWithEntityType:(int)entityType;	// 0x34b31165
- (id)initWithCoder:(id)coder;	// 0x34b3ae09
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x34b87161
- (id)initWithEntityType:(int)entityType rowID:(int)anId temporary:(BOOL)temporary;	// 0x34b21bd1
- (XXStruct_K5nmsA)CADObjectID;	// 0x34b22c81
- (id)URIRepresentation;	// 0x34b873b5
- (id)copyWithZone:(NSZone *)zone;	// 0x34b22385
- (id)description;	// 0x34b8730d
- (id)dictionaryRepresentation;	// 0x34b87235
- (void)encodeWithCoder:(id)coder;	// 0x34b27cc1
- (id)entityName;	// 0x34b21db1
// converted property getter: - (int)entityType;	// 0x34b872fd
- (unsigned)hash;	// 0x34b21c45
- (BOOL)isEqual:(id)equal;	// 0x34b22689
// converted property getter: - (BOOL)isTemporary;	// 0x34b22c71
// converted property getter: - (int)rowID;	// 0x34b3b38d
- (id)stringRepresentation;	// 0x34b8731d
@end
