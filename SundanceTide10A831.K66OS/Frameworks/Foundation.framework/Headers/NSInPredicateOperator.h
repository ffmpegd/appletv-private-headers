/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"

@class NSSubstringPredicateOperator;

@interface NSInPredicateOperator : NSPredicateOperator {
	unsigned _flags;	// 12 = 0xc
	NSSubstringPredicateOperator *_stringVersion;	// 16 = 0x10
}
@property(readonly, assign) unsigned flags;	// G=0x325ea551; converted property
@property(readonly, retain) NSSubstringPredicateOperator *stringVersion;	// G=0x325ea219; converted property
- (id)initWithCoder:(id)coder;	// 0x325ea335
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier options:(unsigned)options;	// 0x3253c759
- (void)_setOptions:(unsigned)options;	// 0x3253c7a1
- (id)copyWithZone:(NSZone *)zone;	// 0x325ea619
- (void)dealloc;	// 0x3253ef1d
- (void)encodeWithCoder:(id)coder;	// 0x325ea2d9
// converted property getter: - (unsigned)flags;	// 0x325ea551
- (BOOL)isEqual:(id)equal;	// 0x325ea561
- (unsigned)options;	// 0x325ea8e5
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x325ea685
// converted property getter: - (id)stringVersion;	// 0x325ea219
- (id)symbol;	// 0x325ea399
@end
