/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicate.h"

@class NSPredicateOperator, NSExpression;

@interface NSComparisonPredicate : NSPredicate {
	void *_reserved2;	// 8 = 0x8
	NSPredicateOperator *_predicateOperator;	// 12 = 0xc
	NSExpression *_lhs;	// 16 = 0x10
	NSExpression *_rhs;	// 20 = 0x14
}
@property(retain) NSPredicateOperator *predicateOperator;	// G=0x34d664fd; S=0x34d7c681; converted property
+ (id)predicateWithLeftExpression:(id)leftExpression rightExpression:(id)expression customSelector:(SEL)selector;	// 0x34e0ca95
+ (id)predicateWithLeftExpression:(id)leftExpression rightExpression:(id)expression modifier:(unsigned)modifier type:(unsigned)type options:(unsigned)options;	// 0x34d66fe1
+ (id)predicateWithPredicateOperator:(id)predicateOperator leftExpression:(id)expression rightExpression:(id)expression3;	// 0x34e0cbe5
+ (id)predicateWithPredicateOperator:(id)predicateOperator leftKeyPath:(id)path rightKeyPath:(id)path3;	// 0x34e0cb9d
+ (id)predicateWithPredicateOperator:(id)predicateOperator leftKeyPath:(id)path rightValue:(id)value;	// 0x34e0cb55
- (id)initWithCoder:(id)coder;	// 0x34e0cd5d
- (id)initWithLeftExpression:(id)leftExpression rightExpression:(id)expression customSelector:(SEL)selector;	// 0x34e0cadd
- (id)initWithLeftExpression:(id)leftExpression rightExpression:(id)expression modifier:(unsigned)modifier type:(unsigned)type options:(unsigned)options;	// 0x34d67035
- (id)initWithPredicateOperator:(id)predicateOperator leftExpression:(id)expression rightExpression:(id)expression3;	// 0x34d662f5
- (id)initWithPredicateOperator:(id)predicateOperator leftKeyPath:(id)path rightKeyPath:(id)path3;	// 0x34e0ce75
- (id)initWithPredicateOperator:(id)predicateOperator leftKeyPath:(id)path rightValue:(id)value;	// 0x34e0cf39
- (void)_acceptExpressions:(id)expressions flags:(unsigned)flags;	// 0x34d66639
- (void)_acceptOperator:(id)anOperator flags:(unsigned)flags;	// 0x34e0d25d
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x34d66591
- (unsigned)comparisonPredicateModifier;	// 0x34d667ed
- (id)copyWithZone:(NSZone *)zone;	// 0x34d7c2c9
- (SEL)customSelector;	// 0x34e0d0d9
- (void)dealloc;	// 0x34d6695d
- (void)encodeWithCoder:(id)coder;	// 0x34e0cc61
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;	// 0x34d688f1
- (id)generateMetadataDescription;	// 0x34d8325d
- (unsigned)hash;	// 0x34e0d1ed
- (BOOL)isEqual:(id)equal;	// 0x34e0d101
- (id)keyPathExpressionForString:(id)string;	// 0x34e0cc2d
- (id)leftExpression;	// 0x34d66475
- (unsigned)options;	// 0x34d66889
- (id)predicateFormat;	// 0x34e0cff9
// converted property getter: - (id)predicateOperator;	// 0x34d664fd
- (unsigned)predicateOperatorType;	// 0x34d664d5
- (id)predicateWithSubstitutionVariables:(id)substitutionVariables;	// 0x34e0d28d
- (id)rightExpression;	// 0x34d664c5
// converted property setter: - (void)setPredicateOperator:(id)anOperator;	// 0x34d7c681
@end
