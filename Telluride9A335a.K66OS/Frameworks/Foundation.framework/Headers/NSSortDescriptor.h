/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSString;

@interface NSSortDescriptor : NSObject <NSCoding, NSCopying> {
@private
	unsigned _sortDescriptorFlags;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	SEL _selector;	// 12 = 0xc
	id _selectorOrBlock;	// 16 = 0x10
}
@property(readonly, retain) NSString *key;	// G=0x32006815; converted property
@property(readonly, assign) SEL selector;	// G=0x320067c1; converted property
+ (id)_defaultSelectorName;	// 0x3209f7f9
+ (void)initialize;	// 0x32023981
+ (id)sortDescriptorWithKey:(id)key ascending:(BOOL)ascending;	// 0x3203faed
+ (id)sortDescriptorWithKey:(id)key ascending:(BOOL)ascending comparator:(id)comparator;	// 0x3209f7b1
+ (id)sortDescriptorWithKey:(id)key ascending:(BOOL)ascending selector:(SEL)selector;	// 0x3203fb19
- (id)initWithCoder:(id)coder;	// 0x3209fa2d
- (id)initWithKey:(id)key ascending:(BOOL)ascending;	// 0x320218d1
- (id)initWithKey:(id)key ascending:(BOOL)ascending comparator:(id)comparator;	// 0x3209f805
- (id)initWithKey:(id)key ascending:(BOOL)ascending selector:(SEL)selector;	// 0x320061ed
- (BOOL)_isEqualToSortDescriptor:(id)sortDescriptor;	// 0x3209fe0d
- (id)_selectorName;	// 0x3209fc21
- (void)_setAscending:(BOOL)ascending;	// 0x3209fb71
- (void)_setKey:(id)key;	// 0x3209fb2d
- (void)_setSelectorName:(id)name;	// 0x3209fbb9
- (BOOL)ascending;	// 0x320067ad
- (id)comparator;	// 0x3209fb91
- (int)compareObject:(id)object toObject:(id)object2;	// 0x32050e91
- (id)copyWithZone:(NSZone *)zone;	// 0x3209fb1d
- (void)dealloc;	// 0x32006b21
- (id)description;	// 0x3209fc69
- (void)encodeWithCoder:(id)coder;	// 0x3209f8e5
- (BOOL)isEqual:(id)equal;	// 0x3209ff0d
// converted property getter: - (id)key;	// 0x32006815
- (id)reversedSortDescriptor;	// 0x3209fd55
// converted property getter: - (SEL)selector;	// 0x320067c1
@end

