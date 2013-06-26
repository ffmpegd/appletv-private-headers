/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "MSStreamsProtocolDelegate.h"

@class NSMutableDictionary, MSBackoffManager, NSString;

@interface MSCupidStateMachine : NSObject <MSStreamsProtocolDelegate> {
	NSString *_personID;	// 4 = 0x4
	NSString *_manifestPath;	// 8 = 0x8
	NSMutableDictionary *_userManifest;	// 12 = 0xc
	MSBackoffManager *_streamsBackoffManager;	// 16 = 0x10
	MSBackoffManager *_MMCSBackoffManager;	// 20 = 0x14
	BOOL _hasDeactivated;	// 24 = 0x18
}
@property(retain, nonatomic) NSMutableDictionary *_userManifest;	// G=0x37c7e4ad; S=0x37c7e4bd; @synthesize
@property(assign, nonatomic) BOOL hasDeactivated;	// G=0x37c7e4f5; S=0x37c7e505; @synthesize=_hasDeactivated
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x37c7e4e5; @synthesize=_personID
- (id)initWithPersonID:(id)personID;	// 0x37c7d6ad
- (void).cxx_destruct;	// 0x37c7e515
- (void)_abort;	// 0x37c7e449
- (void)_backoffMMCSBackoffTimer;	// 0x37c7e0fd
- (void)_backoffStreamsBackoffTimer;	// 0x37c7dd59
- (void)_commitUserManifest;	// 0x37c7dba5
- (void)_didReceiveMMCSRetryAfterDate:(id)date;	// 0x37c7e289
- (void)_didReceiveStreamsRetryAfterDate:(id)date;	// 0x37c7dee5
- (void)_forget;	// 0x37c7e471
- (id)_latestNextActivityDate;	// 0x37c7e39d
- (void)_resetMMCSBackoffTimer;	// 0x37c7dff9
- (void)_resetStreamsBackoffTimer;	// 0x37c7dc55
- (void)_updateMasterManifest;	// 0x37c7e421
// declared property getter: - (id)_userManifest;	// 0x37c7e4ad
- (void)deactivate;	// 0x37c7dacd
- (void)dealloc;	// 0x37c7da8d
- (void)forget;	// 0x37c7db51
// declared property getter: - (BOOL)hasDeactivated;	// 0x37c7e4f5
// declared property getter: - (id)personID;	// 0x37c7e4e5
- (void)protocol:(id)protocol didReceiveRetryAfterDate:(id)date;	// 0x37c7e499
// declared property setter: - (void)setHasDeactivated:(BOOL)deactivated;	// 0x37c7e505
// declared property setter: - (void)set_userManifest:(id)manifest;	// 0x37c7e4bd
@end
