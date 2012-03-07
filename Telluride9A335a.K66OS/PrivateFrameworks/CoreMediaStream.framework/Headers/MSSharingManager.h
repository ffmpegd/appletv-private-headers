/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSSharingManager.h"
#import "MSSharingProtocolDelegate.h"
#import "NSObject.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, MSSharingProtocol, NSMutableDictionary, NSString, NSArray, MSMediaStreamDaemon, NSTimer;
@protocol MSSharingManagerDelegate;

@protocol MSSharingManager <NSObject>
@property(assign, nonatomic) id<MSSharingManagerDelegate> delegate;
@property(readonly, assign) NSString *personID;
@property(retain, nonatomic) NSArray *shares;
// declared property getter: - (id)delegate;
- (void)modifyShare:(id)share;
// declared property getter: - (id)personID;
- (void)refreshCurrentShareState;
- (void)removeShare:(id)share;
- (void)respondToInvitation:(id)invitation accept:(BOOL)accept;
- (void)sendInvitationsForShares:(id)shares;
// declared property setter: - (void)setDelegate:(id)delegate;
// declared property setter: - (void)setShares:(id)shares;
// declared property getter: - (id)shares;
@end

@interface MSSharingManager : NSObject <MSSharingManager, MSSharingProtocolDelegate> {
@private
	NSString *_personID;	// 4 = 0x4
	NSString *_manifestPath;	// 8 = 0x8
	NSArray *_shares;	// 12 = 0xc
	NSMutableArray *_sharesWithLocalModifications;	// 16 = 0x10
	MSSharingProtocol *_protocol;	// 20 = 0x14
	int _state;	// 24 = 0x18
	BOOL _requestCurrentStateRequested;	// 28 = 0x1c
	NSMutableArray *_invitationQueue;	// 32 = 0x20
	NSMutableArray *_invitationResponseQueue;	// 36 = 0x24
	NSMutableDictionary *_manageShareByPersonID;	// 40 = 0x28
	NSMutableArray *_deleteQueue;	// 44 = 0x2c
	NSTimer *_manageShareDebounceTimer;	// 48 = 0x30
	id<MSSharingManagerDelegate> _delegate;	// 52 = 0x34
	MSMediaStreamDaemon *_daemon;	// 56 = 0x38
}
@property(assign, nonatomic) MSMediaStreamDaemon *daemon;	// G=0x322cf099; S=0x322cf0a9; @synthesize=_daemon
@property(assign, nonatomic) id<MSSharingManagerDelegate> delegate;	// G=0x322cf079; S=0x322cf089; @synthesize=_delegate
@property(readonly, assign) NSString *personID;	// G=0x322cf069; @synthesize=_personID
@property(retain, nonatomic) NSArray *shares;	// G=0x322ce015; S=0x322ce091; 
+ (id)_clearInstantiatedSharingManagersByPersonID;	// 0x322cdc6d
+ (void)abortAllActivities;	// 0x322cdc95
+ (id)existingSharingManagerForPersonID:(id)personID;	// 0x322cdc51
+ (void)forgetPersonID:(id)anId;	// 0x322cdd3d
+ (id)sharingManagerForPersonID:(id)personID;	// 0x322cdb79
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x322cdd8d
- (void)_performNextQueuedAction;	// 0x322ceb31
- (void)_requestCurrentShareState;	// 0x322ceaf1
- (void)_sendNextDeletion;	// 0x322ce665
- (void)_sendNextInvitation;	// 0x322ce7f9
- (void)_sendNextInvitationResponse;	// 0x322ce88d
- (void)_sendNextManagedShare;	// 0x322ce949
- (void)_shareDebounceTimerDidFire:(id)_shareDebounceTimer;	// 0x322ce32d
- (id)_sharesWithLocalModifications;	// 0x322ce61d
- (void)abort;	// 0x322cec4d
// declared property getter: - (id)daemon;	// 0x322cf099
- (void)dealloc;	// 0x322cdeed
// declared property getter: - (id)delegate;	// 0x322cf079
- (void)modifyShare:(id)share;	// 0x322ce3e9
// declared property getter: - (id)personID;	// 0x322cf069
- (void)refreshCurrentShareState;	// 0x322ce5fd
- (void)removeShare:(id)share;	// 0x322ce5c1
- (void)respondToInvitation:(id)invitation accept:(BOOL)accept;	// 0x322ce2d1
- (void)sendInvitationsForShares:(id)shares;	// 0x322ce295
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x322cf0a9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x322cf089
// declared property setter: - (void)setShares:(id)shares;	// 0x322ce091
// declared property getter: - (id)shares;	// 0x322ce015
- (void)sharingProtocol:(id)protocol didCompleteTransactionWithError:(id)error;	// 0x322cee71
- (void)sharingProtocol:(id)protocol didFailToSendInvitations:(id)sendInvitations;	// 0x322cf029
- (void)sharingProtocol:(id)protocol didFindShareState:(id)state;	// 0x322cedfd
- (void)sharingProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x322cef4d
@end

