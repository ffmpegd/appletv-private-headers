/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSValue.h"
#import "Foundation-Structs.h"


@interface NSConcreteValue : NSValue {
	unsigned _specialFlags;	// 4 = 0x4
	void *typeInfo;	// 8 = 0x8
}
+ (void)initialize;	// 0x37326471
+ (BOOL)supportsSecureCoding;	// 0x373b07d5
- (const void *)_value;	// 0x3733eda5
- (id)copyWithZone:(NSZone *)zone;	// 0x37336a39
- (id)description;	// 0x373b02f9
- (void)encodeWithCoder:(id)coder;	// 0x373b07d9
- (void)getValue:(void *)value;	// 0x3730bf31
- (unsigned)hash;	// 0x37332ed1
- (BOOL)isEqualToValue:(id)value;	// 0x3733ec71
- (const char *)objCType;	// 0x3730bf01
@end

