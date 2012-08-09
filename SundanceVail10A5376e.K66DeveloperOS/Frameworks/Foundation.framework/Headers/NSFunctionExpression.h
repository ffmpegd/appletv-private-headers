/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSArray;

@interface NSFunctionExpression : NSExpression {
	NSExpression *_operand;	// 12 = 0xc
	SEL _selector;	// 16 = 0x10
	NSArray *_arguments;	// 20 = 0x14
}
@property(readonly, retain) NSArray *arguments;	// G=0x34d664b5; converted property
@property(readonly, retain) NSExpression *operand;	// G=0x34d66495; converted property
@property(readonly, assign) SEL selector;	// G=0x34d66485; converted property
- (id)initWithCoder:(id)coder;	// 0x34e102a5
- (id)initWithExpressionType:(unsigned)expressionType operand:(id)operand selector:(SEL)selector argumentArray:(id)array;	// 0x34d654a5
- (id)initWithSelector:(SEL)selector argumentArray:(id)array;	// 0x34d68531
- (id)initWithTarget:(id)target selectorName:(id)name arguments:(id)arguments;	// 0x34e100b5
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x34e10d61
- (BOOL)_shouldUseParensWithDescription;	// 0x34e10d25
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x34d66695
// converted property getter: - (id)arguments;	// 0x34d664b5
- (id)binaryOperatorForSelector;	// 0x34e1052d
- (id)copyWithZone:(NSZone *)zone;	// 0x34d7c40d
- (void)dealloc;	// 0x34d66a19
- (void)encodeWithCoder:(id)coder;	// 0x34e101a5
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x34d68a51
- (id)function;	// 0x34e103bd
- (unsigned)hash;	// 0x34e104b9
- (BOOL)isEqual:(id)equal;	// 0x34e103d9
// converted property getter: - (id)operand;	// 0x34d66495
- (id)predicateFormat;	// 0x34e10669
// converted property getter: - (SEL)selector;	// 0x34d66485
@end
