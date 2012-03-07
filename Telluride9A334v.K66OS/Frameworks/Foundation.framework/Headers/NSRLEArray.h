/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"


@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying> {
@private
	NSRefCountedRunArray *theList;	// 4 = 0x4
}
- (id)init;	// 0x3061bdc5
- (id)initWithRefCountedRunArray:(NSRefCountedRunArray *)refCountedRunArray;	// 0x3061bdd9
- (void)_makeNewListFrom:(NSRefCountedRunArray *)from;	// 0x3061be4d
- (id)copyWithZone:(NSZone *)zone;	// 0x3061fab9
- (unsigned)count;	// 0x306db469
- (void)dealloc;	// 0x3061dbf9
- (id)description;	// 0x306db47d
- (void)finalize;	// 0x306db331
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x306db2ed
- (id)objectAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3061debd
- (id)objectAtIndex:(unsigned)index effectiveRange:(NSRange *)range runIndex:(unsigned *)index3;	// 0x306db389
- (id)objectAtRunIndex:(unsigned)runIndex length:(unsigned *)length;	// 0x306db425
@end

