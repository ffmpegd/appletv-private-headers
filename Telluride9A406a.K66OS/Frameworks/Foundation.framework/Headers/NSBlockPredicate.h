/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicate.h"


@interface NSBlockPredicate : NSPredicate {
	id _block;	// 8 = 0x8
}
- (id)initWithBlock:(id)block;	// 0x35eb45a5
- (id)initWithCoder:(id)coder;	// 0x35eb4635
- (id)_predicateBlock;	// 0x35eb4851
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x35eb4829
- (id)copyWithZone:(NSZone *)zone;	// 0x35eb4671
- (void)dealloc;	// 0x35eb46bd
- (void)encodeWithCoder:(id)coder;	// 0x35eb45f9
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;	// 0x35eb4711
- (id)predicateFormat;	// 0x35eb47e9
- (id)predicateWithSubstitutionVariables:(id)substitutionVariables;	// 0x35eb4841
@end

