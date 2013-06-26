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
@property(retain) NSPropertyDescription *property;	// G=0x2d0ed329; S=0x2d0ed339; converted property
- (id)initWithProperty:(id)property;	// 0x2d0ed0fd
- (void)dealloc;	// 0x2d0ed18d
- (id)description;	// 0x2d0ed1d1
- (BOOL)isEqual:(id)equal;	// 0x2d0ed24d
// converted property getter: - (id)property;	// 0x2d0ed329
// converted property setter: - (void)setProperty:(id)property;	// 0x2d0ed339
@end
