/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapping.h"

@class NSPropertyDescription;

@interface NSPropertyStoreMapping : NSStoreMapping {
	NSPropertyDescription *_property;	// 8 = 0x8
}
@property(retain) NSPropertyDescription *property;	// G=0x30f2cd61; S=0x30f2cd71; converted property
- (id)initWithProperty:(id)property;	// 0x30f2cb35
- (void)dealloc;	// 0x30f2cbc5
- (id)description;	// 0x30f2cc09
- (BOOL)isEqual:(id)equal;	// 0x30f2cc85
// converted property getter: - (id)property;	// 0x30f2cd61
// converted property setter: - (void)setProperty:(id)property;	// 0x30f2cd71
@end
