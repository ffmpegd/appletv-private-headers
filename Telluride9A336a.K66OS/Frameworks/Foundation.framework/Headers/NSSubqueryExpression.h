/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"

@class NSPredicate;

@interface NSSubqueryExpression : NSExpression {
@private
	NSExpression *_collection;	// 12 = 0xc
	NSExpression *_variableExpression;	// 16 = 0x10
	NSPredicate *_subpredicate;	// 20 = 0x14
}
@property(readonly, retain) NSExpression *collection;	// G=0x33722231; converted property
@property(readonly, retain) NSExpression *variableExpression;	// G=0x33722241; converted property
- (id)initWithCoder:(id)coder;	// 0x33721f95
- (id)initWithExpression:(id)expression usingIteratorExpression:(id)expression2 predicate:(id)predicate;	// 0x33721db1
- (id)initWithExpression:(id)expression usingIteratorVariable:(id)variable predicate:(id)predicate;	// 0x33721cdd
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x337225e5
- (BOOL)_shouldUseParensWithDescription;	// 0x337226ed
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x337226f1
// converted property getter: - (id)collection;	// 0x33722231
- (id)copyWithZone:(NSZone *)zone;	// 0x337220e1
- (void)dealloc;	// 0x33721c69
- (void)encodeWithCoder:(id)coder;	// 0x33721e99
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x33722389
- (unsigned)hash;	// 0x33722341
- (BOOL)isEqual:(id)equal;	// 0x33722289
- (id)predicate;	// 0x33722279
- (id)predicateFormat;	// 0x33722195
- (id)variable;	// 0x33722251
// converted property getter: - (id)variableExpression;	// 0x33722241
@end

