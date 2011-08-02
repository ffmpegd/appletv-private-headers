/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"

@class NSPredicate;

@interface NSTernaryExpression : NSExpression {
@private
	NSPredicate *_predicate;	// 12 = 0xc
	NSExpression *_trueExpression;	// 16 = 0x10
	NSExpression *_falseExpression;	// 20 = 0x14
}
@property(readonly, retain) NSExpression *falseExpression;	// G=0x310b8ec1; converted property
@property(readonly, retain) NSPredicate *predicate;	// G=0x310b8ea1; converted property
@property(readonly, retain) NSExpression *trueExpression;	// G=0x310b8eb1; converted property
- (id)initWithCoder:(id)coder;	// 0x310b91cd
- (id)initWithPredicate:(id)predicate trueExpression:(id)expression falseExpression:(id)expression3;	// 0x310b9445
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x310b957d
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x310b8f41
- (id)copyWithZone:(NSZone *)zone;	// 0x310b94c9
- (void)dealloc;	// 0x310b93b9
- (void)encodeWithCoder:(id)coder;	// 0x310b92d5
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x310b8ed1
// converted property getter: - (id)falseExpression;	// 0x310b8ec1
- (BOOL)isEqual:(id)equal;	// 0x310b90d1
// converted property getter: - (id)predicate;	// 0x310b8ea1
- (id)predicateFormat;	// 0x310b9039
// converted property getter: - (id)trueExpression;	// 0x310b8eb1
@end
