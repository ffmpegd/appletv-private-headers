/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "Foundation-Structs.h"


@interface NSPredicateOperator : NSObject <NSCoding, NSCopying> {
	unsigned _operatorType;	// 4 = 0x4
	unsigned _modifier;	// 8 = 0x8
}
@property(readonly, assign) unsigned modifier;	// G=0x34672709; converted property
@property(readonly, assign) unsigned operatorType;	// G=0x34671e85; converted property
+ (SEL)_getSelectorForType:(unsigned)type;	// 0x34674ed5
+ (id)_getSymbolForType:(unsigned)type;	// 0x3471b851
+ (id)_newOperatorWithType:(unsigned)type modifier:(unsigned)modifier options:(unsigned)options;	// 0x3464f351
+ (id)operatorWithCustomSelector:(SEL)customSelector modifier:(unsigned)modifier;	// 0x3471b975
+ (id)operatorWithType:(unsigned)type modifier:(unsigned)modifier options:(unsigned)options;	// 0x3471b941
- (id)initWithCoder:(id)coder;	// 0x34671d55
- (id)initWithOperatorType:(unsigned)operatorType;	// 0x346722c1
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier;	// 0x3464f6ed
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier options:(unsigned)options;	// 0x3471b9c1
- (void)_setModifier:(unsigned)modifier;	// 0x3471bc3d
- (void)_setOptions:(unsigned)options;	// 0x3471bc15
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x3471bbf5
- (id)copyWithZone:(NSZone *)zone;	// 0x3471ba75
- (id)description;	// 0x3471baa9
- (void)encodeWithCoder:(id)coder;	// 0x3471b9d1
- (unsigned)hash;	// 0x3471bb91
- (BOOL)isEqual:(id)equal;	// 0x3471bafd
// converted property getter: - (unsigned)modifier;	// 0x34672709
// converted property getter: - (unsigned)operatorType;	// 0x34671e85
- (unsigned)options;	// 0x3471bc39
- (BOOL)performOperationUsingObject:(id)object andObject:(id)object2;	// 0x34674a11
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x3471bbd1
- (id)predicateFormat;	// 0x3471ba99
- (SEL)selector;	// 0x34674e91
- (id)symbol;	// 0x3471bab9
@end
