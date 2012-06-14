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
- (id)initWithBlock:(id)block;	// 0x3164c595
- (id)initWithCoder:(id)coder;	// 0x3164c625
- (id)_predicateBlock;	// 0x3164c841
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x3164c819
- (id)copyWithZone:(NSZone *)zone;	// 0x3164c661
- (void)dealloc;	// 0x3164c6ad
- (void)encodeWithCoder:(id)coder;	// 0x3164c5e9
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;	// 0x3164c701
- (id)predicateFormat;	// 0x3164c7d9
- (id)predicateWithSubstitutionVariables:(id)substitutionVariables;	// 0x3164c831
@end
