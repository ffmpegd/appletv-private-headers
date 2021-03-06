/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSRLEArray.h"


@interface NSMutableRLEArray : NSRLEArray {
}
- (void)_setBlockCapacity:(unsigned)capacity;	// 0x3366ca71
- (id)copyWithZone:(NSZone *)zone;	// 0x3366db55
- (void)deleteObjectsInRange:(NSRange)range;	// 0x3372b539
- (void)insertObject:(id)object range:(NSRange)range;	// 0x3366c785
- (void)replaceObjectsInRange:(NSRange)range withObject:(id)object length:(unsigned)length;	// 0x3366d581
@end

