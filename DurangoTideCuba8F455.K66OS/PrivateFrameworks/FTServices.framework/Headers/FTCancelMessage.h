/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessage.h"

@class NSArray, NSNumber;

@interface FTCancelMessage : FTMessage {
	NSNumber *_reason;	// 24 = 0x18
	NSArray *_peers;	// 28 = 0x1c
}
@property(copy) NSArray *peers;	// G=0x33fa1c1d; S=0x33fa1c4d; @synthesize=_peers
@property(copy) NSNumber *reason;	// G=0x33fa1c35; S=0x33fa1c75; @synthesize=_reason
- (id)bagKey;	// 0x33fa19b5
- (void)dealloc;	// 0x33fa1a35
- (id)messageBody;	// 0x33fa1a91
// declared property getter: - (id)peers;	// 0x33fa1c1d
// declared property getter: - (id)reason;	// 0x33fa1c35
- (id)requiredKeys;	// 0x33fa19c1
// declared property setter: - (void)setPeers:(id)peers;	// 0x33fa1c4d
// declared property setter: - (void)setReason:(id)reason;	// 0x33fa1c75
@end
