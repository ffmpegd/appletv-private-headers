/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSValue.h"


@interface NSConcreteValue : NSValue {
	unsigned _specialFlags;	// 4 = 0x4
	void *typeInfo;	// 8 = 0x8
}
+ (void)initialize;	// 0x3158bdb9
- (const void *)_value;	// 0x315a46d9
- (id)copyWithZone:(NSZone *)zone;	// 0x3159c56d
- (id)description;	// 0x31610171
- (void)encodeWithCoder:(id)coder;	// 0x3161064d
- (void)getValue:(void *)value;	// 0x31571a79
- (unsigned)hash;	// 0x31598925
- (BOOL)isEqualToValue:(id)value;	// 0x315a45d1
- (const char *)objCType;	// 0x31571a2d
@end
