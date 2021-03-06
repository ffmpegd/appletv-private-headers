/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface NSExpression : NSObject <NSCoding, NSCopying> {
@private
	void *_reserved;	// 4 = 0x4
	unsigned _expressionType;	// 8 = 0x8
}
@property(readonly, assign) unsigned expressionType;	// G=0x33667afd; converted property
+ (id)_newKeyPathExpressionForString:(id)string;	// 0x33667aa5
+ (id)expressionForAggregate:(id)aggregate;	// 0x3371fa6d
+ (id)expressionForBlock:(id)block arguments:(id)arguments;	// 0x3371fcf9
+ (id)expressionForConstantValue:(id)constantValue;	// 0x33685b61
+ (id)expressionForEvaluatedObject;	// 0x33682471
+ (id)expressionForFunction:(id)function arguments:(id)arguments;	// 0x33684419
+ (id)expressionForFunction:(id)function selectorName:(id)name arguments:(id)arguments;	// 0x3371fb09
+ (id)expressionForIntersectSet:(id)intersectSet with:(id)with;	// 0x3371fc51
+ (id)expressionForKeyPath:(id)keyPath;	// 0x33667a39
+ (id)expressionForMinusSet:(id)minusSet with:(id)with;	// 0x3371fca5
+ (id)expressionForSubquery:(id)subquery usingIteratorVariable:(id)variable predicate:(id)predicate;	// 0x3371fab5
+ (id)expressionForSymbolicString:(id)symbolicString;	// 0x3371fa25
+ (id)expressionForTernaryWithPredicate:(id)predicate trueExpression:(id)expression falseExpression:(id)expression3;	// 0x3371fba9
+ (id)expressionForUnionSet:(id)unionSet with:(id)with;	// 0x3371fbfd
+ (id)expressionForVariable:(id)variable;	// 0x3371f9dd
+ (id)expressionForVariableNameAssignment:(id)variableNameAssignment expression:(id)expression;	// 0x3371fb5d
+ (id)expressionWithFormat:(id)format;	// 0x3371f94d
+ (id)expressionWithFormat:(id)format argumentArray:(id)array;	// 0x3371f8e9
+ (id)expressionWithFormat:(id)format arguments:(void *)arguments;	// 0x3371f979
- (id)initWithCoder:(id)coder;	// 0x336827f5
- (id)initWithExpressionType:(unsigned)expressionType;	// 0x3365fb19
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x33720071
- (BOOL)_shouldUseParensWithDescription;	// 0x3372006d
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x336832b5
- (id)arguments;	// 0x3371ff29
- (id)collection;	// 0x3371ffb9
- (id)constantValue;	// 0x3371fe75
- (id)copyWithZone:(NSZone *)zone;	// 0x3371fdd5
- (id)description;	// 0x3371fe1d
- (void)encodeWithCoder:(id)coder;	// 0x3371fd4d
- (id)expressionBlock;	// 0x33720049
// converted property getter: - (unsigned)expressionType;	// 0x33667afd
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x3371fdf9
- (id)falseExpression;	// 0x33720025
- (id)function;	// 0x3371febd
- (id)keyPath;	// 0x3371fe51
- (id)leftExpression;	// 0x3371ff4d
- (id)operand;	// 0x3371fee1
- (id)predicate;	// 0x3371ff95
- (id)predicateFormat;	// 0x3371fe2d
- (id)rightExpression;	// 0x3371ff71
- (SEL)selector;	// 0x3371ff05
- (id)subexpression;	// 0x3371ffdd
- (id)trueExpression;	// 0x33720001
- (id)variable;	// 0x3371fe99
@end

