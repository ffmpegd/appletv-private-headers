/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSNumber;

@interface MCNumber : NSObject <NSCoding> {
@private
	NSNumber *_number;	// 4 = 0x4
}
+ (id)numberWithInt:(int)int;	// 0x33066f61
+ (id)numberWithUnsignedInt:(unsigned)unsignedInt;	// 0x33066f19
- (id)initWithCoder:(id)coder;	// 0x33067119
- (id)initWithInt:(int)int;	// 0x330671d9
- (id)initWithUnsignedInt:(unsigned)unsignedInt;	// 0x3306724d
- (void)dealloc;	// 0x3306718d
- (id)descriptionWithLocale:(id)locale;	// 0x33066fa9
- (void)encodeWithCoder:(id)coder;	// 0x33066ef5
@end

