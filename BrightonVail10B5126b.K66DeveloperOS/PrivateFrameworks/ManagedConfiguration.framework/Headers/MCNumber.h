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
	NSNumber *_number;	// 4 = 0x4
}
+ (id)numberWithInt:(int)int;	// 0x344a24ad
+ (id)numberWithUnsignedInt:(unsigned)unsignedInt;	// 0x344a23ed
- (id)initWithCoder:(id)coder;	// 0x344a258d
- (id)initWithInt:(int)int;	// 0x344a24e9
- (id)initWithUnsignedInt:(unsigned)unsignedInt;	// 0x344a2429
- (void).cxx_destruct;	// 0x344a2791
- (id)descriptionWithLocale:(id)locale;	// 0x344a261d
- (void)encodeWithCoder:(id)coder;	// 0x344a256d
@end
