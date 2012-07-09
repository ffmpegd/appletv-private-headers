/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "BKSXPCCoding.h"
#import "BackBoardServices-Structs.h"


@interface BKSMachSendRight : NSObject <NSCopying, BKSXPCCoding> {
	unsigned _sendRight;	// 4 = 0x4
}
@property(assign, nonatomic) unsigned sendRight;	// G=0x36b624f5; S=0x36b62505; @synthesize=_sendRight
+ (BOOL)portRightIsUsable:(unsigned)usable;	// 0x36b6226d
+ (id)wrapSendRight:(unsigned)right;	// 0x36b622a9
- (id)initWithXPCDictionary:(id)xpcdictionary;	// 0x36b6245d
- (id)_initWithSendRight:(unsigned)sendRight insertRight:(BOOL)right;	// 0x36b6230d
- (id)copyWithZone:(NSZone *)zone;	// 0x36b6240d
- (void)dealloc;	// 0x36b62381
- (void)encodeWithXPCDictionary:(id)xpcdictionary;	// 0x36b624b1
- (BOOL)isUsable;	// 0x36b623d5
// declared property getter: - (unsigned)sendRight;	// 0x36b624f5
// declared property setter: - (void)setSendRight:(unsigned)right;	// 0x36b62505
@end
