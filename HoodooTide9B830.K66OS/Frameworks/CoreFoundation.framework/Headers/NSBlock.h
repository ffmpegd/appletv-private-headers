/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "NSCopying.h"
#import "CoreFoundation-Structs.h"


@interface NSBlock : NSObject <NSCopying> {
}
- (BOOL)_isDeallocating;	// 0x327b19a9
- (BOOL)_tryRetain;	// 0x327b19a5
- (id)copy;	// 0x326f1251
- (id)copyWithZone:(NSZone *)zone;	// 0x326f156d
- (void)invoke;	// 0x327b1939
- (void)performAfterDelay:(double)delay;	// 0x327b193d
@end
