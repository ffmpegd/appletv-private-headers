/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSArray;

@interface NSPersistentStoreRequest : NSObject <NSCopying> {
	NSArray *_affectedStores;	// 4 = 0x4
}
@property(retain) NSArray *affectedStores;	// G=0x30ea5021; S=0x30f870c5; converted property
+ (void)initialize;	// 0x30e8ebf9
// converted property getter: - (id)affectedStores;	// 0x30ea5021
- (id)copyWithZone:(NSZone *)zone;	// 0x30f86fdd
- (void)dealloc;	// 0x30f87041
- (unsigned)requestType;	// 0x30f87091
// converted property setter: - (void)setAffectedStores:(id)stores;	// 0x30f870c5
@end

