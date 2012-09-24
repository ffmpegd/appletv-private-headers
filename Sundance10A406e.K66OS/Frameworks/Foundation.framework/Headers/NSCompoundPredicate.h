/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicate.h"

@class NSArray;

@interface NSCompoundPredicate : NSPredicate {
	void *_reserved2;	// 8 = 0x8
	unsigned _type;	// 12 = 0xc
	NSArray *_subpredicates;	// 16 = 0x10
}
@property(readonly, retain) NSArray *subpredicates;	// G=0x3553af41; converted property
+ (id)_operatorForType:(unsigned)type;	// 0x3553b0a9
+ (id)andPredicateWithSubpredicates:(id)subpredicates;	// 0x3553aaed
+ (id)notPredicateWithSubpredicate:(id)subpredicate;	// 0x355e1339
+ (id)orPredicateWithSubpredicates:(id)subpredicates;	// 0x3553ac0d
- (id)initWithCoder:(id)coder;	// 0x355e1479
- (id)initWithType:(unsigned)type subpredicates:(id)subpredicates;	// 0x3553ab2d
- (void)_acceptSubpredicates:(id)subpredicates flags:(unsigned)flags;	// 0x3553b1bd
- (id)_predicateOperator;	// 0x3553b071
- (id)_subpredicateDescription:(id)description;	// 0x355e16dd
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x3553b151
- (unsigned)compoundPredicateType;	// 0x3553af31
- (id)copyWithZone:(NSZone *)zone;	// 0x355e1561
- (void)dealloc;	// 0x3553af51
- (void)encodeWithCoder:(id)coder;	// 0x355e1399
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;	// 0x3553c589
- (id)generateMetadataDescription;	// 0x35556dd9
- (unsigned)hash;	// 0x355e1b49
- (BOOL)isEqual:(id)equal;	// 0x355e1a9d
- (id)predicateFormat;	// 0x355e1791
- (id)predicateOperator;	// 0x3553b061
- (id)predicateWithSubstitutionVariables:(id)substitutionVariables;	// 0x355e1b71
// converted property getter: - (id)subpredicates;	// 0x3553af41
@end
