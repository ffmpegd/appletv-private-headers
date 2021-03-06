/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSStringPredicateOperator.h"


@interface NSSubstringPredicateOperator : NSStringPredicateOperator {
	unsigned _position;	// 16 = 0x10
}
@property(readonly, assign) unsigned position;	// G=0x34e16829; converted property
- (id)initWithCoder:(id)coder;	// 0x34e16779
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant position:(unsigned)position;	// 0x34d7b901
- (void)encodeWithCoder:(id)coder;	// 0x34e166d1
- (BOOL)isEqual:(id)equal;	// 0x34e16839
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x34d7b9dd
// converted property getter: - (unsigned)position;	// 0x34e16829
- (SEL)selector;	// 0x34e166c1
- (id)symbol;	// 0x34e16915
@end

