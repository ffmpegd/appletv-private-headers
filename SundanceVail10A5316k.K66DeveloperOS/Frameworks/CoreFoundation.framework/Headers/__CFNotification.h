/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface __CFNotification : NSObject <NSCopying> {
@private
	id _name;	// 4 = 0x4
	id _object;	// 8 = 0x8
	id _userInfo;	// 12 = 0xc
	BOOL _fouSemantics;	// 16 = 0x10
	BOOL _dyingObject;	// 17 = 0x11
}
@property(readonly, retain) id name;	// G=0x37089a65; converted property
@property(readonly, retain) id object;	// G=0x37089a75; converted property
@property(readonly, retain) id userInfo;	// G=0x3708fadd; converted property
- (id)initWithName:(CFStringRef)name object:(const void *)object userInfo:(CFDictionaryRef)info foundation:(BOOL)foundation;	// 0x3708998d
- (id)copyWithZone:(NSZone *)zone;	// 0x370f9f95
- (void)dealloc;	// 0x37089a85
- (void)finalize;	// 0x370f9fa5
- (unsigned)hash;	// 0x370f9e61
- (BOOL)isEqual:(id)equal;	// 0x370f9e89
// converted property getter: - (id)name;	// 0x37089a65
// converted property getter: - (id)object;	// 0x37089a75
// converted property getter: - (id)userInfo;	// 0x3708fadd
@end

