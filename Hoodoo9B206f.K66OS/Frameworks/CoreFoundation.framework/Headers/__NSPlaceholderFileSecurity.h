/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSFileSecurity.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderFileSecurity : NSFileSecurity <NSCopying, NSCoding> {
}
+ (id)immutablePlaceholder;	// 0x31a8870d
+ (void)initialize;	// 0x31a88691
- (id)init;	// 0x31a88755
- (id)initWithCoder:(id)coder;	// 0x31a88791
- (id)initWithFileSec:(filesec *)fileSec;	// 0x31a8871d
- (id)copyWithZone:(NSZone *)zone;	// 0x31a889b5
- (void)dealloc;	// 0x31a8878d
- (void)encodeWithCoder:(id)coder;	// 0x31a88935
- (oneway void)release;	// 0x31a88781
- (id)retain;	// 0x31a8877d
- (unsigned)retainCount;	// 0x31a88785
@end
