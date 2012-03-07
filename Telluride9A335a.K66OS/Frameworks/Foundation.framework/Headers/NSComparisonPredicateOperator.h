/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"


@interface NSComparisonPredicateOperator : NSPredicateOperator {
@private
	unsigned _variant;	// 12 = 0xc
	unsigned _options;	// 16 = 0x10
}
@property(readonly, assign) unsigned options;	// G=0x320de55d; converted property
@property(readonly, assign) unsigned variant;	// G=0x320de54d; converted property
- (id)initWithCoder:(id)coder;	// 0x3203c88d
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant;	// 0x3203cbbd
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant options:(unsigned)options;	// 0x3203cb89
- (id)copyWithZone:(NSZone *)zone;	// 0x320de3a9
- (void)encodeWithCoder:(id)coder;	// 0x320de2e1
- (BOOL)isEqual:(id)equal;	// 0x320de56d
// converted property getter: - (unsigned)options;	// 0x320de55d
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x3203fc55
- (id)predicateFormat;	// 0x320de435
// converted property getter: - (unsigned)variant;	// 0x320de54d
@end

