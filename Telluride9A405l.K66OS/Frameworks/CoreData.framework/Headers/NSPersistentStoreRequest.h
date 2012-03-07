/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSArray;

@interface NSPersistentStoreRequest : NSObject <NSCopying> {
@private
	NSArray *_affectedStores;	// 4 = 0x4
}
@property(retain) NSArray *affectedStores;	// G=0x33f47a69; S=0x34036d8d; converted property
+ (void)initialize;	// 0x33f66ab5
// converted property getter: - (id)affectedStores;	// 0x33f47a69
- (id)copyWithZone:(NSZone *)zone;	// 0x34036d29
- (void)dealloc;	// 0x33f5e791
- (unsigned)requestType;	// 0x34036ed5
// converted property setter: - (void)setAffectedStores:(id)stores;	// 0x34036d8d
@end
