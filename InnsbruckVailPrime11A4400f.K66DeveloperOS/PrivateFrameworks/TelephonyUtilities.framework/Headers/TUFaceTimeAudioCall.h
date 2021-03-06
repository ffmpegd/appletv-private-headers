/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import "TUCall.h"

@class IMAVChat;

@interface TUFaceTimeAudioCall : TUCall {
	IMAVChat *_chat;	// 36 = 0x24
}
@property(readonly, retain) IMAVChat *chat;	// G=0x329f4645; converted property
- (id)initWithChat:(id)chat;	// 0x329f4319
- (void)answer;	// 0x329f43d1
- (id)audioCategory;	// 0x329f4865
- (id)audioMode;	// 0x329f4871
- (id)bundleIDForHostingApplication;	// 0x329f453d
- (double)callDuration;	// 0x329f4741
- (int)callIdentifier;	// 0x329f4655
- (id)callerNameFromNetwork;	// 0x329f45fd
// converted property getter: - (id)chat;	// 0x329f4645
- (void)dealloc;	// 0x329f4359
- (id)description;	// 0x329f48cd
- (id)destinationID;	// 0x329f45c5
- (void)disconnect;	// 0x329f4429
- (BOOL)hold;	// 0x329f4421
- (BOOL)isAlerting;	// 0x329f4625
- (BOOL)isBlocked;	// 0x329f44ad
- (BOOL)isConferenced;	// 0x329f454d
- (BOOL)isEqual:(id)equal;	// 0x329f468d
- (BOOL)isMuted;	// 0x329f487d
- (BOOL)isOutgoing;	// 0x329f4485
- (BOOL)isTTY;	// 0x329f48c9
- (id)isoCountryCode;	// 0x329f47c1
- (void)joinConference;	// 0x329f4551
- (void)leaveConference;	// 0x329f4555
- (BOOL)managesAudioInterruptions;	// 0x329f4875
- (BOOL)needsManualInCallSounds;	// 0x329f4879
- (id)remoteParticipant;	// 0x329f4559
- (void)resume;	// 0x329f441d
- (int)service;	// 0x329f4481
- (BOOL)setMuted:(BOOL)muted;	// 0x329f48a1
- (double)startTime;	// 0x329f44b1
- (int)status;	// 0x329f47f9
- (BOOL)unhold;	// 0x329f4425
@end

