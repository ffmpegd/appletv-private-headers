/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import "VMUMemoryView_Swapped.h"


@interface VMUMemoryView_Swapped64 : VMUMemoryView_Swapped {
}
+ (id)memoryViewWithAddressRange:(VMURange)addressRange data:(char *)data memory:(id)memory;	// 0x35bd7461
- (BOOL)isCursorPointerAligned;	// 0x35bd7445
- (void)pointerAlignCursor;	// 0x35bd74c9
@end

