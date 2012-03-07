/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPropertyStoreMapping.h"


__attribute__((visibility("hidden")))
@interface NSAttributeStoreMapping : NSPropertyStoreMapping {
@private
	int _externalType;	// 12 = 0xc
	unsigned _externalPrecision;	// 16 = 0x10
	int _externalScale;	// 20 = 0x14
}
@property(assign) unsigned externalPrecision;	// G=0x33f87af9; S=0x33f87b09; converted property
@property(assign) int externalScale;	// G=0x33f87b19; S=0x33f87b29; converted property
@property(assign) int externalType;	// G=0x33f87ad9; S=0x33f87ae9; converted property
- (id)initWithProperty:(id)property;	// 0x33f87b39
- (id)attribute;	// 0x33f87d51
- (id)columnDefinition;	// 0x33f87bad
// converted property getter: - (unsigned)externalPrecision;	// 0x33f87af9
// converted property getter: - (int)externalScale;	// 0x33f87b19
// converted property getter: - (int)externalType;	// 0x33f87ad9
- (BOOL)isEqual:(id)equal;	// 0x33f87d61
// converted property setter: - (void)setExternalPrecision:(unsigned)precision;	// 0x33f87b09
// converted property setter: - (void)setExternalScale:(int)scale;	// 0x33f87b29
// converted property setter: - (void)setExternalType:(int)type;	// 0x33f87ae9
- (id)sqlType;	// 0x33f87c15
@end

